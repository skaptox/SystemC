// Copyright (c) 2017 Oscar Albornoz.

#include "./or_gate.h"

OrGate::OrGate(sc_module_name nm):sc_module(nm) {
  SC_METHOD(operation);
  sensitive  <<  a_in  <<  b_in;
}

OrGate::~OrGate() {}

void OrGate::operation() {
  c_out.write(a_in.read() || b_in.read());
}

OrGate3::OrGate3(sc_module_name nm):sc_module(nm) {
  SC_METHOD(operation);
  sensitive << a_in << b_in << c_in;
}
OrGate3::~OrGate3() {}

void OrGate3::operation() {
  d_out.write(a_in.read() || b_in.read() || c_in.read());
}

OrGate4::OrGate4(sc_module_name nm):sc_module(nm) {
  SC_METHOD(operation);
  sensitive << a_in << b_in << c_in << d_in;
}
OrGate4::~OrGate4() {}

void OrGate4::operation() {
  e_out.write(a_in.read() || b_in.read()  || c_in.read() || d_in.read() );
}

OrGate5::OrGate5(sc_module_name nm) : sc_module(nm) {
  SC_METHOD(operation);
  sensitive << a_in << b_in << c_in << d_in << e_in;
}
OrGate5::~OrGate5() {}

void OrGate5::operation() {
  f_out.write(a_in.read() || b_in.read()  || c_in.read() || d_in.read() ||
    e_in.read());
}


