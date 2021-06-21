#ifndef Administrador_hpp
#define Administrador_hpp

#include "Empregado.hpp"
#include <vector>
#include <iostream>

using namespace std;

class Administrador:public Empregado {
  public:
    Administrador();
    Administrador( double _ajudaDeCusto );
    Administrador(int _codSetor,double _salarioBase,double _ajudaDeCusto);
    Administrador(string _nome,string _cpf, string _telefone, string _endereco,int _codSetor,double _salarioBase,double _ajudaDeCusto);
    double getAjudaDeCusto();
    void setAjudaDeCusto(double _ajudaDeCusto);
    void imprime();
    double calcSalario();
  private:
    double ajudaDeCusto;

};
#endif