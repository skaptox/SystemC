// Copyright (c) 2017 Oscar Albornoz.

#ifndef ADDER8B_TESTBENCH_H_
#define ADDER8B_TESTBENCH_H_
#include <systemc.h>
#include <iostream>

class Testbench : public sc_module {
 public:
  sc_in<bool> clk_in;
  sc_out<bool> x0_out, x1_out, x2_out, x3_out, x4_out, x5_out, x6_out, x7_out;
  sc_out<bool> y0_out, y1_out, y2_out, y3_out, y4_out, y5_out, y6_out, y7_out;
  sc_in<bool> z0_in,  z1_in, z2_in, z3_in, z4_in,  z5_in, z6_in, z7_in;

  SC_CTOR(Testbench);
  ~Testbench();

 private:
  void test();
  void print();
};

#endif  // ADDER8B_TESTBENCH_H_
