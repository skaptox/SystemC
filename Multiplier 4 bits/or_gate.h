// Copyright (c) 2017 Oscar Albornoz.

#ifndef OR_GATE_H_
#define OR_GATE_H_
#include <systemc.h>

class OrGate : public sc_module {
 public:
  sc_in<bool> a_in;
  sc_in<bool> b_in;
  sc_out<bool> c_out;

  SC_CTOR(OrGate);
  ~OrGate();
 private:
  void operation();
};

#endif  // OR_GATE_H_



