#include "Operario.hpp"


Operario::Operario(){
}

Operario::Operario(double _valorProducao){
  this->valorProducao = _valorProducao;
}
Operario::Operario(int _codSetor,double _salarioBase,double _valorProducao){
  this->codSetor = _codSetor;
  this->salarioBase = _salarioBase;
  this->valorProducao = _valorProducao;
}
Operario::Operario(string _nome,string _cpf , string _telefone, string _endereco,int _codSetor,double _salarioBase,double _valorProducao){
  this->nome = _nome;
  this->cpf = _cpf;
  this->telefone = _telefone;
  this->endereco = _endereco;
  this->codSetor = _codSetor;
  this->salarioBase = _salarioBase;
  this->valorProducao = _valorProducao;
}
double Operario::getValorProducao(){
  return valorProducao;
}
double Operario::getComissao(){
  return comissao;
}
void Operario::setValorProducao(double _valorProducao){
  this->valorProducao = _valorProducao;
}
double Operario::calcSalario(){
  double salarioRetido = this->salarioBase * this->imposto;
  this->salario = this->salarioBase - salarioRetido + calcComissao();
  return salario;
}
double Operario::calcComissao(){
  this->comissao = this->valorProducao * 0.1;
  return comissao;
}
void Operario::imprime(){
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