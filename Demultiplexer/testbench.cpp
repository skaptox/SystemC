#include "testbench.h"

#include <iostream>
using namespace std;

Testbench::Testbench(sc_module_name nm):sc_module(nm){

	SC_THREAD(test);
		//sensitive<<clk_in;
		sensitive<<clk_in.neg();
		//sensitive<<clk_in.neg();
	dont_initialize();
}

Testbench::~Testbench(){}

void Testbench::test(){


	cout<<"Tiempo S1 S0 IO F3210"<<endl;

  s1_out.write(0);
  s0_out.write(0);
  i0_out.write(0);

	wait();
	print();

	s1_out.write(0);
  s0_out.write(0);
  i0_out.write(1);

	wait();
	print();

	cout<<"\n";

	s1_out.write(0);
  s0_out.write(1);
  i0_out.write(0);

	wait();
	print();

	s1_out.write(0);
  s0_out.write(1);
  i0_out.write(1);

	wait();
	print();

	cout<<"\n";

	s1_out.write(1);
  s0_out.write(0);
  i0_out.write(0);

	wait();
	print();

	s1_out.write(1);
  s0_out.write(0);
  i0_out.write(1);

	wait();
	print();

	cout<<"\n";

	s1_out.write(1);
  s0_out.write(1);
  i0_out.write(0);

	wait();
	print();

	s1_out.write(1);
  s0_out.write(1);
  i0_out.write(1);

	wait();
	print();

	sc_stop();
}

void Testbench::print(){
	
	cout<<sc_time_stamp()<<"\t"<<s1_out.read()<<"  "<< s0_out.read()<<"  "<< i0_out.read()<<"\t "
	<<f3_in.read()<< f2_in.read()<< f1_in.read()<< f0_in.read()<<"\t"<<endl;
}


