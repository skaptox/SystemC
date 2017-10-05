// Copyright (c) 2017 Oscar Albornoz.

#include "./decoder_7s.h"

Decoder7s::Decoder7s(sc_module_name nm) : sc_module(nm) {
  andAB = new AndGate("andAB");
  andBD = new AndGate("andBD");
  andCD = new AndGate("andCD");

  andBCn = new AndGate("andBCn");
  andBCnD = new AndGate3("andBCnD");
  andBDn = new AndGate("andBDn");
  andBnC = new AndGate("andBnC");
  andBnDn = new AndGate("andBnDn");
  andCDn = new AndGate("andCDn");
  andCnDn = new AndGate("andCnDn");

  notB = new NotGate("notB");
  notC = new NotGate("notC");
  notD = new NotGate("notD");

  or1 = new OrGate4("or1");
  or2 = new OrGate3("or2");
  or3 = new OrGate3("or3");
  or4 = new OrGate5("or4");
  or5 = new OrGate("or5");
  or6 = new OrGate4("or6");
  or7 = new OrGate4("or7");

  notB->a_in(B_in);
  notB->b_out(sg_Bn);

  notC->a_in(C_in);
  notC->b_out(sg_Cn);

  notD->a_in(D_in);
  notD->b_out(sg_Dn);

  /**a**/

  andBD->a_in(B_in);
  andBD->b_in(D_in);
  andBD->c_out(sg_aBD);

  andBnDn->a_in(sg_Bn);
  andBnDn->b_in(sg_Dn);
  andBnDn->c_out(sg_aBnDn);

  or1->a_in(A_in);
  or1->b_in(sg_aBD);
  or1->c_in(sg_aBnDn);
  or1->d_in(C_in);
  or1->e_out(a_out);

  /**b**/

  andCD->a_in(C_in);
  andCD->b_in(D_in);
  andCD->c_out(sg_aCD);

  andCnDn->a_in(sg_Cn);
  andCnDn->b_in(sg_Dn);
  andCnDn->c_out(sg_aCnDn);

  or2->a_in(sg_Bn);
  or2->b_in(sg_aCD);
  or2->c_in(sg_aCnDn);
  or2->d_out(b_out);

  /**c**/

  or3->a_in(B_in);
  or3->b_in(sg_Cn);
  or3->c_in(D_in);
  or3->d_out(c_out);

  /**d**/

  andAB->a_in(A_in);
  andAB->b_in(B_in);
  andAB->c_out(sg_aAB);

  andBCnD->a_in(B_in);
  andBCnD->b_in(sg_Cn);
  andBCnD->c_in(D_in);
  andBCnD->d_out(sg_aBCnD);

  andBnC->a_in(sg_Bn);
  andBnC->b_in(C_in);
  andBnC->c_out(sg_aBnC);

  andCDn->a_in(C_in);
  andCDn->b_in(sg_Dn);
  andCDn->c_out(sg_aCDn);

  or4->a_in(sg_aAB);
  or4->b_in(sg_aBCnD);
  or4->c_in(sg_aBnC);
  or4->d_in(sg_aBnDn);
  or4->e_in(sg_aCDn);
  or4->f_out(d_out);

  /**e**/

  or5->a_in(sg_aBnDn);
  or5->b_in(sg_aCDn);
  or5->c_out(e_out);

  /**f**/

  andBCn->a_in(B_in);
  andBCn->b_in(sg_Cn);
  andBCn->c_out(sg_aBCn);

  andBDn->a_in(B_in);
  andBDn->b_in(sg_Dn);
  andBDn->c_out(sg_aBDn);

  or6->a_in(A_in);
  or6->b_in(sg_aBCn);
  or6->c_in(sg_aBDn);
  or6->d_in(sg_aCnDn);
  or6->e_out(f_out);

  /**g**/

  or7->a_in(A_in);
  or7->b_in(sg_aBCn);
  or7->c_in(sg_aBnC);
  or7->d_in(sg_aCDn);
  or7->e_out(g_out);
}

Decoder7s::~Decoder7s() {
  delete andBD;
  delete andCD;
  delete andAB;
  delete andBCn;
  delete andBDn;
  delete andBnC;
  delete andCDn;
  delete andBnDn;
  delete andCnDn;
  delete andBCnD;
  delete notB;
  delete notC;
  delete notD;
  delete or1;
  delete or2;
  delete or3;
  delete or4;
  delete or5;
  delete or6;
  delete or7;
}

