#ifndef FUNCIONARIONAOEXISTEEXCEPTION_H
#define FUNCIONARIONAOEXISTEEXCEPTION_H
#include <iostream>
#include <exception>

using namespace std;

class FuncionarioNaoExisteException : public exception{
    protected:
        string erro = "Funcionario nao existe";
    public:
        FuncionarioNaoExisteException();
        virtual string what();
};

#endif // FUNCIONARIONAOEXISTEEXCEPTION_H