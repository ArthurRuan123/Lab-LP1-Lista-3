#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H
#include "Conta.h"

class ContaCorrente : public Conta{
    
    protected:

        double salario;
        double limite;
        //atributo mudado para o tipo double, pois n faz sentido ser do tipo int, ja q limite é um valor real e n inteiro

    public:

        ContaCorrente();
        ContaCorrente(string nc, int n, double sal);

        double getSalario();
        double getLimite();

        void setSalario(double sal);
        void setLimite(double l);

        double definirLimite();

        void print();

};

#endif // CONTACORRENTE_H