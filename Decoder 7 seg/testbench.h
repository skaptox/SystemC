// Copyright (c) 2017 Oscar Albornoz.

#ifndef TESTBENCH_H_
#define TESTBENCH_H_
#include <systemc.h>
#include <iostream>

class Testbench : public sc_module {
 public:
  sc_in<bool> clk_in;

  sc_out<bool> A_out,  B_out, C_out, D_out;;
  sc_in<bool> a_in, b_in, c_in, d_in, e_in, f_in, g_in;

  SC_CTOR(Testbench);
  ~Testbench();

 private:
  void test();
  void print();
};

#endif  // TESTBENCH_H_
