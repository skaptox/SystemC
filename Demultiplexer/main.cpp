// Copyright (c) 2017 Oscar Albornoz.

#include "./demultiplexer.h"
#include "./testbench.h"

int sc_main(int argv,  char* argc[]) {
  sc_time PERIOD(10, SC_NS);  // SC_PS SC_SEC . . .
  sc_time DELAY(10, SC_NS);
  sc_clock clock("clock", PERIOD, 0.5, DELAY, true);

  Demultiplexer dm("dm");
  Testbench tb("tb");

  sc_signal<bool> f0_sg, f1_sg, f2_sg, f3_sg;
  sc_signal<bool> s0_sg, s1_sg;
  sc_signal<bool> i0_sg;

  dm.s0_in(s0_sg);
  dm.s1_in(s1_sg);
  dm.i0_in(i0_sg);

  dm.f0_out(f0_sg);
  dm.f1_out(f1_sg);
  dm.f2_out(f2_sg);
  dm.f3_out(f3_sg);
  //
  tb.f0_in(f0_sg);
  tb.f1_in(f1_sg);
  tb.f2_in(f2_sg);
  tb.f3_in(f3_sg);
  /**********/
  tb.clk_in(clock);

  tb.s0_out(s0_sg);
  tb.s1_out(s1_sg);
  tb.i0_out(i0_sg);

  sc_start();

  return 0;
}
