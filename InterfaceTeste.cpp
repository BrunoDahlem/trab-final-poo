#include "InterfaceTeste.hpp"

Fornecedor fornecedor;
Empregado empregado;
Operario operario;
Vendedor vendedor;
Administrador administrador;
InterfaceSistema interfaceSistema;
string endereco1;
string nome1;
string cpf1;
string telefone1;
char op1;
bool v1;

InterfaceTeste::InterfaceTeste(){
  
}

//--------------------------------------------------------------------------
//**************************************************************************
#pragma region Metodos_Teste  
//--------------------------------------------------------------------------

void InterfaceTeste::teste() {

  do{
    
    v1 =true;

    system("cls");

    cout << "----------------------------------------------------" << endl;
    cout << "                Sistema de Testes                   " << endl;
    cout << "----------------------------------------------------" << endl << endl;
    
    cout << "Insira uma opcao valida:" << endl << endl;
    
    cout << "1 - Testar classe Fornecedor." << endl;
    cout << "2 - Testar classe Empregado." << endl;
    cout << "3 - Testar classe Operario." << endl;
    cout << "4 - Testar classe Vendedor." << endl;
    cout << "5 - Testar classe Administrador." << endl << endl;

    cout << "6 - Voltar ao Menu Principal." << endl;
    cout << "0 - Sair." << endl << endl;
    
    cin >> op1;
    
    cout << endl << endl;
    
    switch(op1){

      case '1':
        testeFornecedor();
        break;

      case '2':
        testeEmpregado();
        break;

      case '3':
        testeOperario();
        break;

      case '4':
        testeVendedor();
        break;

      case '5':
        testeAdministrador();
        break;

      case '6':
        interfaceSistema.menu();
        break;

      case '0':
        exit(1);

    }

  }while(v1 == true);
  
}

//**************************************************************************
#pragma region TesteFornecedor
//--------------------------------------------------------------------------

void InterfaceTeste::testeFornecedor(){

  do{
    
    v1 =true;
    system("cls");

    cout << "----------------------------------------------------" << endl;
    cout << "                Sistema de Testes                   " << endl;
    cout << "                Teste  Fornecedor                   " << endl;
    cout << "----------------------------------------------------" << endl << endl;
    
    cout << "Insira uma opcao valida:" << endl << endl;
    
    cout << "1 - Testar criacao de Fornecedor." << endl;
    cout << "2 - Testar atualizacao Fornecedor." << endl << endl;

    cout << "3 - Impressao Relatorio de Teste." << endl << endl;

    cout << "8 - Voltar ao menu Sistema de Testes." << endl;
    cout << "9 - Voltar ao Menu Principal." << endl;
    cout << "0 - Sair." << endl << endl;
    
    cin >> op1;
    
    cout << endl << endl;
    
    switch(op1){

      case '1':
        testeCriarFornecedor();
        break;

      case '2':
        testeAtualizarFornecedor();
        break;

      case '3':

        system("cls");

        cout << "----------------------------------------------------" << endl;
        cout << "                Sistema de Testes                   " << endl;
        cout << "                Relatorio de Teste                  " << endl;
        cout << "----------------------------------------------------" << endl << endl;

        fornecedor.imprime();

        cout <<  endl;
        cout << "Voltando ao Menu Atualizar Dados Fornecedor..." << endl;

        system("pause");

        break;

      case '8':
        teste();
        break;

      case '9':
        interfaceSistema.menu();
        break;

      case '0':
        exit(1);

    }

  }while(v1 == true) ;
  

}

//--------------------------------------------------------------------------

void InterfaceTeste::testeCriarFornecedor(){
  
  double credito, divida;

    system("cls");

    cout << "----------------------------------------------------" << endl;
    cout << "                Sistema de Testes                   " << endl;
    cout << "              Teste Criar Fornecedor                " << endl;
    cout << "----------------------------------------------------" << endl << endl;
    
    cout << "Insira os seguintes dados do Fornecedor" << endl << endl;
    
    cout << "Insira o nome: ";
    cin.ignore();
    getline( cin, nome1);
    fornecedor.setNome(nome1);
    cout << endl;

    cout << "Insira o cpf: ";
    cin.ignore();
    getline( cin, cpf1);
    fornecedor.setCPF(cpf1);
    cout << endl;
    
    cout << "Insira o telefone: ";
    cin.ignore();
    getline( cin, telefone1);
    fornecedor.setTelefone(telefone1);
    cout << endl;

    cout << "Insira o endereco: ";
    cin.ignore();
    getline( cin, endereco1);
    fornecedor.setEndereco(endereco1);
    cout << endl;

    cout << "Insira o credito: ";
    cin >> credito;
    fornecedor.setValorCredito(credito);
    cout << endl;

    cout << "Insira a divida: ";
    cin >> divida;
    fornecedor.setValorDivida(divida);
    cout << endl;
    
    system("cls");

    cout << "Fornecedor cadastrado com sucesso!" << endl;
    cout << "Voltando ao menu Teste Fornecedor..." << endl << endl;

    system("pause");

    testeFornecedor();
}

//--------------------------------------------------------------------------

