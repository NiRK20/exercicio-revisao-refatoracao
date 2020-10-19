#include "Empregado.hpp"

double Empregado::pagamentoMes(double _horasTrabalhadas) {
	double t = _horasTrabalhadas;

	if (_horasTrabalhadas > 8) {
		double x = _horasTrabalhadas - 8;
		t += x / 2;
	}
	return t * salarioHora;
}