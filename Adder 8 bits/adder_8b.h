// Copyright (c) 2017 Oscar Albornoz.

#ifndef ADDER8B_SUMADOR8B_H_
#define ADDER8B_SUMADOR8B_H_

#include <full_adder.h>
#include <systemc.h>

#include <iostream>

class Adder8b: public sc_module {
 public:
  sc_in<bool> x0_in, x1_in, x2_in, x3_in, x4_in, x5_in, x6_in, x7_in;
  sc_in<bool> y0_in, y1_in, y2_in, y3_in, y4_in, y5_in, y6_in, y7_in;
  sc_out<bool> z0_out,  z1_out, z2_out, z3_out, z4_out,  z5_out, z6_out, z7_out;

  SC_CTOR(Adder8b);
  ~Adder8b();
 private:
  FullAdder *fa1, *fa2, *fa3, *fa4, *fa5, *fa6, *fa7, *fa8;
  sc_signal<bool> sg_0, sg_1, sg_2, sg_3, sg_4, sg_5, sg_6, sg_7, sg_8;
};

#endif  // ADDER8B_SUMADOR8B_H_


