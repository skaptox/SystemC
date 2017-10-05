// Copyright (c) 2017 Oscar Albornoz.

#include "./demultiplexer.h"

Demultiplexer::Demultiplexer(sc_module_name nm):sc_module(nm) {
  and1 = new AndGate("and1");
  and2 = new AndGate("and2");
  and3 = new AndGate("and3");
  and4 = new AndGate("and4");
  deco = new Decoder("deco");

  deco->s1_in(s1_in);
  deco->s0_in(s0_in);

  deco->d0_out(sg_1);
  deco->d1_out(sg_2);
  deco->d2_out(sg_3);
  deco->d3_out(sg_4);

  and1->a_in(i0_in);
  and1->b_in(sg_4);
  and1->c_out(f3_out);

  and2->a_in(i0_in);
  and2->b_in(sg_3);
  and2->c_out(f2_out);

  and3->a_in(i0_in);
  and3->b_in(sg_2);
  and3->c_out(f1_out);

  and4->a_in(i0_in);
  and4->b_in(sg_1);
  and4->c_out(f0_out);
}

Demultiplexer::~Demultiplexer() {
  delete and1;
  delete and2;
  delete and3;
  delete and4;
  delete deco;
}

