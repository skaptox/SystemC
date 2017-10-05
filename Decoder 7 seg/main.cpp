// Copyright (c) 2017 Oscar Albornoz.

#include "./testbench.h"
#include "./decoder_7s.h"

int sc_main(int argv,  char* argc[]) {
  sc_time PERIOD(10, SC_NS);  // SC_PS SC_SEC . . .
  sc_time DELAY(10, SC_NS);
  sc_clock clock("clock", PERIOD, 0.5, DELAY, true);

  Decoder7s dc7("dc7");
  Testbench tb("tb");

  sc_signal<bool> a_sg,  b_sg, c_sg,  d_sg, e_sg, f_sg, g_sg;
  sc_signal<bool> A_sg, B_sg, C_sg, D_sg;

  dc7.A_in(A_sg);
  dc7.B_in(B_sg);
  dc7.C_in(C_sg);
  dc7.D_in(D_sg);

  dc7.a_out(a_sg);
  dc7.b_out(b_sg);
  dc7.c_out(c_sg);
  dc7.d_out(d_sg);
  dc7.e_out(e_sg);
  dc7.f_out(f_sg);
  dc7.g_out(g_sg);

  tb.a_in(a_sg);
  tb.b_in(b_sg);
  tb.c_in(c_sg);
  tb.d_in(d_sg);
  tb.e_in(e_sg);
  tb.f_in(f_sg);
  tb.g_in(g_sg);

  /**********/
  tb.clk_in(clock);

  tb.A_out(A_sg);
  tb.B_out(B_sg);
  tb.C_out(C_sg);
  tb.D_out(D_sg);


  sc_start();

  return 0;
}
