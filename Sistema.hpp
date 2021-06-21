#ifndef Sistema_hpp
#define Sistema_hpp

#include "Administrador.hpp"
#include "Empregado.hpp"
#include "Fornecedor.hpp"
#include "InterfaceSistema.hpp"
#include "InterfaceTeste.hpp"
#include "Operario.hpp"
#include "Pessoa.hpp"
#include "Vendedor.hpp"
#include <vector>
#include <iostream>

using namespace std;

class Sistema {
  public:
    Sistema();
    void criaPessoa(string _nome,string _cpf, string _telefone, string _endereco);
    void criaAdministrador(string _nome,string _cpf, string _telefone, string _endereco,int _codSetor,double _salarioBase,double _ajudaDeCusto);
    void criaEmpregado(string _nome,string _cpf, string _telefone, string _endereco,int _codSetor,double _salarioBase);
    void criaFornecedor(string _nome,string _cpf, string _telefone, string _endereco,double _valorCredito, double _valorDivida);
    void criaOperario(string _nome,string _cpf, string _telefone, string _endereco,int _codSetor,double _salarioBase,double _valorProducao);
    void criaVendedor(string _nome,string _cpf, string _telefone, string _endereco,int _codSetor,double _salarioBase,double _valorVendas);
    //Metodos para setar as infos das Pessoas
    void atualizaNome(char att, string _cpf, string _nome);//Set para todos
    void atualizaCPF(char att, string _cpf, string _cpfM);//Set para todos
    void atualizaTelefone(char att, string _cpf, string _telefone);//Set para todos
    void atualizaEndereco(char att, string _cpf, string _endereco);//Set para todos
    void atualizaCodSetor(char att,string _cpf, int _codSetor);//Set para todos, com excessao de Pessoa e Fornecedor 
    void atualizaSalarioBase(char att,string _cpf, double _salarioBase);//Set para todos, com excessao de Pessoa e Fornecedor 
    void atualizaAjudaDeCusto(string _cpf, double _ajudaDeCusto);//Set para Administrador
    void atualizaValorProduto(char att,string _cpf, double _valorProduto);//Set para Operario e Vendedor
    void atualizaValorCredito(string _cpf, double _valorCredito);//Set para Fornecedor
    void atualizaValorDivida(string _cpf, double _valorDivida);//Set para Fornecedor
    //Metodos para pegar as infos
    string getNome(char att, string _cpf);//get para todos
    string getCPF(char att, string _cpf);//get para todos
    string getTelefone(char att, string _cpf);//get para todos
    string getEndereco(char att, string _cpf);//get para todos
    int getCodSetor(char att,string _cpf);//get para todos, com excessao de Pessoa e Fornecedor 
    double getSalarioBase(char att,string _cpf);//get para todos, com excessao de Pessoa e Fornecedor 
    double getAjudaDeCusto(string _cpf);//get para Administrador
    double getValorProduto(char att,string _cpf);//get para Operario e Vendedor
    double getValorCredito(string _cpf);//get para Fornecedor
    double getValorDivida(string _cpf);//get para Fornecedor
    //Metodo de impressao de Pessoas
    void imprime(char _tipo);
  private:
    vector<Pessoa> pessoa;
    vector<Administrador> administrador;
    vector<Empregado> empregado;
    vector<Fornecedor> fornecedor;
    vector<Operario> operario;
    vector<Vendedor> vendedor;
    int i;
};
#endif