void InterfaceTeste::testeAtualizarFornecedor(){

  double credito, divida;
  
  

  do{
    
    v1 =true;

    system("cls");

    cout << "----------------------------------------------------" << endl;
    cout << "                Sistema de Testes                   " << endl;
    cout << "         Teste Atualizar Dados Fornecedor           " << endl;
    cout << "----------------------------------------------------" << endl << endl;
    
    cout << "Insira uma opcao valida:" << endl << endl;
    
    cout << "1 - Alterar Nome." << endl;
    cout << "2 - Alterar cpf." << endl;
    cout << "3 - Alterar Telefone." << endl;
    cout << "4 - Alterar Endereco." << endl;
    cout << "5 - Alterar Credito." << endl;
    cout << "6 - Alterar Divida." << endl << endl;

    cout << "8 - Voltar ao Menu Teste Fornecedor." << endl;
    cout << "9 - Voltar ao Menu Principal." << endl;
    cout << "0 - Sair." << endl << endl;
    
    cin >> op1;
    
    cout << endl << endl;
    
    switch(op1){

      case '1':

        system("cls");

        cout << "----------------------------------------------------" << endl;
        cout << "                Sistema de Testes                   " << endl;
        cout << "         Teste Atualizar Dados Fornecedor           " << endl;
        cout << "----------------------------------------------------" << endl << endl; 

        cout << "nome atual: " << fornecedor.getNome() << endl; 
        cout << "Insira o nome desejado: ";
        cin.ignore();
        getline( cin, nome1);
        fornecedor.setNome(nome1);
        cout << endl << endl;

        cout << "Nome alterado com sucesso!" << endl;
        cout << "Voltando ao Menu Atualizar Dados Fornecedor..." << endl;

        system("pause");

        break;

      case '2':
        
        system("cls");

        cout << "----------------------------------------------------" << endl;
        cout << "                Sistema de Testes                   " << endl;
        cout << "         Teste Atualizar Dados Fornecedor           " << endl;
        cout << "----------------------------------------------------" << endl << endl; 

        cout << "CPF atual: " << fornecedor.getCPF() << endl; 
        cout << "Insira o CPF desejado: ";
        cin.ignore();
        getline( cin, cpf1);
        fornecedor.setCPF(cpf1);
        cout << endl << endl;

        cout << "CPF alterado com sucesso!" << endl;
        cout << "Voltando ao Menu Atualizar Dados Fornecedor..." << endl;

        system("pause");

        break;

      case '3':
        
        system("cls");

        cout << "----------------------------------------------------" << endl;
        cout << "                Sistema de Testes                   " << endl;
        cout << "         Teste Atualizar Dados Fornecedor           " << endl;
        cout << "----------------------------------------------------" << endl << endl; 

        cout << "Telefone atual: " << fornecedor.getTelefone() << endl; 
        cout << "Insira o Telefone desejado: ";
        cin.ignore();
        getline( cin, telefone1);
        fornecedor.setTelefone(telefone1);
        cout << endl << endl;

        cout << "Telefone alterado com sucesso!" << endl;
        cout << "Voltando ao Menu Atualizar Dados Fornecedor..." << endl;

        system("pause");

        break;

      case '4':
        
        system("cls");

        cout << "----------------------------------------------------" << endl;
        cout << "                Sistema de Testes                   " << endl;
        cout << "         Teste Atualizar Dados Fornecedor           " << endl;
        cout << "----------------------------------------------------" << endl << endl; 

        cout << "Endereco atual: " << fornecedor.getEndereco() << endl; 
        cout << "Insira o Endereco desejado: ";
        cin.ignore();
        getline( cin, endereco1);
        fornecedor.setEndereco(endereco1);
        cout << endl << endl;

        cout << "Endereco alterado com sucesso!" << endl;
        cout << "Voltando ao Menu Atualizar Dados Fornecedor..." << endl;

        system("pause");

        break;

      case '5':
        
        system("cls");

        cout << "----------------------------------------------------" << endl;
        cout << "                Sistema de Testes                   " << endl;
        cout << "         Teste Atualizar Dados Fornecedor           " << endl;
        cout << "----------------------------------------------------" << endl << endl; 

        cout << "Credito atual: " << fornecedor.getValorCredito() << endl; 
        cout << "Digite o novo valor do credito: ";
        cin >> credito;
        fornecedor.setValorCredito(credito);
        cout << endl << endl;

        cout << "Valor do credito alterado com sucesso!" << endl;
        cout << "Voltando ao Menu Atualizar Dados Fornecedor..." << endl;

        system("pause");

        break;

      case '6':
        
        system("cls");

        cout << "----------------------------------------------------" << endl;
        cout << "                Sistema de Testes                   " << endl;
        cout << "         Teste Atualizar Dados Fornecedor           " << endl;
        cout << "----------------------------------------------------" << endl << endl; 

        cout << "Divida atual: " << fornecedor.getValorDivida() << endl; 
        cout << "Digite o novo valor da divida: ";
        cin >> divida;
        fornecedor.setValorDivida(divida);
        cout << endl << endl;

        cout << "Valor da divida alterada com sucesso!" << endl;
        cout << "Voltando ao Menu Atualizar Dados Fornecedor..." << endl;

        system("pause");

        break;

      case '8':
        testeFornecedor();
        break;

      case '9':
        interfaceSistema.menu();
        break;

      case '0':
        exit(1);

    }

  }while(v1 == true);
}

//--------------------------------------------------------------------------
#pragma endregion //         Teste Fornecedor
//--------------------------------------------------------------------------

//--------------------------------------------------------------------------
//**************************************************************************
#pragma region TesteEmpregado
//--------------------------------------------------------------------------

void InterfaceTeste::testeEmpregado(){

  
  

  do{
    
    v1 =true;
    system("cls");

    cout << "----------------------------------------------------" << endl;
    cout << "                Sistema de Testes                   " << endl;
    cout << "                 Teste Empregado                    " << endl;
    cout << "----------------------------------------------------" << endl << endl;
    
    cout << "Insira uma opcao valida:" << endl << endl;
    
    cout << "1 - Testar criacao de Empregado." << endl;
    cout << "2 - Testar atualizacao Empregado." << endl << endl;

    cout << "3 - Impressao Relatorio de Teste." << endl << endl;

    cout << "8 - Voltar ao menu Sistema de Testes." << endl;
    cout << "9 - Voltar ao Menu Principal." << endl;
    cout << "0 - Sair." << endl << endl;
    
    cin >> op1;
    
    cout << endl << endl;
    
    switch(op1){

      case '1':
        testeCriarEmpregado();
        break;

      case '2':
        testeAtualizarEmpregado();
        break;

      case '3':

        system("cls");

        cout << "----------------------------------------------------" << endl;
        cout << "                Sistema de Testes                   " << endl;
        cout << "                Relatorio de Teste                  " << endl;
        cout << "----------------------------------------------------" << endl << endl;

        empregado.imprime();

        cout <<  endl;
        cout << "Voltando ao Menu Atualizar Dados Empregado..." << endl;

        system("pause");

        break;

      case '8':
        teste();
        break;

      case '9':
        interfaceSistema.menu();
        break;

      case '0':
        exit(1);

    }

  }while(v1 == true) ;
  
}

