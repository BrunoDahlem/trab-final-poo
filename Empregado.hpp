#ifndef Empregado_hpp
#define Empregado_hpp

#include "Pessoa.hpp"
#include <vector>
#include <iostream>

using namespace std;

class Empregado:public Pessoa {
  public:
    Empregado();
    Empregado(int _codSetor, double _salarioBase);
    Empregado(string _nome,string _cpf, string _telefone, string _endereco,int _codSetor,double _salarioBase);
    int getCodSetor();
    double getSalarioBase();
    double getImposto();
    void setCodSetor(int _codSetor);
    void setSalarioBase(double _salarioBase);
    void setImposto(double _imposto);
    void imprime();
    double calcSalario();
  private:
    
  protected:
    int codSetor;
    double salarioBase;
    double imposto = 0.02;
    double salario;
};
#endif