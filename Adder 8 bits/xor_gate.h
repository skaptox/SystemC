// Copyright (c) 2017 Oscar Albornoz.

#ifndef ADDER8B_XOR_GATE_H_
#define ADDER8B_XOR_GATE_H_
#include <systemc.h>

class XorGate : public sc_module {
 public:
  sc_in<bool> a_in;
  sc_in<bool> b_in;
  sc_out<bool> c_out;

  SC_CTOR(XorGate);
  ~XorGate();
 private:
  void operation();
};

#endif  // ADDER8B_XOR_GATE_H_



