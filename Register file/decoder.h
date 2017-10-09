// Copyright (c) 2017 Oscar Albornoz.

#ifndef DECODER_7S_H_
#define DECODER_7S_H_
#include "./and_gate.h"
#include "./not_gate.h"
#include <systemc.h>

#include <iostream>

class Decoder : public sc_module{
 public:
  sc_in<bool> X_in[3];
  sc_out<bool> Y_out[8];

  SC_CTOR(Decoder);
  ~Decoder();

 private:
  AndGate3* _and[8];
  NotGate* _not[3];
  sc_signal<bool> not_sg[3];
};

#endif  // DECODER_7S_H_



