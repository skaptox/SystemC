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
  cout << "Tiempo " << endl;

  x0_out.write(0);
  x1_out.write(0);
  x2_out.write(0);
  x3_out.write(0);
  x4_out.write(0);
  x5_out.write(0);
  x6_out.write(0);
  x7_out.write(0);

  y0_out.write(0);
  y1_out.write(0);
  y2_out.write(0);
  y3_out.write(0);
  y4_out.write(0);
  y5_out.write(0);
  y6_out.write(0);
  y7_out.write(0);


  wait();
  print();

  x0_out.write(0);
  x1_out.write(0);
  x2_out.write(0);
  x3_out.write(0);
  x4_out.write(0);
  x5_out.write(0);
  x6_out.write(0);
  x7_out.write(0);

  y0_out.write(1);
  y1_out.write(1);
  y2_out.write(1);
  y3_out.write(1);
  y4_out.write(1);
  y5_out.write(1);
  y6_out.write(1);
  y7_out.write(1);

  wait();
  print();

  x0_out.write(1);
  x1_out.write(1);
  x2_out.write(0);
  x3_out.write(0);
  x4_out.write(0);
  x5_out.write(0);
  x6_out.write(0);
  x7_out.write(0);

  y0_out.write(1);
  y1_out.write(1);
  y2_out.write(0);
  y3_out.write(0);
  y4_out.write(0);
  y5_out.write(0);
  y6_out.write(0);
  y7_out.write(0);

  wait();
  print();

  sc_stop();
}

void Testbench::print() {
  cout << sc_time_stamp() << "  " << x7_out.read() <<
  x6_out.read() <<  x5_out.read() << x4_out.read() << x3_out.read() <<
  x2_out.read() <<  x1_out.read() << x0_out.read() << "  " << y7_out.read() <<
  y6_out.read() <<  y5_out.read() << y4_out.read() << y3_out.read() <<
  y2_out.read() <<  y1_out.read() << y0_out.read() << " " << z7_in.read() <<
  z6_in.read() << z5_in.read() << z4_in.read() << z3_in.read() << z2_in.read()
  << z1_in.read() << z0_in.read() << endl;
}


