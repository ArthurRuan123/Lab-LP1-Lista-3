#include "ContaEspecial.h"

ContaEspecial::ContaEspecial(){
    ContaCorrente();
}

ContaEspecial::ContaEspecial(string nc, int n, double sal) : ContaCorrente(){
    setNomeCliente(nc);
    setNumero(n);
    setSalario(sal);
}

double ContaEspecial::definirLimite(){
    return limite = 4*salario;
}

void ContaEspecial::print(){
    cout<< "\n\nConta Especial\n\n"
        << "Nome: " << nomeCliente << endl
        << "Numero da Conta: " << numero << endl
        << "Saldo: " << saldo << " R$" << endl
        << "Salario: " << salario << " R$" << endl
        << "Limite disponivel: " << definirLimite() << endl;
}