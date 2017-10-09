// Copyright (c) 2017 Oscar Albornoz.

#ifndef REGISTER_FILE_H_
#define REGISTER_FILE_H_

#include <systemc.h>
#include <iostream>

#include "./decoder.h"
#include "./multiplexer.h"
#include "./register.h"

typedef sc_int<32> Data;
typedef sc_int<32> size;

class RegisterFile : public sc_module {
 public:
  sc_in<bool> clk_in, X_in[3];
  sc_in<Data> data_in;
  sc_in<size> select;
  sc_out<Data> data_out[4];


  SC_CTOR(RegisterFile);
  ~RegisterFile();

 private:
  Decoder *dec;
  Multiplexer *mul[4];

  Register *reg[8];
  sc_signal<bool> b_sg[8];
  sc_signal<Data> c_sg[8];

};
#endif  // REGISTER_FILE_H_