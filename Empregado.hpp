#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {
	
  public:
    double salarioHora = 0.0;
    double horasTrabalhadas = 0.0;
    std::string nome{};

    double pagamentoMes(double _horasTrabalhadas);
	
};

#endif
