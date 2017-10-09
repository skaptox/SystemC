// Copyright (c) 2017 Oscar Albornoz.

#include "./decoder.h"
#include "./testbench.h"

#include "./multiplexer.h"

int sc_main(int argc, char *argv[]) {
  sc_time PERIOD(10, SC_NS);
  sc_time DELAY(10, SC_NS);
  sc_clock clock("clock", PERIOD, 0.5, DELAY, true);

  RegisterFile reg_f("reg_f");
  testbench tb("tb");

  sc_signal<bool> X_sg[3];
  sc_signal<Data> e_sg[4];
  sc_signal<Data> data_sg, select_sg;

  for (int i = 0; i < 3; ++i) {
    reg_f.X_in[i](X_sg[i]);
  }



  reg_f.data_in(data_sg);
  reg_f.select(select_sg);

  for (int i = 0; i < 4; ++i) {
    reg_f.data_out[i](e_sg[i]);
  }



  reg_f.clk_in(clock);

  cout << "aqui voy" << endl;
  tb.clk_in(clock);

  cout << "aqui voy 2" << endl;

  for (int i = 0; i < 3; ++i) {
    tb.X_out[i](X_sg[i]);
  }
  tb.select(select_sg);
  tb.data_out(data_sg);

  for (int i = 0; i < 4; ++i) {
    tb.data_in[i](e_sg[i]);
  }


  sc_start();

  cout << "NOTA: " << "Las X indican en que registro se escribe Num (Binario al revez)\n"
                      "Select lee el archivo con ese indice\n"
                      "Por simplicidad todos los multiplexores estan conectados iguales y por\n"
                      "eso la salida es la misma" << endl;
  return 0;
}
