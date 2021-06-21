#include "Empregado.hpp"


Empregado::Empregado(){
}

Empregado::Empregado(int _codSetor,double _salarioBase){
  this->codSetor = _codSetor;
  this->salarioBase = _salarioBase;
}
Empregado::Empregado(string _nome,string _cpf , string _telefone, string _endereco,int _codSetor,double _salarioBase){
  this->nome = _nome;
  this->cpf = _cpf;
  this->telefone = _telefone;
  this->endereco = _endereco;
  this->codSetor = _codSetor;
  this->salarioBase = _salarioBase;
}
int Empregado::getCodSetor(){
  return codSetor;
}
double Empregado::getSalarioBase(){
  return salarioBase;
}
double Empregado::getImposto(){
  return imposto;
}
void Empregado::setCodSetor(int _codSetor){
  this->codSetor = _codSetor;
}
void Empregado::setSalarioBase(double _salarioBase){
  this->salarioBase = _salarioBase;
}
void Empregado::setImposto(double _imposto){
  this->imposto = _imposto;
}
double Empregado::calcSalario(){
  double salarioRetido = this->salarioBase * this->imposto;
  this->salario = this->salarioBase - salarioRetido;
  return salario;
}
void Empregado::imprime(){
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