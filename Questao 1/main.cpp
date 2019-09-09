#include "Quadrado.h"

/*
    -Polimorfimo é a capacidade da classe filha invocar ou sobrescrever os 
    metodos da classe pai, com isso, o objeto terá formas diferentes.
    Basta criar um obejto do tipo da superclasse com o construtor da classe derivada
*/

int main(void){
    FiguraGeometrica *q1 = new Quadrado(4);

    q1->print();

    return 0;
}