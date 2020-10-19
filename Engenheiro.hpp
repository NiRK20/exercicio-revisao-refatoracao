#ifndef ENGENHEIRO_H
#define ENGENHEIRO_H

#include <iostream>
#include<string>
#include "Empregado.hpp"

class Engenheiro : public Empregado{
	private:
		int projetos = 0;

	public:
		Engenheiro(std::string _nome, double _salario, double _horasTrabalhadas, int _projetos);
		void getEng();
		~ Engenheiro() {};
};

#endif