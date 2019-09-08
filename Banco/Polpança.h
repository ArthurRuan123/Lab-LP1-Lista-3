#ifndef POLPANCA_H
#define POLPANCA_H
#include "Conta.h"

class Polpanca : public Conta{

    private:

        int variacao;
        double taxaDeRendimento;//porcentagem

    public:

        Polpanca();
        Polpanca(string nc, int n, int v, double tdr);

        int getVariacao();
        double getTaxaDeRendimento();

        void setVariacao(int v);
        void setTaxaDeRendimento(double tdr);

        double render();

        void print();

};
#endif // POLPANCA_H