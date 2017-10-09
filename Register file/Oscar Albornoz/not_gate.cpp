// Copyright (c) 2017 Oscar Albornoz.

#include "./not_gate.h"

NotGate::NotGate(sc_module_name nm):sc_module(nm) {
  SC_METHOD(operation);
  sensitive << a_in;
}

void NotGate::operation() {
  if (a_in == 0) {
    b_out.write(1);
  } else {
    b_out.write(0);
  }
}

NotGate::~NotGate() {}
