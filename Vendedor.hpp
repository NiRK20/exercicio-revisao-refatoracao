#ifndef VENDEDOR_H
#define VENDEDOR_H

#include <iostream>
#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado {
  private:
	double quotaMensalVendas = 0.0;

  public:
	  double quotaTotalAnual();
	  Vendedor(std::string _nome, double _salario, double _horasTrabalhadas, double _quotaMensal);
	  void getVend();
	  ~ Vendedor() {};
};

#endif