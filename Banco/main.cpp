#include "ContaCorrente.h"
#include "ContaEspecial.h"
#include "Polpança.h"

int main(void){

    Conta *c1 = new ContaCorrente("Arthur", 587, 1000);
    Conta *c2 = new Polpanca("Ruan", 514, 51, 5);
    Conta *c3 = new ContaEspecial("Aruan", 507, 975);

    c1->Depositar(25);
    c2->Depositar(500);
    c3->Depositar(1000);

    c1->print();
    c2->print();
    c3->print();

    c2->Sacar(25);

    c2->print();

    return 0;
}