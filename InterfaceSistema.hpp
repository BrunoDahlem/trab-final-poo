#ifndef InterfaceSistema_hpp
#define InterfaceSistema_hpp

#include "Administrador.hpp"
#include "Empregado.hpp"
#include "Fornecedor.hpp"
#include "Operario.hpp"
#include "Pessoa.hpp"
#include "Sistema.hpp"
#include "Vendedor.hpp"
#include "InterfaceTeste.hpp"

#include <vector>
#include <iostream>
#include <cstring>
#include <stdio.h>

using namespace std;

class InterfaceSistema {

  public: 

    InterfaceSistema();
    void menu();

    

    void sistema();

    void menuIncluirPessoa();

    void menuAtualizarPessoa();
    void atualizarFornecedor(string _cpf);
    void atualizarEmpregado(string _cpf);
    void atualizarOperario(string _cpf);
    void atualizarVendedor(string _cpf);
    void atualizarAdministrador(string _cpf);
    void atualizarPessoa(string _cpf);

    void menuRelatorios();
  private:
  
};

#endif