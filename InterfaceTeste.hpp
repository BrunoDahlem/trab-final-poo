#ifndef InterfaceTeste_hpp
#define InterfaceTeste_hpp

#include "Administrador.hpp"
#include "Empregado.hpp"
#include "Fornecedor.hpp"
#include "Operario.hpp"
#include "Pessoa.hpp"
#include "Sistema.hpp"
#include "Vendedor.hpp"
#include "InterfaceSistema.hpp"

#include <vector>
#include <iostream>
#include <cstring>
#include <stdio.h>

using namespace std;

class InterfaceTeste {

  public:
  
  InterfaceTeste();
  
  void teste();

  void testeFornecedor();
  void testeCriarFornecedor();
  void testeAtualizarFornecedor();

  void testeEmpregado();
  void testeCriarEmpregado();
  void testeAtualizarEmpregado();

  void testeOperario();
  void testeCriarOperario();
  void testeAtualizarOperario();

  void testeVendedor();
  void testeCriarVendedor();
  void testeAtualizarVendedor();

  void testeAdministrador();
  void testeCriarAdministrador();
  void testeAtualizarAdministrador();
  
  private:
  
};

#endif