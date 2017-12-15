/*********************************************************************
AUTOR:	Oscar Daniel Albornoz Mora
EMAIL:		oalbornoz08@gmail.com
ORGANIZACION: 	Universidad de Los Andes (ULA)
ASIGNATURA:	Arquitectura de computadoras
ARCHIVO:
LENGUAJE:	C++ standard
REQUERIMIENTOS:	Compilador para C++ y libreria SystemC
DESCRIPCION:
**********************************************************************/


#ifndef TESTBENCH_H
#define TESTBENCH_H
#include <systemc.h>
#include <iostream>
using namespace std;
class Testbench : public sc_module{

	public:
		sc_in<bool> clk_in;

		sc_out<bool> s0_out, s1_out,i0_out;
		sc_in<bool> f0_in,f1_in,f2_in,f3_in;

		SC_CTOR(Testbench);
		~Testbench();

	private:
		void test();
		void print();
};

#endif
