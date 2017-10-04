// Copyright (c) 2017 Oscar Albornoz.

#ifndef MULTIPLIER_4B_H
#define MULTIPLIER_4B_H

#include <full_adder.h>
#include <half_adder.h>
#include <systemc.h>

#include <iostream>

class Multiplier4b : public sc_module {
 public:
  sc_in<bool> x0_in, x1_in, x2_in, x3_in;
  sc_in<bool> y0_in, y1_in, y2_in, y3_in;
  sc_out<bool> z0_out, z1_out, z2_out, z3_out, z4_out, z5_out, z6_out, z7_out;

  SC_CTOR(Multiplier4b);
  ~Multiplier4b();

 private:
  AndGate *and1, *and2, *and3, *and4, *and5, *and6, *and7, *and8, *and9,
    *and10, *and11, *and12, *and13, *and14, *and15, *and16;

  HalfAdder *ha1, *ha2, *ha3, *ha4;
  FullAdder *fa1, *fa2, *fa3, *fa4, *fa5, *fa6, *fa7, *fa8;

  sc_signal<bool> sg_c1, sg_c2, sg_c3, sg_c4, sg_c5, sg_c6, sg_c7, sg_c8, sg_c9,
    sg_c10, sg_c11;

  sc_signal<bool> sg_s1, sg_s2, sg_s3, sg_s4, sg_s5, sg_s6;

  sc_signal<bool> sg_a1, sg_a2, sg_a3, sg_a4, sg_a5, sg_a6, sg_a7, sg_a8, sg_a9,
   sg_a10, sg_a11, sg_a12, sg_a13, sg_a14, sg_a15;
};

#endif  // MULTIPLIER_4B_H


