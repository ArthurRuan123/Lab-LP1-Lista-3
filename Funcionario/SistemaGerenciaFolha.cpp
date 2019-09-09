#include "SistemaGerenciaFolha.h"
#include "FuncionarioNaoExisteException.h"
#include "OrcamentoEstouradoException.h"

SistemaGerenciaFolha::SistemaGerenciaFolha(){}

SistemaGerenciaFolha::SistemaGerenciaFolha(double orc){
	setOrcamento(orc);
}

double SistemaGerenciaFolha::getOrcamento(){
	return orcamento;
}

void SistemaGerenciaFolha::setOrcamento(double orc){
	if(orc < 0){
		orcamento = 0;
	}else{
		orcamento = orc;
	}
}

void SistemaGerenciaFolha::setFuncionario(Funcionario * func) {
	funcionario[i] = func;
	i++;
}

double SistemaGerenciaFolha::calculaValorFolha() {
	double valorTotal = 0;

	for (int i = 0; i < 3; i++) {
		valorTotal += funcionario[i]->calcularSalario();
	}
	if(valorTotal > orcamento){
		throw OrcamentoEstouradoException();
	}else{
		return valorTotal;
	}
}

double SistemaGerenciaFolha::consultaSalarioFuncionario(string n) {
	for (int i = 0; i < 3; i++) {
		if (n == funcionario[i]->getNome()){
			return funcionario[i]->calcularSalario();
		}
	}
	throw FuncionarioNaoExisteException();
}