#include "./register_file.h"

#include <string>

using std::to_string;
using std::string;

RegisterFile::RegisterFile(sc_module_name nm) : sc_module(nm) {
  dec = new Decoder("dec");

  for (int i = 0; i < 3; ++i) {
    dec->X_in[i](X_in[i]);
  }

  for (int i = 0; i < 8; ++i) {
     dec->Y_out[i](b_sg[i]);
  }

  for (int i = 0; i < 8; ++i) {
    reg[i] = new Register(string("reg" + to_string(i)).c_str());
    reg[i]->enable_in(b_sg[i]);
    reg[i]->clk_in(clk_in);
    reg[i]->data_in(data_in);
    reg[i]->data_out(c_sg[i]);
  }

  for (int i = 0; i < 4; ++i) {
    mul[i] = new Multiplexer(string("mul" + to_string(i)).c_str());
    for (int j = 0; j < 8; ++j) {
      mul[i]->X_in[j](c_sg[j]);
    }

    mul[i]->selecter(select);
    mul[i]->Y_out(data_out[i]);
  }

}

RegisterFile::~RegisterFile() {
  delete dec;

  for (int i = 0; i < 8; ++i) {
    delete reg[i];
  }
  for (int i = 0; i < 4; ++i) {
    delete mul[i];
  }
}
