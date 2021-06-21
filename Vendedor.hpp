#ifndef Vendedor_hpp
#define Vendedor_hpp

#include "Empregado.hpp"
#include <vector>
#include <iostream>

using namespace std;

class Vendedor:public Empregado {
  public:
    Vendedor();
    Vendedor( double _valorVendas );
    Vendedor( int _codSetor,double _salarioBase,double _valorVendas );
    Vendedor(string _nome,string _cpf, string _telefone, string _endereco,int _codSetor,double _salarioBase,double _valorVendas);
    double getValorVendas();
    double getComissao();
    void setValorVendas(double _valorVendas);
    void imprime();
    double calcSalario();
    double calcComissao();
  private:
    double valorVendas;
    double comissao;

};
#endif