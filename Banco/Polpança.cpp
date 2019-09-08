#include "Polpança.h"

Polpanca::Polpanca(){
    variacao = 0;
    taxaDeRendimento = 0;
}

Polpanca::Polpanca(string nc, int n, int v, double tdr){
    setNomeCliente(nc);
    setNumero(n);
    setVariacao(v);
    setTaxaDeRendimento(tdr);
}

int Polpanca::getVariacao(){
    return variacao;
}

double Polpanca::getTaxaDeRendimento(){
    return taxaDeRendimento;
}

void Polpanca::setVariacao(int v){
    if(v < 0){
        variacao = 0;
    }else{
        variacao = v;
    }
}

void Polpanca::setTaxaDeRendimento(double tdr){
    if(tdr < 0){
        taxaDeRendimento = 0;
    }else{
        taxaDeRendimento = tdr;
    }
}

double Polpanca::render(){
    if(variacao == 51){
        return saldo * (taxaDeRendimento / 100);
    }else if(variacao == 1){
        return saldo * ((taxaDeRendimento / 100) + (0,5 / 100));
    }
}

void Polpanca::print(){
    cout<< "\n\nPolpanca\n\n"
        << "Nome: " << nomeCliente << endl
        << "Numero da conta: " << numero << endl
        << "Saldo: " << saldo  << " R$"<< endl
        << "Variacao: " << variacao<< endl
        << "Taxa de rendimento: " << taxaDeRendimento << " %" << endl
        << "Rendimento: " << render() << " R$" << endl;
}