//--------------------------------------------------------------------------

void InterfaceTeste::testeCriarEmpregado(){
  
  double salarioBase;
  int codSetor;

    system("cls");

    cout << "----------------------------------------------------" << endl;
    cout << "                Sistema de Testes                   " << endl;
    cout << "              Teste Criar Empregado                 " << endl;
    cout << "----------------------------------------------------" << endl << endl;
    
    cout << "Insira os seguintes dados do Empregado" << endl << endl;
    
    cout << "Insira o nome: ";
    cin.ignore();
    getline( cin, nome1);
    empregado.setNome(nome1);
    cout << endl;

    cout << "Insira o cpf: ";
    cin.ignore();
    getline( cin, cpf1);
    empregado.setCPF(cpf1);
    cout << endl;
    
    cout << "Insira o telefone: ";
    cin.ignore();
    getline( cin, telefone1);
    empregado.setTelefone(telefone1);
    cout << endl;

    cout << "Insira o endereco: ";
    cin.ignore();
    getline( cin, endereco1);
    empregado.setEndereco(endereco1);
    cout << endl;

    cout << "Insira o codigo do setor: ";
    cin >> codSetor;
    empregado.setCodSetor(codSetor);
    cout << endl;

    cout << "Insira o salario base: ";
    cin >> salarioBase;
    empregado.setSalarioBase(salarioBase);
    cout << endl;
    
    system("cls");

    cout << "empregado cadastrado com sucesso!" << endl;
    cout << "Voltando ao menu Teste empregado..." << endl << endl;

    system("pause");

    testeEmpregado();
}

//--------------------------------------------------------------------------

void InterfaceTeste::testeAtualizarEmpregado(){

  double salarioBase;
  int codSetor;
  
  

  do{
    
    v1 =true;

    system("cls");

    cout << "----------------------------------------------------" << endl;
    cout << "                Sistema de Testes                   " << endl;
    cout << "          Teste Atualizar Dados Empregado           " << endl;
    cout << "----------------------------------------------------" << endl << endl;
    
    cout << "Insira uma opcao valida:" << endl << endl;
    
    cout << "1 - Alterar Nome." << endl;
    cout << "2 - Alterar cpf." << endl;
    cout << "3 - Alterar Telefone." << endl;
    cout << "4 - Alterar Endereco." << endl;
    cout << "5 - Alterar Codigo do Setor." << endl;
    cout << "6 - Alterar Salario Base." << endl << endl;

    cout << "8 - Voltar ao Menu Teste Empregado." << endl;
    cout << "9 - Voltar ao Menu Principal." << endl;
    cout << "0 - Sair." << endl << endl;
    
    cin >> op1;
    
    cout << endl << endl;
    
    switch(op1){

      case '1':

        system("cls");

        cout << "----------------------------------------------------" << endl;
        cout << "                Sistema de Testes                   " << endl;
        cout << "         Teste Atualizar Dados Empregado           " << endl;
        cout << "----------------------------------------------------" << endl << endl; 

        cout << "nome atual: " << empregado.getNome() << endl; 
        cout << "Insira o nome desejado: ";
        cin.ignore();
        getline( cin, nome1);
        empregado.setNome(nome1);
        cout << endl << endl;

        cout << "Nome alterado com sucesso!" << endl;
        cout << "Voltando ao Menu Atualizar Dados Empregado..." << endl;

        system("pause");

        break;

      case '2':
        
        system("cls");

        cout << "----------------------------------------------------" << endl;
        cout << "                Sistema de Testes                   " << endl;
        cout << "         Teste Atualizar Dados Empregado           " << endl;
        cout << "----------------------------------------------------" << endl << endl; 

        cout << "CPF atual: " << empregado.getCPF() << endl; 
        cout << "Insira o CPF desejado: ";
        cin.ignore();
        getline( cin, cpf1);
        empregado.setCPF(cpf1);
        cout << endl << endl;

        cout << "CPF alterado com sucesso!" << endl;
        cout << "Voltando ao Menu Atualizar Dados Empregado..." << endl;

        system("pause");

        break;

      case '3':
        
        system("cls");

        cout << "----------------------------------------------------" << endl;
        cout << "                Sistema de Testes                   " << endl;
        cout << "         Teste Atualizar Dados Empregado           " << endl;
        cout << "----------------------------------------------------" << endl << endl; 

        cout << "Telefone atual: " << empregado.getTelefone() << endl; 
        cout << "Insira o Telefone desejado: ";
        cin.ignore();
        getline( cin, telefone1);
        empregado.setTelefone(telefone1);
        cout << endl << endl;

        cout << "Telefone alterado com sucesso!" << endl;
        cout << "Voltando ao Menu Atualizar Dados Fornecedor..." << endl;

        system("pause");

        break;

      case '4':
        
        system("cls");

        cout << "----------------------------------------------------" << endl;
        cout << "                Sistema de Testes                   " << endl;
        cout << "         Teste Atualizar Dados Empregado           " << endl;
        cout << "----------------------------------------------------" << endl << endl; 

        cout << "Endereco atual: " << empregado.getEndereco() << endl; 
        cout << "Insira o Endereco desejado: ";
        cin.ignore();
        getline( cin, endereco1);
        empregado.setEndereco(endereco1);
        cout << endl << endl;

        cout << "Endereco alterado com sucesso!" << endl;
        cout << "Voltando ao Menu Atualizar Dados Empregado..." << endl;

        system("pause");

        break;

      case '5':
        
        system("cls");

        cout << "----------------------------------------------------" << endl;
        cout << "                Sistema de Testes                   " << endl;
        cout << "         Teste Atualizar Dados Empregado           " << endl;
        cout << "----------------------------------------------------" << endl << endl; 

        cout << "Codigo de Setor atual: " << empregado.getCodSetor() << endl; 
        cout << "Digite o novo Codigo de Setor: ";
        cin >> codSetor;
        empregado.setCodSetor(codSetor);
        cout << endl << endl;

        cout << "Valor do credito alterado com sucesso!" << endl;
        cout << "Voltando ao Menu Atualizar Dados Empregado..." << endl;

        system("pause");

        break;

      case '6':
        
        system("cls");

        cout << "----------------------------------------------------" << endl;
        cout << "                Sistema de Testes                   " << endl;
        cout << "         Teste Atualizar Dados Empregado           " << endl;
        cout << "----------------------------------------------------" << endl << endl; 

        cout << "Salario Base atual: " << empregado.getSalarioBase() << endl; 
        cout << "Digite o novo valor do Salario Base: ";
        cin >> salarioBase;
        empregado.setSalarioBase(salarioBase);
        cout << endl << endl;

        cout << "Valor da divida alterada com sucesso!" << endl;
        cout << "Voltando ao Menu Atualizar Dados Empregado..." << endl;

        system("pause");

        break;

      case '8':
        testeEmpregado();
        break;

      case '9':
        interfaceSistema.menu();
        break;

      case '0':
        exit(1);

    }

  }while(v1 == true);
}

