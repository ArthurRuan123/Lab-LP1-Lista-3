#include "Poupanca.h"

Poupanca::Poupanca(){
    variacao = 0;
    taxaDeRendimento = 0;
}

Poupanca::Poupanca(string nc, int n, int v, double tdr) : Conta(){
    setNomeCliente(nc);
    setNumero(n);
    setVariacao(v);
    setTaxaDeRendimento(tdr);
}

int Poupanca::getVariacao(){
    return variacao;
}

double Poupanca::getTaxaDeRendimento(){
    return taxaDeRendimento;
}

void Poupanca::setVariacao(int v){
    if(v < 0){
        variacao = 0;
    }else{
        variacao = v;
    }
}

void Poupanca::setTaxaDeRendimento(double tdr){
    if(tdr < 0){
        taxaDeRendimento = 0;
    }else{
        taxaDeRendimento = tdr;
    }
}

double Poupanca::render(){
    if(variacao == 51){
        return saldo * (taxaDeRendimento / 100);
    }else if(variacao == 1){
        return saldo * ((taxaDeRendimento / 100) + (0,5 / 100));
    }else{
        return -1;
    }
}

void Poupanca::print(){
    cout<< "\n\nPoupanca\n\n"
        << "Nome: " << nomeCliente << endl
        << "Numero da conta: " << numero << endl
        << "Saldo: " << saldo  << " R$"<< endl
        << "Variacao: " << variacao<< endl
        << "Taxa de rendimento: " << taxaDeRendimento << " %" << endl
        << "Rendimento: " << render() << " R$" << endl;
}