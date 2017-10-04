// Copyright (c) 2017 Oscar Albornoz.

#include "./half_adder.h"

HalfAdder::HalfAdder(sc_module_name nm) : sc_module(nm) {
  and1 = new AndGate ("and1");
  xor1 = new XorGate ("xor1");

  xor1->a_in(a_in);
  xor1->b_in(b_in);
  xor1->c_out(s_out);

  and1->a_in(a_in);
  and1->b_in(b_in);
  and1->c_out(c_out);
}

HalfAdder::~HalfAdder() {
  delete and1;
  delete xor1;
}