//--------------------------------------------------------------------------
#pragma endregion //         Teste Empregado
//--------------------------------------------------------------------------

//--------------------------------------------------------------------------
//**************************************************************************
#pragma region TesteOperario
//--------------------------------------------------------------------------

void InterfaceTeste::testeOperario(){

  do{
    
    v1 =true;
    system("cls");

    cout << "----------------------------------------------------" << endl;
    cout << "                Sistema de Testes                   " << endl;
    cout << "                Teste  Operario                   " << endl;
    cout << "----------------------------------------------------" << endl << endl;
    
    cout << "Insira uma opcao valida:" << endl << endl;
    
    cout << "1 - Testar criacao de Operario." << endl;
    cout << "2 - Testar atualizacao Operario." << endl << endl;

    cout << "3 - Impressao Relatorio de Teste." << endl << endl;

    cout << "8 - Voltar ao menu Sistema de Testes." << endl;
    cout << "9 - Voltar ao Menu Principal." << endl;
    cout << "0 - Sair." << endl << endl;
    
    cin >> op1;
    
    cout << endl << endl;
    
    switch(op1){

      case '1':
        testeCriarOperario();
        break;

      case '2':
        testeAtualizarOperario();
        break;

      case '3':

        system("cls");

        cout << "----------------------------------------------------" << endl;
        cout << "                Sistema de Testes                   " << endl;
        cout << "                Relatorio de Teste                  " << endl;
        cout << "----------------------------------------------------" << endl << endl;

        operario.imprime();

        cout <<  endl;
        cout << "Voltando ao Menu Atualizar Dados Operario..." << endl;

        system("pause");

        break;

      case '8':
        teste();
        break;

      case '9':
        interfaceSistema.menu();
        break;

      case '0':
        exit(1);

    }

  }while(v1 == true) ;
  

}

//--------------------------------------------------------------------------

void InterfaceTeste::testeCriarOperario(){
  
  double salarioBase,valorProducao;
  int codSetor;

    system("cls");

    cout << "----------------------------------------------------" << endl;
    cout << "                Sistema de Testes                   " << endl;
    cout << "              Teste Criar Operario                " << endl;
    cout << "----------------------------------------------------" << endl << endl;
    
    cout << "Insira os seguintes dados do Operario" << endl << endl;
    
    cout << "Insira o nome: ";
    cin.ignore();
    getline( cin, nome1);
    operario.setNome(nome1);
    cout << endl;

    cout << "Insira o cpf: ";
    cin.ignore();
    getline( cin, cpf1);
    operario.setCPF(cpf1);
    cout << endl;
    
    cout << "Insira o telefone: ";
    cin.ignore();
    getline( cin, telefone1);
    operario.setTelefone(telefone1);
    cout << endl;

    cout << "Insira o endereco: ";
    cin.ignore();
    getline( cin, endereco1);
    operario.setEndereco(endereco1);
    cout << endl;

    cout << "Insira o Codigo do Setor: ";
    cin >> codSetor;
    operario.setCodSetor(codSetor);
    cout << endl;

    cout << "Insira o Salario Base: ";
    cin >> salarioBase;
    operario.setSalarioBase(salarioBase);
    cout << endl;

    cout << "Insira o Valor da Producao: ";
    cin >> valorProducao;
    operario.setValorProducao(valorProducao);
    cout << endl;
    
    system("cls");

    cout << "Fornecedor cadastrado com sucesso!" << endl;
    cout << "Voltando ao menu Teste Operario..." << endl << endl;

    system("pause");

    testeFornecedor();
}

//--------------------------------------------------------------------------

