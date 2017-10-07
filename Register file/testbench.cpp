// Copyright (c) 2017 Oscar Albornoz.

#include "./testbench.h"

testbench::testbench(sc_module_name nm) : sc_module(nm) {
  SC_THREAD(test);
    sensitive << clk_in.neg();
}
testbench::~testbench() {}
void testbench::test() {

  /*
  // se utilizan dos wait()debido a que como el registro escribe y lee en
  // flancos diferentes del reloj
  // no se podria notar de forma inmediata el cambio (la lectura y la escritura)
  cout << "\n\tdata_in\tenable\tdata_out(data_in_the_register)" << endl;

  enable_out.write(1);
  data_out.write(15);
  wait();
  printf();

  enable_out.write(0);
  data_out.write(20);
  wait();
  printf();

  enable_out.write(0);
  data_out.write(3);
  wait();
  printf();

  enable_out.write(1);
  data_out.write(30);
  wait();
  printf();

  enable_out.write(0);
  data_out.write(7);
  wait();
  printf();
  sc_stop();
  */
}

void testbench::printf() {

  /*
  cout << sc_time_stamp() << "\t" << data_out.read() << "\t\t" <<
  enable_out.read() << "\t\t" << data_in.read() << endl;

  /*
  sc_time_stamp() << "\t" << data_out.read().to_string(SC_BIN) << "\t\t" <<
  enable_out.read() << "\t\t" << data_in.read().to_string(SC_BIN) << endl;
  */
}

