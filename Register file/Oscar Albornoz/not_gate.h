// Copyright (c) 2017 Oscar Albornoz.

#ifndef NOT_H_
#define NOT_H_
#include <systemc.h>

class NotGate : public sc_module{
 public:
  sc_in<bool> a_in;
  sc_out<bool> b_out;

  SC_CTOR(NotGate);
  ~NotGate();
 private:
  void operation();
};

#endif  // NOT_H_