void InterfaceTeste::testeAtualizarOperario(){

  double salarioBase,valorProducao;
  int codSetor;
  
  

  do{
    
    v1 =true;

    system("cls");

    cout << "----------------------------------------------------" << endl;
    cout << "                Sistema de Testes                   " << endl;
    cout << "         Teste Atualizar Dados Operario           " << endl;
    cout << "----------------------------------------------------" << endl << endl;
    
    cout << "Insira uma opcao valida:" << endl << endl;
    
    cout << "1 - Alterar Nome." << endl;
    cout << "2 - Alterar cpf." << endl;
    cout << "3 - Alterar Telefone." << endl;
    cout << "4 - Alterar Endereco." << endl;
    cout << "5 - Alterar Codigo de Setor." << endl;
    cout << "6 - Alterar Salario Base." << endl << endl;
    cout << "7 - Alterar Valor da Producao." << endl << endl;

    cout << "8 - Voltar ao Menu Teste Operario." << endl;
    cout << "9 - Voltar ao Menu Principal." << endl;
    cout << "0 - Sair." << endl << endl;
    
    cin >> op1;
    
    cout << endl << endl;
    
    switch(op1){

      case '1':

        system("cls");

        cout << "----------------------------------------------------" << endl;
        cout << "                Sistema de Testes                   " << endl;
        cout << "         Teste Atualizar Dados Operario           " << endl;
        cout << "----------------------------------------------------" << endl << endl; 

        cout << "nome atual: " << operario.getNome() << endl; 
        cout << "Insira o nome desejado: ";
        cin.ignore();
        getline( cin, nome1);
        operario.setNome(nome1);
        cout << endl << endl;

        cout << "Nome alterado com sucesso!" << endl;
        cout << "Voltando ao Menu Atualizar Dados Operario..." << endl;

        system("pause");

        
        break;

      case '2':
        
        system("cls");

        cout << "----------------------------------------------------" << endl;
        cout << "                Sistema de Testes                   " << endl;
        cout << "         Teste Atualizar Dados Operario           " << endl;
        cout << "----------------------------------------------------" << endl << endl; 

        cout << "CPF atual: " << operario.getCPF() << endl; 
        cout << "Insira o CPF desejado: ";
        cin.ignore();
        getline( cin, cpf1);
        operario.setCPF(cpf1);
        cout << endl << endl;

        cout << "CPF alterado com sucesso!" << endl;
        cout << "Voltando ao Menu Atualizar Dados Operario..." << endl;

        system("pause");

        
        break;

      case '3':
        
        system("cls");

        cout << "----------------------------------------------------" << endl;
        cout << "                Sistema de Testes                   " << endl;
        cout << "         Teste Atualizar Dados Operario           " << endl;
        cout << "----------------------------------------------------" << endl << endl; 

        cout << "Telefone atual: " << operario.getTelefone() << endl; 
        cout << "Insira o Telefone desejado: ";
        cin.ignore();
        getline( cin, telefone1);
        operario.setTelefone(telefone1);
        cout << endl << endl;

        cout << "Telefone alterado com sucesso!" << endl;
        cout << "Voltando ao Menu Atualizar Dados Operario..." << endl;

        system("pause");

        
        break;

      case '4':
        
        system("cls");

        cout << "----------------------------------------------------" << endl;
        cout << "                Sistema de Testes                   " << endl;
        cout << "         Teste Atualizar Dados Operario           " << endl;
        cout << "----------------------------------------------------" << endl << endl; 

        cout << "Endereco atual: " << operario.getEndereco() << endl; 
        cout << "Insira o Endereco desejado: ";
        cin.ignore();
        getline( cin, endereco1);
        operario.setEndereco(endereco1);
        cout << endl << endl;

        cout << "Endereco alterado com sucesso!" << endl;
        cout << "Voltando ao Menu Atualizar Dados Operario..." << endl;

        system("pause");

        
        break;

      case '5':
        
        system("cls");

        cout << "----------------------------------------------------" << endl;
        cout << "                Sistema de Testes                   " << endl;
        cout << "         Teste Atualizar Dados Operario           " << endl;
        cout << "----------------------------------------------------" << endl << endl; 

        cout << "Codigo do Setor atual: " << operario.getCodSetor() << endl; 
        cout << "Digite o novo codigo do setor: ";
        cin >> codSetor;
        operario.setCodSetor(codSetor);
        cout << endl << endl;

        cout << "Codigo do Setor alterado com sucesso!" << endl;
        cout << "Voltando ao Menu Atualizar Dados Operario..." << endl;

        system("pause");

        
        break;

      case '6':
        
        system("cls");

        cout << "----------------------------------------------------" << endl;
        cout << "                Sistema de Testes                   " << endl;
        cout << "         Teste Atualizar Dados Operario           " << endl;
        cout << "----------------------------------------------------" << endl << endl; 

        cout << "Salario Base atual: " << operario.getSalarioBase() << endl; 
        cout << "Digite o novo salario base: ";
        cin >> salarioBase;
        operario.setSalarioBase(salarioBase);
        cout << endl << endl;

        cout << "Salario Base alterada com sucesso!" << endl;
        cout << "Voltando ao Menu Atualizar Dados Operario..." << endl;

        system("pause");

        
        break;
      case '7':
        
        system("cls");

        cout << "----------------------------------------------------" << endl;
        cout << "                Sistema de Testes                   " << endl;
        cout << "         Teste Atualizar Dados Operario           " << endl;
        cout << "----------------------------------------------------" << endl << endl; 

        cout << "Valor da Producao atual: " << operario.getValorProducao() << endl; 
        cout << "Digite o novo valor da divida: ";
        cin >> valorProducao;
        operario.setValorProducao(valorProducao);
        cout << endl << endl;

        cout << "Valor da Producao alterada com sucesso!" << endl;
        cout << "Voltando ao Menu Atualizar Dados Operario..." << endl;

        system("pause");

        
        break;

      case '8':
        testeOperario();
        break;

      case '9':
        interfaceSistema.menu();
        break;

      case '0':
        exit(1);

    }

  }while(v1 == true);
}

//--------------------------------------------------------------------------
#pragma endregion //         Teste Operario

//--------------------------------------------------------------------------

//--------------------------------------------------------------------------
//**************************************************************************
#pragma region TesteVendedor
//--------------------------------------------------------------------------

void InterfaceTeste::testeVendedor(){

  
  

  do{
    
    v1 =true;
    system("cls");

    cout << "----------------------------------------------------" << endl;
    cout << "                Sistema de Testes                   " << endl;
    cout << "                Teste  Vendedor                   " << endl;
    cout << "----------------------------------------------------" << endl << endl;
    
    cout << "Insira uma opcao valida:" << endl << endl;
    
    cout << "1 - Testar criacao de Vendedor." << endl;
    cout << "2 - Testar atualizacao Vendedor." << endl << endl;

    cout << "3 - Impressao Relatorio de Teste." << endl << endl;

    cout << "8 - Voltar ao menu Sistema de Testes." << endl;
    cout << "9 - Voltar ao Menu Principal." << endl;
    cout << "0 - Sair." << endl << endl;
    
    cin >> op1;
    
    cout << endl << endl;
    
    switch(op1){

      case '1':
        testeCriarVendedor();
        
        break;

      case '2':
        testeAtualizarVendedor();
        
        break;

      case '3':

        system("cls");

        cout << "----------------------------------------------------" << endl;
        cout << "                Sistema de Testes                   " << endl;
        cout << "                Relatorio de Teste                  " << endl;
        cout << "----------------------------------------------------" << endl << endl;

        vendedor.imprime();

        cout <<  endl;
        cout << "Voltando ao Menu Atualizar Dados Vendedor..." << endl;

        system("pause");

        

        break;

      case '8':
        teste();
        
        break;

      case '9':
        interfaceSistema.menu();
        
        break;

      case '0':
        exit(1);

    }

  }while(v1 == true) ;
  

}

