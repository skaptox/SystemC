// Copyright (c) 2017 Oscar Albornoz.

#ifndef OR_GATE_H_
#define OR_GATE_H_
#include <systemc.h>

class OrGate : public sc_module {
 public:
  sc_in<bool> a_in;
  sc_in<bool> b_in;
  sc_out<bool> c_out;

  SC_CTOR(OrGate);
  ~OrGate();
 private:
  void operation();
};

class OrGate3 : public sc_module {
 public:
  sc_in<bool> a_in;
  sc_in<bool> b_in;
  sc_in<bool> c_in;
  sc_out<bool> d_out;

  SC_CTOR(OrGate3);
  ~OrGate3();
 private:
  void operation();
};

class OrGate4 : public sc_module{
 public:
  sc_in<bool> a_in;
  sc_in<bool> b_in;
  sc_in<bool> c_in;
  sc_in<bool> d_in;
  sc_out<bool> e_out;

  SC_CTOR(OrGate4);
  ~OrGate4();
 private:
  void operation();
};

class OrGate5 : public sc_module{
 public:
  sc_in<bool> a_in;
  sc_in<bool> b_in;
  sc_in<bool> c_in;
  sc_in<bool> d_in;
  sc_in<bool> e_in;
  sc_out<bool> f_out;

  SC_CTOR(OrGate5);
  ~OrGate5();
 private:
  void operation();
};

#endif  // OR_GATE_H_



