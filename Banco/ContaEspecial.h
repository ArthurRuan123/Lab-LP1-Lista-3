#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H
#include "ContaCorrente.h"

class ContaEspecial : public ContaCorrente{
    
    public:

        ContaEspecial();
        ContaEspecial(string nc, int n, double sal);

        double definirLimite();

        void print();

};
#endif // CONTAESPECIAL_H