//--------------------------------------------------------------------------

void InterfaceTeste::testeCriarVendedor(){
  
  double salarioBase,valorVendas;
  int codSetor;

    system("cls");

    cout << "----------------------------------------------------" << endl;
    cout << "                Sistema de Testes                   " << endl;
    cout << "              Teste Criar Vendedor                " << endl;
    cout << "----------------------------------------------------" << endl << endl;
    
    cout << "Insira os seguintes dados do Vendedor" << endl << endl;
    
    cout << "Insira o nome: ";
    cin.ignore();
    getline( cin, nome1);
    vendedor.setNome(nome1);
    cout << endl;

    cout << "Insira o cpf: ";
    cin.ignore();
    getline( cin, cpf1);
    vendedor.setCPF(cpf1);
    cout << endl;
    
    cout << "Insira o telefone: ";
    cin.ignore();
    getline( cin, telefone1);
    vendedor.setTelefone(telefone1);
    cout << endl;

    cout << "Insira o endereco: ";
    cin.ignore();
    getline( cin, endereco1);
    vendedor.setEndereco(endereco1);
    cout << endl;

    cout << "Insira o Codigo do Setor: ";
    cin >> codSetor;
    vendedor.setCodSetor(codSetor);
    cout << endl;

    cout << "Insira o Salario Base: ";
    cin >> salarioBase;
    vendedor.setSalarioBase(salarioBase);
    cout << endl;

    cout << "Insira o Valor da Venda: ";
    cin >> valorVendas;
    vendedor.setValorVendas(valorVendas);
    cout << endl;
    
    system("cls");

    cout << "Fornecedor cadastrado com sucesso!" << endl;
    cout << "Voltando ao menu Teste Vendedor..." << endl << endl;

    system("pause");

    testeFornecedor();
}

//--------------------------------------------------------------------------

void InterfaceTeste::testeAtualizarVendedor(){

  double salarioBase,valorVendas;
  int codSetor;
  
  

  do{
    
    v1 =true;

    system("cls");

    cout << "----------------------------------------------------" << endl;
    cout << "                Sistema de Testes                   " << endl;
    cout << "         Teste Atualizar Dados Vendedor           " << endl;
    cout << "----------------------------------------------------" << endl << endl;
    
    cout << "Insira uma opcao valida:" << endl << endl;
    
    cout << "1 - Alterar Nome." << endl;
    cout << "2 - Alterar cpf." << endl;
    cout << "3 - Alterar Telefone." << endl;
    cout << "4 - Alterar Endereco." << endl;
    cout << "5 - Alterar Codigo de Setor." << endl;
    cout << "6 - Alterar Salario Base." << endl << endl;
    cout << "7 - Alterar Valor da Venda." << endl << endl;

    cout << "8 - Voltar ao Menu Teste Vendedor." << endl;
    cout << "9 - Voltar ao Menu Principal." << endl;
    cout << "0 - Sair." << endl << endl;
    
    cin >> op1;
    
    cout << endl << endl;
    
    switch(op1){

      case '1':

        system("cls");

        cout << "----------------------------------------------------" << endl;
        cout << "                Sistema de Testes                   " << endl;
        cout << "         Teste Atualizar Dados Vendedor           " << endl;
        cout << "----------------------------------------------------" << endl << endl; 

        cout << "nome atual: " << vendedor.getNome() << endl; 
        cout << "Insira o nome desejado: ";
        cin.ignore();
        getline( cin, nome1);
        vendedor.setNome(nome1);
        cout << endl << endl;

        cout << "Nome alterado com sucesso!" << endl;
        cout << "Voltando ao Menu Atualizar Dados Vendedor..." << endl;

        system("pause");

        break;

      case '2':
        
        system("cls");

        cout << "----------------------------------------------------" << endl;
        cout << "                Sistema de Testes                   " << endl;
        cout << "         Teste Atualizar Dados Vendedor           " << endl;
        cout << "----------------------------------------------------" << endl << endl; 

        cout << "CPF atual: " << vendedor.getCPF() << endl; 
        cout << "Insira o CPF desejado: ";
        cin.ignore();
        getline( cin, cpf1);
        vendedor.setCPF(cpf1);
        cout << endl << endl;

        cout << "CPF alterado com sucesso!" << endl;
        cout << "Voltando ao Menu Atualizar Dados Vendedor..." << endl;

        system("pause");

        break;

      case '3':
        
        system("cls");

        cout << "----------------------------------------------------" << endl;
        cout << "                Sistema de Testes                   " << endl;
        cout << "         Teste Atualizar Dados Vendedor           " << endl;
        cout << "----------------------------------------------------" << endl << endl; 

        cout << "Telefone atual: " << vendedor.getTelefone() << endl; 
        cout << "Insira o Telefone desejado: ";
        cin.ignore();
        getline( cin, telefone1);
        vendedor.setTelefone(telefone1);
        cout << endl << endl;

        cout << "Telefone alterado com sucesso!" << endl;
        cout << "Voltando ao Menu Atualizar Dados Vendedor..." << endl;

        system("pause");

        
        break;

      case '4':
        
        system("cls");

        cout << "----------------------------------------------------" << endl;
        cout << "                Sistema de Testes                   " << endl;
        cout << "         Teste Atualizar Dados Vendedor           " << endl;
        cout << "----------------------------------------------------" << endl << endl; 

        cout << "Endereco atual: " << vendedor.getEndereco() << endl; 
        cout << "Insira o Endereco desejado: ";
        cin.ignore();
        getline( cin, endereco1);
        vendedor.setEndereco(endereco1);
        cout << endl << endl;

        cout << "Endereco alterado com sucesso!" << endl;
        cout << "Voltando ao Menu Atualizar Dados Vendedor..." << endl;

        system("pause");

        
        break;

      case '5':
        
        system("cls");

        cout << "----------------------------------------------------" << endl;
        cout << "                Sistema de Testes                   " << endl;
        cout << "         Teste Atualizar Dados Vendedor           " << endl;
        cout << "----------------------------------------------------" << endl << endl; 

        cout << "Codigo do Setor atual: " << vendedor.getCodSetor() << endl; 
        cout << "Digite o novo codigo do setor: ";
        cin >> codSetor;
        vendedor.setCodSetor(codSetor);
        cout << endl << endl;

        cout << "Codigo do Setor alterado com sucesso!" << endl;
        cout << "Voltando ao Menu Atualizar Dados Vendedor..." << endl;

        system("pause");

        
        break;

      case '6':
        
        system("cls");

        cout << "----------------------------------------------------" << endl;
        cout << "                Sistema de Testes                   " << endl;
        cout << "         Teste Atualizar Dados Vendedor           " << endl;
        cout << "----------------------------------------------------" << endl << endl; 

        cout << "Salario Base atual: " << vendedor.getSalarioBase() << endl; 
        cout << "Digite o novo salario base: ";
        cin >> salarioBase;
        vendedor.setSalarioBase(salarioBase);
        cout << endl << endl;

        cout << "Salario Base alterada com sucesso!" << endl;
        cout << "Voltando ao Menu Atualizar Dados Vendedor..." << endl;

        system("pause");

        
        break;
      case '7':
        
        system("cls");

        cout << "----------------------------------------------------" << endl;
        cout << "                Sistema de Testes                   " << endl;
        cout << "         Teste Atualizar Dados Vendedor           " << endl;
        cout << "----------------------------------------------------" << endl << endl; 

        cout << "Valor da Producao atual: " << vendedor.getValorVendas() << endl; 
        cout << "Digite o novo valor da divida: ";
        cin >> valorVendas;
        vendedor.setValorVendas(valorVendas);
        cout << endl << endl;

        cout << "Valor da Producao alterada com sucesso!" << endl;
        cout << "Voltando ao Menu Atualizar Dados Vendedor..." << endl;

        system("pause");
        
        break;

      case '8':
        testeVendedor();
        break;

      case '9':
        interfaceSistema.menu();
        break;

      case '0':
        exit(1);

    }

  }while(v1 == true);
}

