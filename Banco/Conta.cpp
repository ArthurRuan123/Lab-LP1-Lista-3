#include "Conta.h"

Conta::Conta(){
    nomeCliente = "Sem nome";
    numero = 0;
    saldo = 0;
}

Conta::Conta(string nc, int n){
    setNomeCliente(nc);
    setNumero(n);
}

string Conta::getNomeCliete(){
    return nomeCliente;
}
int Conta::getNumero(){
    return numero;
}
double Conta::getSaldo(){
    return saldo;
}

void Conta::setNomeCliente(string nc){
    if(nc == ""){
        nomeCliente = "Sem nome";
    }else{
        nomeCliente = nc;
    }
}
void Conta::setNumero(int n){
    if(n < 0){
        numero = 0;
    }else{
        numero = n;
    }
}
void Conta::setSaldo(double s){
    if(s < 0){
        saldo = 0;
    }else{
        saldo = s;
    }
}

void Conta::Sacar(double val){
    if(val < 0 || val > saldo){
        cout << "Valor invalido";
    }else{
        saldo -= val;
    }
}

void Conta::Depositar(double val){
    if(val < 0){
        cout << "Valor invalido";
    }else{
        saldo += val;
    }
}

void Conta::print(){}