// Copyright (c) 2017 Oscar Albornoz.

#include "./decoder.h"

Decoder::Decoder(sc_module_name nm) : sc_module(nm) {
  and1 = new AndGate("and1");
  and2 = new AndGate("and2");
  and3 = new AndGate("and3");
  and4 = new AndGate("and4");
  not1 = new NotGate("not1");
  not2 = new NotGate("not2");

  not1->a_in(s0_in);
  not1->b_out(sg_1);

  not2->a_in(s1_in);
  not2->b_out(sg_2);

  and1->a_in(sg_1);
  and1->b_in(sg_2);
  and1->c_out(d0_out);

  and2->a_in(s0_in);
  and2->b_in(sg_2);
  and2->c_out(d1_out);

  and3->a_in(s1_in);
  and3->b_in(sg_1);
  and3->c_out(d2_out);

  and4->a_in(s0_in);
  and4->b_in(s1_in);
  and4->c_out(d3_out);
}

Decoder::~Decoder() {
  delete and1;
  delete and2;
  delete and3;
  delete and4;
  delete not1;
  delete not2;
}

