#include "Vendedor.hpp"


Vendedor::Vendedor(){
}

Vendedor::Vendedor(double _valorVendas){
  this->valorVendas = _valorVendas;
}
Vendedor::Vendedor(int _codSetor,double _salarioBase,double _valorVendas){
  this->codSetor = _codSetor;
  this->salarioBase = _salarioBase;
  this->valorVendas = _valorVendas;
}
Vendedor::Vendedor(string _nome,string _cpf , string _telefone, string _endereco,int _codSetor,double _salarioBase,double _valorVendas){
  this->nome = _nome;
  this->cpf = _cpf;
  this->telefone = _telefone;
  this->endereco = _endereco;
  this->codSetor = _codSetor;
  this->salarioBase = _salarioBase;
  this->valorVendas = _valorVendas;
}
double Vendedor::getValorVendas(){
  return valorVendas;
}
double Vendedor::getComissao(){
  return comissao;
}
void Vendedor::setValorVendas(double _valorVendas){
  this->valorVendas = _valorVendas;
}
double Vendedor::calcSalario(){
  double salarioRetido = this->salarioBase * this->imposto;
  this->salario = this->salarioBase - salarioRetido + calcComissao();
  return salario;
}
double Vendedor::calcComissao(){
  this->comissao = this->valorVendas * 0.1;
  return comissao;
}
void Vendedor::imprime(){
  cout << "----------------------------------------------------" << endl;
  cout << "Nome: " << nome << endl;
  cout << "CPF: " << cpf << endl;
  cout << "Endereco: " << endereco << endl;
  cout << "Telefone: " << telefone << endl;
  cout << "Codido do Setor: " << codSetor << endl;
  cout << "Salario Base: " << salarioBase << endl;
  cout << "Imposto: " << imposto << endl;
  cout << "Salario: " << calcSalario() << endl;
  cout << "----------------------------------------------------" << endl << endl;
}