// Copyright (c) 2017 Oscar Albornoz.

#include "./decoder.h"
#include "./testbench.h"

int sc_main(int argc, char *argv[]) {
  sc_time PERIOD(10, SC_NS);
  sc_time DELAY(10, SC_NS);
  sc_clock clock("clock", PERIOD, 0.5, DELAY, true);

  Decoder dec("dec");
  testbench tb("tb");

  /*

  sc_signal<bool> enable_sg;
  sc_signal<sc_int<kSize> >  data_sent_sg,  data_received_sg;

  reg.clk_in(clock);
  reg.data_in(data_sent_sg);
  reg.enable_in(enable_sg);
  reg.data_out(data_received_sg);

  tb.clk_in(clock);
  tb.data_out(data_sent_sg);
  tb.enable_out(enable_sg);
  tb.data_in(data_received_sg);
  sc_start();

  */
  return 0;
}
