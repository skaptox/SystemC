// Copyright (c) 2017 Oscar Albornoz.

#include "./and_gate.h"

AndGate::AndGate(sc_module_name nm) : sc_module(nm) {
  SC_METHOD(operation);
  sensitive << a_in << b_in;
}

AndGate::~AndGate() {}

void AndGate::operation() {
  c_out.write(a_in.read() && b_in.read());
}

AndGate3::AndGate3(sc_module_name nm) : sc_module(nm) {
  SC_METHOD(operation);
  sensitive << a_in << b_in << c_in;
}

AndGate3::~AndGate3() {}

void AndGate3::operation() {
    d_out.write(a_in.read() && b_in.read() && c_in.read());
}



