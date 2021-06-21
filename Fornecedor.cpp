#include "Fornecedor.hpp"


Fornecedor::Fornecedor(){
}

Fornecedor::Fornecedor(double _valorCredito, double _valorDivida){
  this->valorCredito = _valorCredito;
  this->valorDivida = _valorDivida;
}
Fornecedor::Fornecedor(string _nome,string _cpf , string _telefone, string _endereco,double _valorCredito, double _valorDivida){
  this->nome = _nome;
  this->cpf = _cpf;
  this->telefone = _telefone;
  this->endereco = _endereco;
  this->valorCredito = _valorCredito;
  this->valorDivida = _valorDivida;
}
double Fornecedor::getValorCredito(){
  return valorCredito;
}
double Fornecedor::getValorDivida(){
  return valorDivida;
}
void Fornecedor::setValorCredito(double _valorCredito){
  this->valorCredito = _valorCredito;
}
void Fornecedor::setValorDivida(double _valorDivida){
  this->valorDivida = _valorDivida;
}
double Fornecedor::obterSaldo(){
  this->saldo = this->valorCredito - this->valorDivida;
  return saldo;
}
void Fornecedor::imprime(){
  cout << "----------------------------------------------------" << endl; 
  cout << "Nome: " << nome << endl;
  cout << "CPF: " << cpf << endl;
  cout << "Endereco: " << endereco << endl;
  cout << "Telefone: " << telefone << endl;
  cout << "Credito: " << valorCredito << endl;
  cout << "Divida: " << valorDivida << endl;
  cout << "Saldo: " << obterSaldo() << endl;
  cout << "----------------------------------------------------" << endl << endl;
}