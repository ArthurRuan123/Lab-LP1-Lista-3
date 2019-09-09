#include <iostream>
#include "SistemaGerenciaFolha.h"
#include "Assalariado.h"
#include "Horista.h"
#include "Comissionado.h"

int main(void){
    Funcionario *f1 = new Assalariado("Arthur", 24, 1200);
	Funcionario *f2 = new Comissionado("Ruan", 69, 20, 50, 100);
	Funcionario *f3 = new Horista("Gabi", 15, 12, 200);

	SistemaGerenciaFolha folha = SistemaGerenciaFolha(500000000);

	folha.setFuncionario(f1);
	folha.setFuncionario(f2);
	folha.setFuncionario(f3);

    f1->print();
    f2->print();
    f3->print();

	try{
    	cout << "\nO valor total da folha: " << folha.calculaValorFolha() << std::endl;
	}catch(OrcamentoEstouradoException e){
        std::cerr << e.what() << '\n';
    }

	try{
		cout << "\nO salario: " << folha.consultaSalarioFuncionario("Gabi") << std::endl;
	}catch(FuncionarioNaoExisteException e){
        std::cerr << e.what() << '\n';
	}

    return 0;
}