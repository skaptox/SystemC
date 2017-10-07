// Copyright (c) 2017 Oscar Albornoz.

#ifndef REGISTER_H_
#define REGISTER_H_

#include <systemc.h>
#include <iostream>

const size_t kSize = 32;

class Register : public sc_module {
 public:
  sc_in<bool> clk_in, enable_in;
  sc_in<sc_int<kSize> > data_in;
  sc_out<sc_int<kSize> > data_out;
  sc_int<kSize> data;

  SC_CTOR(Register) {
    data = 0;

    SC_METHOD(write);
    sensitive << clk_in.neg();

    SC_METHOD(read);
    sensitive << clk_in.pos();
  }

 private:
  void write() {
    if (enable_in.read() == true) {
      data = data_in.read();
    }
  }

  void read() {
    data_out.write(data);
  }
};
#endif  // REGISTER_H_
