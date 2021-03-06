// Copyright (c) 2017 Oscar Albornoz.

#ifndef AND_GATE_H_
#define AND_GATE_H_

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

class AndGate3: public sc_module {
 public:
  sc_in<bool> a_in;
  sc_in<bool> b_in;
  sc_in<bool> c_in;
  sc_out<bool> d_out;

  SC_CTOR(AndGate3);
  ~AndGate3();
 private:
  void operation();
};

#endif  // AND_GATE_H_



