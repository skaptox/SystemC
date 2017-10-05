// Copyright (c) 2017 Oscar Albornoz.

#ifndef DECODER_H_
#define DECODER_H_

#include <and_gate.h>
#include <not_gate.h>
#include <systemc.h>

#include <iostream>

class Decoder: public sc_module{
 public:
  sc_in<bool> s0_in, s1_in;
  sc_out<bool> d0_out, d1_out, d2_out, d3_out;

  SC_CTOR(Decoder);
  ~Decoder();

 private:
  AndGate *and1, *and2, *and3, *and4;
  NotGate *not1, *not2;

  sc_signal<bool> sg_1, sg_2;
};

#endif  // DECODER_H_


