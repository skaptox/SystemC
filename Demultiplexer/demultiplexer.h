// Copyright (c) 2017 Oscar Albornoz.

#ifndef DEMULTIPLEXER_H_
#define DEMULTIPLEXER_H_

#include <and_gate.h>
#include <decoder.h>
#include <not_gate.h>
#include <systemc.h>

class Demultiplexer: public sc_module{
 public:
  sc_in<bool> s0_in,  s1_in, i0_in;
  sc_out<bool> f0_out, f1_out, f2_out, f3_out;

  SC_CTOR(Demultiplexer);
  ~Demultiplexer();

 private:
  AndGate *and1, *and2, *and3, *and4;
  Decoder *deco;

  sc_signal<bool> sg_1,  sg_2, sg_3,  sg_4;
};

#endif  // DEMULTIPLEXER_H_