//--------------------------------------------------------------------------
#pragma endregion //         Teste Vendedor
//--------------------------------------------------------------------------

//--------------------------------------------------------------------------
//**************************************************************************
#pragma region TesteAdministrador
//--------------------------------------------------------------------------

void InterfaceTeste::testeAdministrador(){

  
  

  do{
    
    v1 =true;
    system("cls");

    cout << "----------------------------------------------------" << endl;
    cout << "                Sistema de Testes                   " << endl;
    cout << "               Teste Administrador                  " << endl;
    cout << "----------------------------------------------------" << endl << endl;
    
    cout << "Insira uma opcao valida:" << endl << endl;
    
    cout << "1 - Testar criacao de Administrador." << endl;
    cout << "2 - Testar atualizacao Administrador." << endl << endl;

    cout << "3 - Impressao Relatorio de Teste." << endl << endl;

    cout << "8 - Voltar ao menu Sistema de Testes." << endl;
    cout << "9 - Voltar ao Menu Principal." << endl;
    cout << "0 - Sair." << endl << endl;
    
    cin >> op1;
    
    cout << endl << endl;
    
    switch(op1){

      case '1':
        testeCriarAdministrador();
        break;

      case '2':
        testeAtualizarAdministrador();
        break;

      case '3':

        system("cls");

        cout << "----------------------------------------------------" << endl;
        cout << "                Sistema de Testes                   " << endl;
        cout << "                Relatorio de Teste                  " << endl;
        cout << "----------------------------------------------------" << endl << endl;

        administrador.imprime();

        cout <<  endl;
        cout << "Voltando ao Menu Atualizar Dados Administrador..." << endl;

        system("pause");

        break;

      case '8':
        teste();
        break;

      case '9':
        interfaceSistema.menu();
        break;

      case '0':
        exit(1);

    }

  }while(v1 == true) ;
  

}

//--------------------------------------------------------------------------

void InterfaceTeste::testeCriarAdministrador(){
  
  double salarioBase,ajudaCusto;
  int codSetor;

    system("cls");

    cout << "----------------------------------------------------" << endl;
    cout << "                Sistema de Testes                   " << endl;
    cout << "              Teste Criar Administrador                 " << endl;
    cout << "----------------------------------------------------" << endl << endl;
    
    cout << "Insira os seguintes dados do Administrador" << endl << endl;
    
    cout << "Insira o nome: ";
    cin.ignore();
    getline( cin, nome1);
    administrador.setNome(nome1);
    cout << endl;

    cout << "Insira o cpf: ";
    cin.ignore();
    getline( cin, cpf1);
    administrador.setCPF(cpf1);
    cout << endl;
    
    cout << "Insira o telefone: ";
    cin.ignore();
    getline( cin, telefone1);
    administrador.setTelefone(telefone1);
    cout << endl;

    cout << "Insira o endereco: ";
    cin.ignore();
    getline( cin, endereco1);
    administrador.setEndereco(endereco1);
    cout << endl;

    cout << "Insira o codigo do setor: ";
    cin >> codSetor;
    administrador.setCodSetor(codSetor);
    cout << endl;

    cout << "Insira o salario base: ";
    cin >> salarioBase;
    administrador.setSalarioBase(salarioBase);
    cout << endl;
    
    cout << "Insira a ajuda de custo: ";
    cin >> ajudaCusto;
    administrador.setAjudaDeCusto(ajudaCusto);
    cout << endl;
    
    system("cls");

    cout << "Administrador cadastrado com sucesso!" << endl;
    cout << "Voltando ao menu Teste Administrador..." << endl << endl;

    system("pause");

    testeAdministrador();
}

//--------------------------------------------------------------------------

