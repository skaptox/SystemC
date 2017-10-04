// Copyright (c) 2017 Oscar Albornoz.

#include "./testbench.h"
#include "./multiplier_4b.h"

int sc_main(int argv,  char* argc[]) {
  sc_time PERIOD(10, SC_NS);
  sc_time DELAY(10, SC_NS);
  sc_clock clock("clock", PERIOD, 0.5, DELAY, true);

  Multiplier4b ml4("ml4");
  Testbench tb("tb");

  sc_signal<bool> x0_sg,  x1_sg, x2_sg,  x3_sg;
  sc_signal<bool> y0_sg,  y1_sg, y2_sg,  y3_sg;

  sc_signal<bool> z0_sg,  z1_sg, z2_sg,  z3_sg, z4_sg,  z5_sg, z6_sg,  z7_sg;

  ml4.x0_in(x0_sg);
  ml4.x1_in(x1_sg);
  ml4.x2_in(x2_sg);
  ml4.x3_in(x3_sg);
  ml4.y0_in(y0_sg);
  ml4.y1_in(y1_sg);
  ml4.y2_in(y2_sg);
  ml4.y3_in(y3_sg);

  ml4.z0_out(z0_sg);
  ml4.z1_out(z1_sg);
  ml4.z2_out(z2_sg);
  ml4.z3_out(z3_sg);
  ml4.z4_out(z4_sg);
  ml4.z5_out(z5_sg);
  ml4.z6_out(z6_sg);
  ml4.z7_out(z7_sg);

  //
  tb.x0_out(x0_sg);
  tb.x1_out(x1_sg);
  tb.x2_out(x2_sg);
  tb.x3_out(x3_sg);
  tb.y0_out(y0_sg);
  tb.y1_out(y1_sg);
  tb.y2_out(y2_sg);
  tb.y3_out(y3_sg);
  /**********/
  tb.clk_in(clock);

  tb.z0_in(z0_sg);
  tb.z1_in(z1_sg);
  tb.z2_in(z2_sg);
  tb.z3_in(z3_sg);
  tb.z4_in(z4_sg);
  tb.z5_in(z5_sg);
  tb.z6_in(z6_sg);
  tb.z7_in(z7_sg);

  sc_start();

  return 0;
}

