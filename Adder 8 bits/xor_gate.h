// Copyright (c) 2017 Oscar Albornoz.

#ifndef XOR_GATE_H_
#define XOR_GATE_H_
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

#endif  // XOR_GATE_H_