void InterfaceTeste::testeAtualizarAdministrador(){

  double salarioBase,ajudaCusto;
  int codSetor;
  
  

  do{
    
    v1 =true;

    system("cls");

    cout << "----------------------------------------------------" << endl;
    cout << "                Sistema de Testes                   " << endl;
    cout << "          Teste Atualizar Dados Administrador           " << endl;
    cout << "----------------------------------------------------" << endl << endl;
    
    cout << "Insira uma opcao valida:" << endl << endl;
    
    cout << "1 - Alterar Nome." << endl;
    cout << "2 - Alterar cpf." << endl;
    cout << "3 - Alterar Telefone." << endl;
    cout << "4 - Alterar Endereco." << endl;
    cout << "5 - Alterar Codigo do Setor." << endl;
    cout << "6 - Alterar Salario Base." << endl;
    cout << "7 - Alterar Ajuda de Custo." << endl << endl;

    cout << "8 - Voltar ao Menu Teste Administrador." << endl;
    cout << "9 - Voltar ao Menu Principal." << endl;
    cout << "0 - Sair." << endl << endl;
    
    cin >> op1;
    
    cout << endl << endl;
    
    switch(op1){

      case '1':

        system("cls");

        cout << "----------------------------------------------------" << endl;
        cout << "                Sistema de Testes                   " << endl;
        cout << "         Teste Atualizar Dados Administrador           " << endl;
        cout << "----------------------------------------------------" << endl << endl; 

        cout << "nome atual: " << administrador.getNome() << endl; 
        cout << "Insira o nome desejado: ";
        cin.ignore();
        getline( cin, nome1);
        administrador.setNome(nome1);
        cout << endl << endl;

        cout << "Nome alterado com sucesso!" << endl;
        cout << "Voltando ao Menu Atualizar Dados Administrador..." << endl;

        system("pause");

        break;

      case '2':
        
        system("cls");

        cout << "----------------------------------------------------" << endl;
        cout << "                Sistema de Testes                   " << endl;
        cout << "         Teste Atualizar Dados Administrador           " << endl;
        cout << "----------------------------------------------------" << endl << endl; 

        cout << "CPF atual: " << administrador.getCPF() << endl; 
        cout << "Insira o CPF desejado: ";
        cin.ignore();
        getline( cin, cpf1);
        administrador.setCPF(cpf1);
        cout << endl << endl;

        cout << "CPF alterado com sucesso!" << endl;
        cout << "Voltando ao Menu Atualizar Dados Administrador..." << endl;

        system("pause");

        break;

      case '3':
        
        system("cls");

        cout << "----------------------------------------------------" << endl;
        cout << "                Sistema de Testes                   " << endl;
        cout << "         Teste Atualizar Dados Administrador           " << endl;
        cout << "----------------------------------------------------" << endl << endl; 

        cout << "Telefone atual: " << administrador.getTelefone() << endl; 
        cout << "Insira o Telefone desejado: ";
        cin.ignore();
        getline( cin, telefone1);
        administrador.setTelefone(telefone1);
        cout << endl << endl;

        cout << "Telefone alterado com sucesso!" << endl;
        cout << "Voltando ao Menu Atualizar Dados Fornecedor..." << endl;

        system("pause");

        break;

      case '4':
        
        system("cls");

        cout << "----------------------------------------------------" << endl;
        cout << "                Sistema de Testes                   " << endl;
        cout << "         Teste Atualizar Dados Administrador           " << endl;
        cout << "----------------------------------------------------" << endl << endl; 

        cout << "Endereco atual: " << administrador.getEndereco() << endl; 
        cout << "Insira o Endereco desejado: ";
        cin.ignore();
        getline( cin, endereco1);
        administrador.setEndereco(endereco1);
        cout << endl << endl;

        cout << "Endereco alterado com sucesso!" << endl;
        cout << "Voltando ao Menu Atualizar Dados Administrador..." << endl;

        system("pause");

        break;

      case '5':
        
        system("cls");

        cout << "----------------------------------------------------" << endl;
        cout << "                Sistema de Testes                   " << endl;
        cout << "         Teste Atualizar Dados Administrador           " << endl;
        cout << "----------------------------------------------------" << endl << endl; 

        cout << "Codigo de Setor atual: " << administrador.getCodSetor() << endl; 
        cout << "Digite o novo Codigo de Setor: ";
        cin >> codSetor;
        administrador.setCodSetor(codSetor);
        cout << endl << endl;

        cout << "Valor do credito alterado com sucesso!" << endl;
        cout << "Voltando ao Menu Atualizar Dados Administrador..." << endl;

        system("pause");

        break;

      case '6':
        
        system("cls");

        cout << "----------------------------------------------------" << endl;
        cout << "                Sistema de Testes                   " << endl;
        cout << "         Teste Atualizar Dados Administrador           " << endl;
        cout << "----------------------------------------------------" << endl << endl; 

        cout << "Salario Base atual: " << administrador.getSalarioBase() << endl; 
        cout << "Digite o novo valor do Salario Base: ";
        cin >> salarioBase;
        administrador.setSalarioBase(salarioBase);
        cout << endl << endl;

        cout << "Valor da divida alterada com sucesso!" << endl;
        cout << "Voltando ao Menu Atualizar Dados Administrador..." << endl;

        system("pause");

        break;
      
      case '7':
        
        system("cls");

        cout << "----------------------------------------------------" << endl;
        cout << "                Sistema de Testes                   " << endl;
        cout << "          Teste Atualizar Ajuda de Custo            " << endl;
        cout << "----------------------------------------------------" << endl << endl; 

        cout << "Atual valor Ajuda de Custo: " << administrador.getAjudaDeCusto() << endl; 
        cout << "Digite o novo valor da Ajuda de Custo: ";
        cin >> ajudaCusto;
        administrador.setAjudaDeCusto(ajudaCusto);
        cout << endl << endl;

        cout << "Valor da Ajuda de Custo foi alterada com sucesso!" << endl;
        cout << "Voltando ao Menu Atualizar Dados Administrador..." << endl;

        system("pause");

        break;

      case '8':
        testeAdministrador();
        break;

      case '9':
        interfaceSistema.menu();
        break;

      case '0':
        exit(1);

    }

  }while(v1 == true);
  
}

//--------------------------------------------------------------------------
#pragma endregion //         Teste Administrador
//--------------------------------------------------------------------------

//--------------------------------------------------------------------------
#pragma endregion  //          Metodos_teste
//--------------------------------------------------------------------------


