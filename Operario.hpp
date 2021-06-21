#ifndef Operario_hpp
#define Operario_hpp

#include "Empregado.hpp"
#include <vector>
#include <iostream>

using namespace std;

class Operario:public Empregado {
  public:
    Operario();
    Operario( double _valorProducao );
    Operario(int _codSetor,double _salarioBase,double _valorProducao);
    Operario(string _nome,string _cpf, string _telefone, string _endereco,int _codSetor,double _salarioBase,double _valorProducao);
    double getValorProducao();
    double getComissao();
    void setValorProducao(double _valorProducao);
    void imprime();
    double calcSalario();
    double calcComissao();
  private:
    double valorProducao;
    double comissao;

};
#endif