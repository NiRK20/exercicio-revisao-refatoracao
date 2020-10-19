#include "Vendedor.hpp"

double Vendedor::quotaTotalAnual() {
	 return quotaMensalVendas * 12;
}

Vendedor::Vendedor(std::string _nome, double _salario, double _horasTrabalhadas, double _quotaMensal) {
	nome = _nome;
	salarioHora = _salario;
	horasTrabalhadas = _horasTrabalhadas;
	quotaMensalVendas = _quotaMensal;
}

void Vendedor::getVend() {
	std::cout << "Nome: " << nome << std::endl;
	std::cout << "Salario Mes: " << pagamentoMes(horasTrabalhadas) << std::endl;
	std::cout << "Quota vendas: " << quotaTotalAnual() << std::endl;
}
