// Copyright (c) 2017 Oscar Albornoz.

#ifndef FULL_ADDER_H_
#define FULL_ADDER_H_

#include <and_gate.h>
#include <or_gate.h>
#include <xor_gate.h>
#include <systemc.h>

#include <iostream>

class FullAdder: public sc_module {
 public:
  sc_in<bool> a_in, b_in, c_in;
  sc_out<bool> c_out, s_out;

  SC_CTOR(FullAdder);
  ~FullAdder();

 private:
  AndGate *and1, *and2;
  XorGate *xor1, *xor2;
  OrGate *or1;

  sc_signal<bool> sg_1, sg_2, sg_3;
};

#endif  // FULL_ADDER_H_


