// Copyright (c) 2017 Oscar Albornoz.

#include "./full_adder.h"

FullAdder::FullAdder(sc_module_name nm) : sc_module(nm) {
  and1 = new AndGate ("and1");
  and2 = new AndGate ("and2");
  xor1 = new XorGate ("xor1");
  xor2 = new XorGate ("xor2");
  or1 = new OrGate ("or1");

  xor1->a_in(a_in);
  xor1->b_in(b_in);
  xor1->c_out(sg_1);

  xor2->a_in(sg_1);
  xor2->b_in(c_in);
  xor2->c_out(s_out);

  and1->a_in(sg_1);
  and1->b_in(c_in);
  and1->c_out(sg_3);

  and2->a_in(a_in);
  and2->b_in(b_in);
  and2->c_out(sg_2);

  or1->a_in(sg_2);
  or1->b_in(sg_3);
  or1->c_out(c_out);
}

FullAdder::~FullAdder() {
  delete and1;
  delete and2;
  delete xor1;
  delete xor2;
  delete or1;
}

