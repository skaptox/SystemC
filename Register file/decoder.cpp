// Copyright (c) 2017 Oscar Albornoz.

#include "./decoder.h"

#include <string>

using std::to_string;
using std::string;

Decoder::Decoder(sc_module_name nm) : sc_module(nm) {
  for (int i = 0; i < 8; ++i) {
    _and[i] = new AndGate3(string("and" + to_string(i)).c_str());
  }

  for (int i = 0; i < 3; ++i) {
    _not[i] = new NotGate(string("not" + to_string(i)).c_str());
    _not[i]->a_in(X_in[i]);
    _not[i]->b_out(_sg[i]);
  }

  _and[0]->a_in(_sg[0]);
  _and[0]->b_in(_sg[1]);
  _and[0]->c_in(_sg[2]);
  _and[0]->d_out(Y_out[0]);

  _and[1]->a_in(X_in[0]);
  _and[1]->b_in(_sg[1]);
  _and[1]->c_in(_sg[2]);
  _and[1]->d_out(Y_out[1]);

  _and[2]->a_in(_sg[0]);
  _and[2]->b_in(X_in[1]);
  _and[2]->c_in(_sg[2]);
  _and[2]->d_out(Y_out[2]);

  _and[3]->a_in(X_in[0]);
  _and[3]->b_in(X_in[1]);
  _and[3]->c_in(_sg[2]);
  _and[3]->d_out(Y_out[3]);

  _and[4]->a_in(_sg[0]);
  _and[4]->b_in(_sg[1]);
  _and[4]->c_in(X_in[2]);
  _and[4]->d_out(Y_out[4]);

  _and[5]->a_in(X_in[0]);
  _and[5]->b_in(_sg[1]);
  _and[5]->c_in(X_in[2]);
  _and[5]->d_out(Y_out[5]);

  _and[6]->a_in(_sg[0]);
  _and[6]->b_in(X_in[1]);
  _and[6]->c_in(X_in[2]);
  _and[6]->d_out(Y_out[6]);

  _and[7]->a_in(X_in[0]);
  _and[7]->b_in(X_in[1]);
  _and[7]->c_in(X_in[2]);
  _and[7]->d_out(Y_out[7]);

}

Decoder::~Decoder() {
  for (int i = 0; i < 8; ++i) {
    delete _and[i];
  }

  for (int i = 0; i < 3; ++i) {
    delete _not[i];
  }
}

