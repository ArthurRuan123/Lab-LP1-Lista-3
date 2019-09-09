#ifndef ORCAMENTOESTOURADOEXCEPTION_H
#define ORCAMENTOESTOURADOEXCEPTION_H
#include <iostream>
#include <exception>

using namespace std;

class OrcamentoEstouradoException : public exception {
    protected:
        string erro = "Orcamento estourado";
    public:
        OrcamentoEstouradoException();
        virtual string what();
};

#endif // ORCAMENTOESTOURADOEXCEPTION_H