// Copyright (c) 2017 Oscar Albornoz.

#ifndef DECODER_7S_H_
#define DECODER_7S_H_
#include <and_gate.h>
#include <not_gate.h>
#include <or_gate.h>
#include <systemc.h>

#include <iostream>

class Decoder7s: public sc_module{
 public:
  sc_in<bool> A_in, B_in, C_in, D_in;;
  sc_out<bool> a_out, b_out, c_out, d_out, e_out, f_out, g_out;

  SC_CTOR(Decoder7s);
  ~Decoder7s();

 private:
  AndGate *andAB, *andBD, *andCD;
  AndGate *andBCn, *andBDn, *andBnC, *andCDn;
  AndGate *andBnDn, *andCnDn;

  AndGate3 *andBCnD;

  OrGate4 *or1, *or6, *or7;
  OrGate3 *or2, *or3;
  OrGate5 *or4;
  OrGate *or5;

  NotGate *notB, *notC, *notD;

  sc_signal<bool> sg_Bn, sg_Cn, sg_Dn;
  sc_signal<bool> sg_aAB, sg_aBD, sg_aCD;
  sc_signal<bool> sg_aBCn, sg_aBDn, sg_aBnC, sg_aCDn;
  sc_signal<bool> sg_aBnDn, sg_aCnDn;
  sc_signal<bool> sg_aBCnD;
};

#endif  // DECODER_7S_H_



