// Copyright (c) 2017 Oscar Albornoz.

#include "./testbench.h"

#include <iostream>

using std::cout;
using std::endl;

Testbench::Testbench(sc_module_name nm) : sc_module(nm) {
  SC_THREAD(test);
  // sensitive << clk_in;
  sensitive << clk_in.neg();
  // sensitive << clk_in.neg();
  dont_initialize();
}

Testbench::~Testbench() {}

void Testbench::test() {
  cout << "Tiempo ABCD Fabcdefg" << endl;

  A_out.write(0);
  B_out.write(0);
  C_out.write(0);
  D_out.write(0);

  wait();
  print();

  A_out.write(0);
  B_out.write(0);
  C_out.write(0);
  D_out.write(1);

  wait();
  print();

  A_out.write(0);
  B_out.write(0);
  C_out.write(1);
  D_out.write(0);

  wait();
  print();

  A_out.write(0);
  B_out.write(0);
  C_out.write(1);
  D_out.write(1);

  wait();
  print();

  A_out.write(0);
  B_out.write(1);
  C_out.write(0);
  D_out.write(0);

  wait();
  print();

  A_out.write(0);
  B_out.write(1);
  C_out.write(0);
  D_out.write(1);

  wait();
  print();

  A_out.write(0);
  B_out.write(1);
  C_out.write(1);
  D_out.write(0);

  wait();
  print();

  A_out.write(0);
  B_out.write(1);
  C_out.write(1);
  D_out.write(1);

  wait();
  print();

  A_out.write(1);
  B_out.write(0);
  C_out.write(0);
  D_out.write(0);

  wait();
  print();

  A_out.write(1);
  B_out.write(0);
  C_out.write(0);
  D_out.write(1);

  wait();
  print();

  cout << "Don't care" << endl;




  sc_stop();
}

void Testbench::print() {
  cout << sc_time_stamp() << "  " << A_out.read() <<B_out.read() <<C_out.read()
  << D_out.read() << " " << a_in.read() << b_in.read() << c_in.read() <<
  d_in.read() << e_in.read() << f_in.read() << g_in.read() << "\t" << endl;
}

