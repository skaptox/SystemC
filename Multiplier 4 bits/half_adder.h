// Copyright (c) 2017 Oscar Albornoz.

#ifndef HALFADDER_H_
#define HALFADDER_H_
#include <and_gate.h>
#include <systemc.h>
#include <xor_gate.h>

#include <iostream>

class HalfAdder: public sc_module {
 public:
  sc_in<bool> a_in, b_in;
  sc_out<bool> c_out, s_out;

  SC_CTOR(HalfAdder);
  ~HalfAdder();

 private:
  AndGate *and1;
  XorGate *xor1;
};

#endif  // HALFADDER_H


