// Copyright (c) 2017 Oscar Albornoz.

#ifndef MULTIPLEXER_H_
#define MULTIPLEXER_H_

#include <systemc.h>
#include <iostream>

typedef sc_int<32> Data;
typedef sc_int<32> size;

class Multiplexer : public sc_module {
 public:
  sc_in<Data> X_in[8];
  sc_in<size> selecter;
  sc_out<Data> Y_out;


  SC_CTOR(Multiplexer) {
    SC_METHOD(select);
    sensitive << selecter;

    for (int i = 0; i < 8; ++i) {
      sensitive << X_in[i];
    }
  };

  ~Multiplexer() {};

 private:
  void select()
  {

    auto state = selecter.read();
    for (int i = 0; i < 8; ++i) {
      if(state == i) {;
        Y_out.write(X_in[i].read());
      }
    }
  }
};

#endif  // MULTIPLEXER_H_




