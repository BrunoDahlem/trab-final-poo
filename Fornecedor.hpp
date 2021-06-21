#ifndef Fornecedor_hpp
#define Fornecedor_hpp

#include "Pessoa.hpp"
#include <vector>
#include <iostream>

using namespace std;

class Fornecedor:public Pessoa {
  public:
    Fornecedor();
    Fornecedor(double _valorCredito, double _valorDivida );
    Fornecedor(string _nome,string _cpf, string _telefone, string _endereco,double _valorCredito, double _valorDivida);
    double getValorCredito();
    double getValorDivida();
    double obterSaldo();
    void setValorCredito(double _valorCredito);
    void setValorDivida(double _valorDivida);
    void imprime();
  private:
    double valorCredito;
    double valorDivida;
    double saldo;
};
#endif