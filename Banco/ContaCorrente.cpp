#include "ContaCorrente.h"

ContaCorrente::ContaCorrente(){
    salario = 0;
    limite = 0;
}

ContaCorrente::ContaCorrente(string nc, int n, double sal){
    setNomeCliente(nc);
    setNumero(n);
    setSalario(sal);
}

double ContaCorrente::getSalario(){
    return salario;
}

double ContaCorrente::getLimite(){
    return limite;
}

void ContaCorrente::setSalario(double sal){
    if(sal < 0){
        salario = 0;
    }else{
        salario = sal;
    }
}

void ContaCorrente::setLimite(double l){
    if(l < 0){
        limite = 0;
    }else{
        limite = l;
    }
}

double ContaCorrente::definirLimite(){
    return limite = 2*salario;
}

void ContaCorrente::print(){
    cout<< "\n\nConta Corrente\n\n"
        << "Nome: " << nomeCliente << endl
        << "Numero da Conta: " << numero << endl
        << "Saldo: " << saldo << " R$" << endl
        << "Salario: " << salario << " R$" << endl
        << "Limite disponivel: " << definirLimite() << endl;
}