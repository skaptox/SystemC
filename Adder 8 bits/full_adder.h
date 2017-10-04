// Copyright (c) 2017 Oscar Albornoz.

#ifndef ADDER8B_FULLADDER_H_
#define ADDER8B_FULLADDER_H_

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

#endif  // ADDER8B_FULLADDER_H_


