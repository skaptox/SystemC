// Copyright (c) 2017 Oscar Albornoz.

#include "./or_gate.h"

OrGate::OrGate(sc_module_name nm):sc_module(nm) {
  SC_METHOD(operation);
  sensitive << a_in << b_in;
}

OrGate::~OrGate() {}

void OrGate::operation() {
  c_out.write(a_in.read() || b_in.read());
}

