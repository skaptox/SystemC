#ifndef TESTBENCH_H
#define TESTBENCH_H
#include <systemc.h>
#include <iostream>

#include "register_file.h"

class testbench : public sc_module{
 public:
  sc_in<sc_int<32>> data_in[4];
  sc_in<bool> clk_in;

  sc_out<bool> X_out[3];
  sc_out<sc_int<32>> data_out;
  sc_out<sc_int<32>> select;

  SC_CTOR(testbench);
  ~testbench();

  private:
   void test();
   void print();
};
#endif
