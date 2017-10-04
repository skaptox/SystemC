// Copyright (c) 2017 Oscar Albornoz.

#ifndef ADDER8B_AND_GATE_H_
#define ADDER8B_AND_GATE_H_

#include <systemc.h>

class AndGate : public sc_module {
 public:
  sc_in<bool> a_in;
  sc_in<bool> b_in;
  sc_out<bool> c_out;

  SC_CTOR(AndGate);
  ~AndGate();

 private:
  void operation();
};

#endif  // ADDER8B_AND_GATE_H_



