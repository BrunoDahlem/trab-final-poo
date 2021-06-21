#ifndef Pessoa_hpp
#define Pessoa_hpp

#include <vector>
#include <iostream>

using namespace std;

class Pessoa {
  public:
    Pessoa();
    Pessoa(string _nome,string _cpf , string _telefone, string _endereco);
    string getNome();
    string getCPF();
    string getEndereco();
    string getTelefone();
    void setNome(string _nome);
    void setCPF(string _cpf);
    void setEndereco(string _endereco);
    void setTelefone(string _telefone);
    void imprime();
  private:
    
  protected:
    string nome;
    string telefone;
    string endereco;
    string cpf;
};
#endif