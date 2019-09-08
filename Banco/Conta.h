#ifndef CONTA_H
#define CONTA_H
#include <iostream>

using namespace std;

class Conta{

    protected:

        string nomeCliente;
        int numero;
        double saldo;

    public:

        Conta();
        Conta(string nc, int n);

        string getNomeCliete();
        int getNumero();
        double getSaldo();

        void setNomeCliente(string nc);
        void setNumero(int n);
        void setSaldo(double s);

        void Sacar(double val);
        void Depositar(double val);

        virtual void print();
        
};

#endif // CONTA_H