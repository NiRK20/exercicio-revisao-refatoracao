#include "Engenheiro.hpp"

Engenheiro::Engenheiro(std::string _nome, double _salario, double _horasTrabalhadas, int _projetos) {
	nome = _nome;
	salarioHora = _salario;
	horasTrabalhadas = _horasTrabalhadas;
	projetos = _projetos;
}

void Engenheiro::getEng() {
	std::cout << "Nome: " << nome << std::endl;
	std::cout << "Salario Mes: " << pagamentoMes(horasTrabalhadas) << std::endl;
	std::cout << "Projetos: " << projetos << std::endl;
}
