// Copyright (c) 2017 Oscar Albornoz.

#include "./testbench.h"
testbench :: testbench(sc_module_name nm) : sc_module(nm)
{
  SC_THREAD(test);
    sensitive<<clk_in.neg();
}
testbench :: ~testbench(){}


void testbench::test(){
  cout<<"X0\tX1\tX2\tNum\tSele\tOut0\tOut01\tOut02\tOut03"<<endl;

  X_out[0].write(0);
  X_out[1].write(0);
  X_out[2].write(0);

  data_out.write(50);
  select.write(7);

  wait();
  print();

  X_out[0].write(0);
  X_out[1].write(0);
  X_out[2].write(1);
  data_out.write(57);
  select.write(0);

  wait();
  print();

  X_out[0].write(0);
  X_out[1].write(1);
  X_out[2].write(0);
  data_out.write(14);
  select.write(2);

  wait();
  print();

  X_out[0].write(1);
  X_out[1].write(0);
  X_out[2].write(0);
  data_out.write(12);
  select.write(3);

  wait();
  print();

  X_out[0].write(0);
  X_out[1].write(1);
  X_out[2].write(1);
  data_out.write(20);
  select.write(4);

  wait();
  print();

  X_out[0].write(1);
  X_out[1].write(0);
  X_out[2].write(1);
  data_out.write(24);
  select.write(5);

  wait();
  print();

  X_out[0].write(1);
  X_out[1].write(1);
  X_out[2].write(0);
  data_out.write(11);
  select.write(6);

  wait();
  print();

  X_out[0].write(1);
  X_out[1].write(1);
  X_out[2].write(1);
  data_out.write(6);
  select.write(7);

  wait();
  print();

  sc_stop();
}

void testbench::print() {
  cout << X_out[0].read()<<"\t"<<X_out[1].read()<<"\t"<<X_out[2].read()<<"\t"<<data_out.read()<<"\t"
  <<select.read()<<"\t"<<data_in[0].read()<<"\t"<<data_in[1].read()<<"\t"<<data_in[2].read()<<"\t"
  <<data_in[3].read()<<"\t"<<endl;
}

