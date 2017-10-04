// Copyright (c) 2017 Oscar Albornoz.

#include "./multiplier_4b.h"

Multiplier4b::Multiplier4b(sc_module_name nm):sc_module(nm) {
  and1 = new AndGate ("and1");
  and2 = new AndGate ("and2");
  and3 = new AndGate ("and3");
  and4 = new AndGate ("and4");
  and5 = new AndGate ("and5");
  and6 = new AndGate ("and6");
  and7 = new AndGate ("and7");
  and8 = new AndGate ("and8");
  and9 = new AndGate ("and9");
  and10 = new AndGate ("and10");
  and11 = new AndGate ("and11");
  and12 = new AndGate ("and12");
  and13 = new AndGate ("and13");
  and14 = new AndGate ("and14");
  and15 = new AndGate ("and15");
  and16 = new AndGate ("and16");

  ha1 = new HalfAdder ("ha1");
  ha2 = new HalfAdder ("ha2");
  ha3 = new HalfAdder ("ha3");
  ha4 = new HalfAdder ("ha4");

  fa1 = new FullAdder ("fa1");
  fa2 = new FullAdder ("fa2");
  fa3 = new FullAdder ("fa3");
  fa4 = new FullAdder ("fa4");
  fa5 = new FullAdder ("fa5");
  fa6 = new FullAdder ("fa6");
  fa7 = new FullAdder ("fa7");
  fa8 = new FullAdder ("fa8");

  and1->a_in(x0_in);
  and1->b_in(y0_in);
  and1->c_out(z0_out);

  and2->a_in(x1_in);
  and2->b_in(y0_in);
  and2->c_out(sg_a1);

  and3->a_in(x2_in);
  and3->b_in(y0_in);
  and3->c_out(sg_a2);

  and4->a_in(x3_in);
  and4->b_in(y0_in);
  and4->c_out(sg_a3);

  // Segundo Nivel

  and5->a_in(x0_in);
  and5->b_in(y1_in);
  and5->c_out(sg_a4);

  and6->a_in(x1_in);
  and6->b_in(y1_in);
  and6->c_out(sg_a5);

  and7->a_in(x2_in);
  and7->b_in(y1_in);
  and7->c_out(sg_a6);

  and8->a_in(x3_in);
  and8->b_in(y1_in);
  and8->c_out(sg_a7);

  ha1->a_in(sg_a1);
  ha1->b_in(sg_a4);
  ha1->c_out(sg_c1);
  ha1->s_out(z1_out);

  fa1->a_in(sg_a2);
  fa1->b_in(sg_a5);
  fa1->c_in(sg_c1);
  fa1->c_out(sg_c2);
  fa1->s_out(sg_s1);

  fa2->a_in(sg_a3);
  fa2->b_in(sg_a6);
  fa2->c_in(sg_c2);
  fa2->c_out(sg_c3);
  fa2->s_out(sg_s2);

  ha2->a_in(sg_a7);
  ha2->b_in(sg_c3);
  ha2->c_out(sg_c4);
  ha2->s_out(sg_s3);

  // Tercer Nivel

  and9->a_in(x0_in);
  and9->b_in(y2_in);
  and9->c_out(sg_a8);

  and10->a_in(x1_in);
  and10->b_in(y2_in);
  and10->c_out(sg_a9);

  and11->a_in(x2_in);
  and11->b_in(y2_in);
  and11->c_out(sg_a10);

  and12->a_in(x3_in);
  and12->b_in(y2_in);
  and12->c_out(sg_a11);

  ha3->a_in(sg_s1);
  ha3->b_in(sg_a8);
  ha3->c_out(sg_c5);
  ha3->s_out(z2_out);

  fa3->a_in(sg_s2);
  fa3->b_in(sg_a9);
  fa3->c_in(sg_c5);
  fa3->c_out(sg_c6);
  fa3->s_out(sg_s4);

  fa4->a_in(sg_s3);
  fa4->b_in(sg_a10);
  fa4->c_in(sg_c6);
  fa4->c_out(sg_c7);
  fa4->s_out(sg_s5);

  fa5->a_in(sg_c4);
  fa5->b_in(sg_a11);
  fa5->c_in(sg_c7);
  fa5->c_out(sg_c8);
  fa5->s_out(sg_s6);

  // Cuarto Nivel

  and13->a_in(x0_in);
  and13->b_in(y3_in);
  and13->c_out(sg_a12);

  and14->a_in(x1_in);
  and14->b_in(y3_in);
  and14->c_out(sg_a13);

  and15->a_in(x2_in);
  and15->b_in(y3_in);
  and15->c_out(sg_a14);

  and16->a_in(x3_in);
  and16->b_in(y3_in);
  and16->c_out(sg_a15);

  ha4->a_in(sg_s4);
  ha4->b_in(sg_a12);
  ha4->c_out(sg_c9);
  ha4->s_out(z3_out);

  fa6->a_in(sg_s5);
  fa6->b_in(sg_a13);
  fa6->c_in(sg_c9);
  fa6->c_out(sg_c10);
  fa6->s_out(z4_out);

  fa7->a_in(sg_s6);
  fa7->b_in(sg_a14);
  fa7->c_in(sg_c10);
  fa7->c_out(sg_c11);
  fa7->s_out(z5_out);

  fa8->a_in(sg_c8);
  fa8->b_in(sg_a15);
  fa8->c_in(sg_c11);
  fa8->c_out(z7_out);
  fa8->s_out(z6_out);
}

Multiplier4b::~Multiplier4b() {
  delete and1;
  delete and2;
  delete and3;
  delete and4;
  delete and5;
  delete and6;
  delete and7;
  delete and8;
  delete and9;
  delete and10;
  delete and11;
  delete and12;
  delete and13;
  delete and14;
  delete and15;
  delete and16;

  delete ha1;
  delete ha2;
  delete ha3;
  delete ha4;

  delete fa1;
  delete fa2;
  delete fa3;
  delete fa4;
  delete fa5;
  delete fa6;
  delete fa7;
  delete fa8;
}

