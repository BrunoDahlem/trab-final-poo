#include "Administrador.hpp"

Administrador::Administrador(){
}

Administrador::Administrador(double _ajudaDeCusto){
  this->ajudaDeCusto = _ajudaDeCusto;
}
Administrador::Administrador(int _codSetor,double _salarioBase,double _ajudaDeCusto){
  this->codSetor = _codSetor;
  this->salarioBase = _salarioBase;
  this->ajudaDeCusto = _ajudaDeCusto;
}
Administrador::Administrador(string _nome,string _cpf , string _telefone, string _endereco,int _codSetor,double _salarioBase,double _ajudaDeCusto){
  this->nome = _nome;
  this->cpf = _cpf;
  this->telefone = _telefone;
  this->endereco = _endereco;
  this->codSetor = _codSetor;
  this->salarioBase = _salarioBase;
  this->ajudaDeCusto = _ajudaDeCusto;
}
double Administrador::getAjudaDeCusto(){
  return ajudaDeCusto;
}
void Administrador::setAjudaDeCusto(double _ajudaDeCusto){
  this->ajudaDeCusto = _ajudaDeCusto;
}
double Administrador::calcSalario(){
  double salarioRetido = this->salarioBase * this->imposto;
  this->salario = this->salarioBase - salarioRetido + this->ajudaDeCusto;
  return salario;
}
void Administrador::imprime(){
  cout << "----------------------------------------------------" << endl;
  cout << "Nome: " << nome << endl;
  cout << "CPF: " << cpf << endl;
  cout << "Endereco: " << endereco << endl;
  cout << "Telefone: " << telefone << endl;
  cout << "Codido do Setor: " << codSetor << endl;
  cout << "Salario Base: " << salarioBase << endl;
  cout << "Imposto: " << imposto << endl;
  cout << "Ajuda de Custo: " << ajudaDeCusto << endl;
  cout << "Salario: " << calcSalario() << endl;
  cout << "----------------------------------------------------" << endl << endl;
}