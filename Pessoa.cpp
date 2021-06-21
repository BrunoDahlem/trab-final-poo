#include "Pessoa.hpp"


Pessoa::Pessoa(){
}

Pessoa::Pessoa(string _nome,string _cpf , string _telefone, string _endereco){
  this->nome = _nome;
  this->cpf = _cpf;
  this->telefone = _telefone;
  this->endereco = _endereco;
}
string Pessoa::getNome(){
  return nome;
}
string Pessoa::getEndereco(){
  return endereco;
}
string Pessoa::getTelefone(){
  return telefone;
}
string Pessoa::getCPF(){
  return cpf;
}
void Pessoa::setNome(string _nome){
  this->nome = _nome;
}
void Pessoa::setEndereco(string _endereco){
  this->endereco = _endereco;
}
void Pessoa::setTelefone(string _telefone){
  this->telefone = _telefone;
}
void Pessoa::setCPF(string _cpf){
  this->cpf = _cpf;
}
void Pessoa::imprime(){
  cout << "----------------------------------------------------" << endl;
  cout <<"Nome: " << nome << endl;
  cout << "CPF: " << cpf << endl;
  cout << "Endereco: " << endereco << endl;
  cout << "Telefone: " << telefone << endl;
  cout <<  "----------------------------------------------------" << endl << endl;
}