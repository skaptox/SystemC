// Copyright (c) 2017 Oscar Albornoz.

#include "./xor_gate.h"

XorGate::XorGate(sc_module_name nm) : sc_module(nm) {
  SC_METHOD(operation);
  sensitive << a_in << b_in;
}
XorGate::~XorGate() {}

void XorGate::operation() {
  c_out.write(a_in.read() ^ b_in.read());
}

