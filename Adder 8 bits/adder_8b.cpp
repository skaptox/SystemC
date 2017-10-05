// Copyright (c) 2017 Oscar Albornoz.

#include "./adder_8b.h"

Adder8b::Adder8b(sc_module_name nm) : sc_module(nm) {
    fa1 = new FullAdder ("fa1");
    fa2 = new FullAdder ("fa2");
    fa3 = new FullAdder ("fa3");
    fa4 = new FullAdder ("fa4");
    fa5 = new FullAdder ("fa5");
    fa6 = new FullAdder ("fa6");
    fa7 = new FullAdder ("fa7");
    fa8 = new FullAdder ("fa8");

    fa1->a_in(x0_in);
    fa1->b_in(y0_in);
    fa1->c_in(sg_0);
    fa1->c_out(sg_1);
    fa1->s_out(z0_out);

    fa2->a_in(x1_in);
    fa2->b_in(y1_in);
    fa2->c_in(sg_1);
    fa2->c_out(sg_2);
    fa2->s_out(z1_out);

    fa3->a_in(x2_in);
    fa3->b_in(y2_in);
    fa3->c_in(sg_2);
    fa3->c_out(sg_3);
    fa3->s_out(z2_out);

    fa4->a_in(x3_in);
    fa4->b_in(y3_in);
    fa4->c_in(sg_3);
    fa4->c_out(sg_4);
    fa4->s_out(z3_out);

    fa5->a_in(x4_in);
    fa5->b_in(y4_in);
    fa5->c_in(sg_4);
    fa5->c_out(sg_5);
    fa5->s_out(z4_out);

    fa6->a_in(x5_in);
    fa6->b_in(y5_in);
    fa6->c_in(sg_5);
    fa6->c_out(sg_6);
    fa6->s_out(z5_out);

    fa7->a_in(x6_in);
    fa7->b_in(y6_in);
    fa7->c_in(sg_6);
    fa7->c_out(sg_7);
    fa7->s_out(z6_out);

    fa8->a_in(x7_in);
    fa8->b_in(y7_in);
    fa8->c_in(sg_7);
    fa8->c_out(sg_8);
    fa8->s_out(z7_out);
}

Adder8b::~Adder8b() {
  delete fa1;
  delete fa2;
  delete fa3;
  delete fa4;
  delete fa5;
  delete fa6;
  delete fa7;
  delete fa8;
}

