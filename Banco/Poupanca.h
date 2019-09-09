#ifndef POUPANCA_H
#define POUPANCA_H
#include "Conta.h"

class Poupanca : public Conta{

    private:

        int variacao;
        double taxaDeRendimento;//porcentagem

    public:

        Poupanca();
        Poupanca(string nc, int n, int v, double tdr);

        int getVariacao();
        double getTaxaDeRendimento();

        void setVariacao(int v);
        void setTaxaDeRendimento(double tdr);

        double render();

        void print();

};
#endif // POUPANCA_H