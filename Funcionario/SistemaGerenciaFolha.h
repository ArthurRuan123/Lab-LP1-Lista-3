#ifndef SISTEMAGERENCIAFOLHA_H
#define SISTEMAGERENCIAFOLHA_H
#include "Funcionario.h"
#include "Comissionado.h"
#include "Horista.h"
#include "Funcionario.h"
#include "FuncionarioNaoExisteException.h"
#include "OrcamentoEstouradoException.h"

class SistemaGerenciaFolha{
    private:
        Funcionario *funcionario[4];
        double orcamento;
        int i = 0;
    public:
        SistemaGerenciaFolha();
        SistemaGerenciaFolha(double orc);

        double getOrcamento();
        void setOrcamento(double orc);

        void setFuncionario(Funcionario *func);
        double calculaValorFolha();
        double consultaSalarioFuncionario(string n);
};
#endif // SISTEMAGERENCIAFOLHA_H