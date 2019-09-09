#include "FuncionarioNaoExisteException.h"

FuncionarioNaoExisteException::FuncionarioNaoExisteException(){

}

string FuncionarioNaoExisteException::what(){
    return erro;
}