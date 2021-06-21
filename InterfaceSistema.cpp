#include "InterfaceSistema.hpp"
InterfaceTeste t;
Sistema sistemaCod;
string nome, cpf, telefone, endereco;
int codSetor;
double credito, divida, salarioBase, ajudaCusto, valorProducao, valorVendas;
char op;
bool v;
InterfaceSistema::InterfaceSistema(){
}

void InterfaceSistema::menu() {
  
  do{

    v = true;

    system("cls");

    cout << "----------------------------------------------------" << endl;
    cout << "                 Menu Principal                     " << endl;
    cout << "----------------------------------------------------" << endl << endl;
    
    cout << "Insira uma opcao valida:" << endl << endl;
    
    cout << "1 - Sistema de Testes de Classe." << endl;
    cout << "2 - Sistema de Gestao de Pessoas." << endl << endl;
    
    cout << "0 - Sair" << endl << endl;
    
    cin >> op;
    
    switch(op){

      case '1':
        
        t.teste();

      break;

      case '2':

        sistema();

      break;

      case '0':

        exit(1);

    }

  }while(v == true);

}

//---------------------------------------------------------------------
#pragma region Sistema_menu  
//---------------------------------------------------------------------

void InterfaceSistema::sistema() {
  do{
    
    v = true;
    system("cls");

    cout << "----------------------------------------------------" << endl;
    cout << "            Sistema Gestão de Pessoas               " << endl;
    cout << "----------------------------------------------------" << endl << endl;
    
    cout << "Insira uma opcao valida:" << endl << endl;
    
    cout << "1 - Menu Incluir Pessoa." << endl;
    cout << "2 - Menu Atualizar Pessoa." << endl;
    cout << "3 - Menu Relatorios." << endl << endl;

    cout << "9 - Voltar ao Menu Principal." << endl;
    cout << "0 - Sair." << endl << endl;
    
    cin >> op;
    
    cout << endl << endl;
    
    switch(op){

      case '1':
        menuIncluirPessoa();
        break;

      case '2':
        menuAtualizarPessoa();
        break;

      case '3':
        menuRelatorios();
        break;

      case '9':
        menu();
        break;
      
      case '0':
        exit(1);

    }

  }while(v == true);

}

void InterfaceSistema::menuIncluirPessoa(){
  do{

    v = true;
    
    system("cls");

    cout << "----------------------------------------------------" << endl;
    cout << "            Sistema Gestão de Pessoas               " << endl;
    cout << "                 Incluir Pessoas                    " << endl;
    cout << "----------------------------------------------------" << endl << endl;
    
    cout << "Insira uma opcao valida:" << endl << endl;
    
    cout << "1 - Incluir Fornecedor." << endl;
    cout << "2 - Incluir Empregado." << endl;
    cout << "3 - Incluir Operario." << endl;
    cout << "4 - Incluir Vendedor." << endl;
    cout << "5 - Incluir Administrador." << endl;
    cout << "6 - Incluir Pessoa." << endl << endl;

    cout << "8 - Voltar ao Menu Gestao de Pessoas" << endl;
    cout << "9 - Voltar ao Menu Principal." << endl;
    cout << "0 - Sair." << endl << endl;
    
    cin >> op;
    
    cout << endl << endl;
    
    switch(op){

      case '1':
      
        system("cls");

        cout << "----------------------------------------------------" << endl;
        cout << "            Sistema Gestão de Pessoas               " << endl;
        cout << "               Incluir Fornecedor                   " << endl;
        cout << "----------------------------------------------------" << endl << endl;

        cout << "Insira os seguintes dados do Fornecedor" << endl << endl;
  
        cout << "Insira o nome: ";
        cin.ignore();
        getline( cin, nome);
        cout << endl;

        cout << "Insira o cpf: ";
        cin.ignore();
        getline( cin, cpf);
        cout << endl;
        
        cout << "Insira o telefone: ";
        cin.ignore();
        getline( cin, telefone);
        cout << endl;

        cout << "Insira o endereco: ";
        cin.ignore();
        getline( cin, endereco);
        cout << endl;

        cout << "Insira o credito: ";
        cin >> credito;
        cout << endl;

        cout << "Insira a divida: ";
        cin >> divida;
        cout << endl;
        
        sistemaCod.criaFornecedor(nome, cpf, telefone, endereco, credito, divida);
        system("cls");

        cout << "Fornecedor cadastrado com sucesso!" << endl;
        cout << "Voltando ao menu Teste Fornecedor..." << endl << endl;

        system("pause");

        break;

      case '2':
      
        system("cls");
          
        cout << "----------------------------------------------------" << endl;
        cout << "            Sistema Gestão de Pessoas               " << endl;
        cout << "               Incluir Empregado                    " << endl;
        cout << "----------------------------------------------------" << endl << endl;
        
        cout << "Insira os seguintes dados do Empregado" << endl << endl;
        
        cout << "Insira o nome: ";
        cin.ignore();
        getline( cin, nome);
        cout << endl;
        
        cout << "Insira o cpf: ";
        cin.ignore();
        getline( cin, cpf);
        cout << endl;
        
        cout << "Insira o telefone: ";
        cin.ignore();
        getline( cin, telefone);
        cout << endl;
        
        cout << "Insira o endereco: ";
        cin.ignore();
        getline( cin, endereco);
        cout << endl;
        
        cout << "Insira o Codigo do setor: ";
        cin >> codSetor;
        cout << endl;
        
        cout << "Insira o Salario Base: ";
        cin >> salarioBase;
        cout << endl;
        
        sistemaCod.criaEmpregado(nome, cpf, telefone, endereco, codSetor, salarioBase);
        system("cls");
        
        cout << "Empregado cadastrado com sucesso!" << endl;
        cout << "Voltando ao menu Teste Empregado..." << endl << endl;
        
        system("pause");
        break;

      case '3':
      
        system("cls");
          
        cout << "----------------------------------------------------" << endl;
        cout << "            Sistema Gestão de Pessoas               " << endl;
        cout << "               Incluir Operario                     " << endl;
        cout << "----------------------------------------------------" << endl << endl;
        
        cout << "Insira os seguintes dados do Operario" << endl << endl;
        
        cout << "Insira o nome: ";
        cin.ignore();
        getline( cin, nome);
        cout << endl;
        
        cout << "Insira o cpf: ";
        cin.ignore();
        getline( cin, cpf);
        cout << endl;
        
        cout << "Insira o telefone: ";
        cin.ignore();
        getline( cin, telefone);
        cout << endl;
        
        cout << "Insira o endereco: ";
        cin.ignore();
        getline( cin, endereco);
        cout << endl;
        
        cout << "Insira o Codigo do setor: ";
        cin >> codSetor;
        cout << endl;
        
        cout << "Insira o Salario Base: ";
        cin >> salarioBase;
        cout << endl;

        cout << "Insira o Valor de Producao: ";
        cin >> valorProducao;
        cout<< endl;
        
        sistemaCod.criaOperario(nome, cpf, telefone, endereco, codSetor, salarioBase, valorProducao);
        system("cls");
        
        cout << "Operario cadastrado com sucesso!" << endl;
        cout << "Voltando ao menu Teste Operario..." << endl << endl;
        
        system("pause");
        break;

      case '4':
      
        system("cls");
          
        cout << "----------------------------------------------------" << endl;
        cout << "            Sistema Gestão de Pessoas               " << endl;
        cout << "                Incluir Vendedor                    " << endl;
        cout << "----------------------------------------------------" << endl << endl;
        
        cout << "Insira os seguintes dados do Vendedor" << endl << endl;
        
        cout << "Insira o nome: ";
        cin.ignore();
        getline( cin, nome);
        cout << endl;
        
        cout << "Insira o cpf: ";
        cin.ignore();
        getline( cin, cpf);
        cout << endl;
        
        cout << "Insira o telefone: ";
        cin.ignore();
        getline( cin, telefone);
        cout << endl;
        
        cout << "Insira o endereco: ";
        cin.ignore();
        getline( cin, endereco);
        cout << endl;
        
        cout << "Insira o Codigo do setor: ";
        cin >> codSetor;
        cout << endl;
        
        cout << "Insira o Salario Base: ";
        cin >> salarioBase;
        cout << endl;
        
        cout << "Insira o Valor da Venda: ";
        cin >> valorVendas;
        cout << endl;
        
        sistemaCod.criaVendedor(nome, cpf, telefone, endereco, codSetor, salarioBase, valorVendas);
        system("cls");
        
        cout << "Vendedor cadastrado com sucesso!" << endl;
        cout << "Voltando ao menu Teste Vendedor..." << endl << endl;
        
        system("pause");
        break;

      case '5':
      
        system("cls");
          
        cout << "----------------------------------------------------" << endl;
        cout << "            Sistema Gestão de Pessoas               " << endl;
        cout << "              Incluir Administrador                 " << endl;
        cout << "----------------------------------------------------" << endl << endl;
        
        cout << "Insira os seguintes dados do Administrador" << endl << endl;
        
        cout << "Insira o nome: ";
        cin.ignore();
        getline( cin, nome);
        cout << endl;
        
        cout << "Insira o cpf: ";
        cin.ignore();
        getline( cin, cpf);
        cout << endl;
        
        cout << "Insira o telefone: ";
        cin.ignore();
        getline( cin, telefone);
        cout << endl;
        
        cout << "Insira o endereco: ";
        cin.ignore();
        getline( cin, endereco);
        cout << endl;
        
        cout << "Insira o Codigo do setor: ";
        cin >> codSetor;
        cout << endl;
        
        cout << "Insira o Salario Base: ";
        cin >> salarioBase;
        cout << endl;
        
        cout << "Insira o Valor da Venda: ";
        cin >> ajudaCusto;
        cout << endl;
        
        sistemaCod.criaAdministrador(nome, cpf, telefone, endereco, codSetor, salarioBase, ajudaCusto);
        system("cls");
        
        cout << "Administrador cadastrado com sucesso!" << endl;
        cout << "Voltando ao menu Teste Administrador..." << endl << endl;
        
        system("pause");
        break;

      case '6':
      
        system("cls");
          
        cout << "----------------------------------------------------" << endl;
        cout << "            Sistema Gestão de Pessoas               " << endl;
        cout << "                 Incluir Pessoa                     " << endl;
        cout << "----------------------------------------------------" << endl << endl;
        
        cout << "Insira os seguintes dados do Pessoa" << endl << endl;
        
        cout << "Insira o nome: ";
        cin.ignore();
        getline( cin, nome);
        cout << endl;
        
        cout << "Insira o cpf: ";
        cin.ignore();
        getline( cin, cpf);
        cout << endl;
        
        cout << "Insira o telefone: ";
        cin.ignore();
        getline( cin, telefone);
        cout << endl;
        
        cout << "Insira o endereco: ";
        cin.ignore();
        getline( cin, endereco);
        cout << endl;
        
        sistemaCod.criaPessoa(nome, cpf, telefone, endereco);
        system("cls");
        
        cout << "Pessoa cadastrado com sucesso!" << endl;
        cout << "Voltando ao menu Teste Pessoa..." << endl << endl;
        
        system("pause");
        break;

      case '8':
        sistema();
        break;

      case '9':
        menu();
        break;
      
      case '0':
        exit(1);

    }

  }while(v == true);

}

void InterfaceSistema::menuAtualizarPessoa(){
  
  do{

    v = true;
    
    system("cls");

    cout << "----------------------------------------------------" << endl;
    cout << "            Sistema Gestão de Pessoas               " << endl;
    cout << "                Atualizar Pessoas                   " << endl;
    cout << "----------------------------------------------------" << endl << endl;
    
    cout << "Insira uma opcao valida:" << endl << endl;
    
    cout << "1 - Atualizar Fornecedor." << endl;
    cout << "2 - Atualizar Empregado." << endl;
    cout << "3 - Atualizar Operario." << endl << endl;
    cout << "4 - Atualizar Vendedor." << endl << endl;
    cout << "5 - Atualizar Administrador." << endl << endl;
    cout << "6 - Atualizar Pessoa." << endl << endl;

    cout << "8 - Voltar ao Menu Gestao de Pessoas." << endl;
    cout << "9 - Voltar ao Menu Principal." << endl;
    cout << "0 - Sair." << endl << endl;
    
    cin >> op;
    
    cout << endl << endl;
    
    switch(op) {
      case '1':
        cout << "Digite o CPF do fornecedor a ser alterado";
        cin.ignore();
        getline( cin, cpf);
        cout << endl;
        atualizarFornecedor(cpf);
        break;
      case '2':
        cout << "Digite o CPF do fornecedor a ser alterado";
        cin.ignore();
        getline( cin, cpf);
        cout << endl;
        atualizarEmpregado(cpf);
        break;
      case '3':
        cout << "Digite o CPF do fornecedor a ser alterado";
        cin.ignore();
        getline( cin, cpf);
        cout << endl;
        atualizarOperario(cpf);
        break;
      case '4':
        cout << "Digite o CPF do fornecedor a ser alterado";
        cin.ignore();
        getline( cin, cpf);
        cout << endl;
        atualizarVendedor(cpf);
        break;
      case '5':
        cout << "Digite o CPF do fornecedor a ser alterado";
        cin.ignore();
        getline( cin, cpf);
        cout << endl;
        atualizarAdministrador(cpf);
        break;
      case '6':
        cout << "Digite o CPF do fornecedor a ser alterado";
        cin.ignore();
        getline( cin, cpf);
        cout << endl;
        atualizarPessoa(cpf);
        break;
      case '8':
        sistema();
        break;
      case '9':
        menu();
        break;
      case '0':
        exit(1);
        break;

    }
  }while(v);
}

void InterfaceSistema::atualizarFornecedor(string _cpf){

  do{
    
    v = true;

    system("cls");

    cout << "----------------------------------------------------" << endl;
    cout << "            Sistema Gestão de Pessoas               " << endl;
    cout << "            Atualizar Dados Fornecedor              " << endl;
    cout << "----------------------------------------------------" << endl << endl;
    
    cout << "Insira uma opcao valida:" << endl << endl;
    
    cout << "1 - Atualizar Nome." << endl;
    cout << "2 - Atualizar cpf." << endl;
    cout << "3 - Atualizar Telefone." << endl;
    cout << "4 - Atualizar Endereco." << endl;
    cout << "5 - Atualizar Credito." << endl;
    cout << "6 - Atualizar Divida." << endl << endl;

    cout << "8 - Voltar ao Menu Atualizar Fornecedor." << endl;
    cout << "9 - Voltar ao Menu Principal." << endl;
    cout << "0 - Sair." << endl << endl;
    
    cin >> op;
    
    cout << endl << endl;
    
    switch(op){

      case '1':

        system("cls");

        cout << "----------------------------------------------------" << endl;
        cout << "                Sistema de Testes                   " << endl;
        cout << "            Atualizar Dados Fornecedor              " << endl;
        cout << "----------------------------------------------------" << endl << endl; 

        cout << "nome atual: " << sistemaCod.getNome('4',_cpf) << endl; 
        cout << "Insira o nome desejado: ";
        cin.ignore();
        getline( cin, nome);
        sistemaCod.atualizaNome('4', _cpf, nome);
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

        cout << "CPF atual: " << sistemaCod.getCPF('4',_cpf) << endl; 
        cout << "Insira o CPF desejado: ";
        cin.ignore();
        getline( cin, cpf);
        sistemaCod.atualizaCPF('4',_cpf ,cpf);
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

        cout << "Telefone atual: " << sistemaCod.getTelefone('4',_cpf) << endl; 
        cout << "Insira o Telefone desejado: ";
        cin.ignore();
        getline( cin, telefone);
        sistemaCod.atualizaTelefone('4',_cpf,telefone);
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
        
        cout << "Endereco atual: " << sistemaCod.getEndereco('4', _cpf) << endl; 
        cout << "Insira o Endereco desejado: ";
        cin.ignore();
        getline( cin, endereco);
        sistemaCod.atualizaEndereco('4', _cpf,endereco);
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

        cout << "Credito atual: " << sistemaCod.getValorCredito(_cpf) << endl; 
        cout << "Digite o novo valor do credito: ";
        cin >> credito;
        sistemaCod.atualizaValorCredito(_cpf,credito);
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

        cout << "Divida atual: " << sistemaCod.getValorDivida(_cpf) << endl; 
        cout << "Digite o novo valor da divida: ";
        cin >> divida;
        sistemaCod.atualizaValorDivida(_cpf,divida);
        cout << endl << endl;

        cout << "Valor da divida alterada com sucesso!" << endl;
        cout << "Voltando ao Menu Atualizar Dados Fornecedor..." << endl;

        system("pause");

        break;

      case '8':
        atualizarFornecedor(_cpf);
        break;

      case '9':
        menu();
        break;

      case '0':
        exit(1);

    }

  }while(v == true);

}

void InterfaceSistema::atualizarEmpregado(string _cpf){

  do{
    
    v = true;

    system("cls");

    cout << "----------------------------------------------------" << endl;
    cout << "            Sistema Gestão de Pessoas               " << endl;
    cout << "            Atualizar Dados Empregado              " << endl;
    cout << "----------------------------------------------------" << endl << endl;
    
    cout << "Insira uma opcao valida:" << endl << endl;
    
    cout << "1 - Atualizar Nome." << endl;
    cout << "2 - Atualizar cpf." << endl;
    cout << "3 - Atualizar Telefone." << endl;
    cout << "4 - Atualizar Endereco." << endl;
    cout << "5 - Atualizar Codigo do Setor." << endl;
    cout << "6 - Atualizar Salario Base." << endl << endl;

    cout << "8 - Voltar ao Menu Atualizar Empregado." << endl;
    cout << "9 - Voltar ao Menu Principal." << endl;
    cout << "0 - Sair." << endl << endl;
    
    cin >> op;
    
    cout << endl << endl;
    
    switch(op){

      case '1':

        system("cls");

        cout << "----------------------------------------------------" << endl;
        cout << "                Sistema de Testes                   " << endl;
        cout << "            Atualizar Dados Empregado              " << endl;
        cout << "----------------------------------------------------" << endl << endl; 

        cout << "nome atual: " << sistemaCod.getNome('3',_cpf) << endl; 
        cout << "Insira o nome desejado: ";
        cin.ignore();
        getline( cin, nome);
        sistemaCod.atualizaNome('3', _cpf, nome);
        cout << endl << endl;

        cout << "Nome alterado com sucesso!" << endl;
        cout << "Voltando ao Menu Atualizar Dados Empregado..." << endl;

        system("pause");

        break;

      case '2':
        
        system("cls");

        cout << "----------------------------------------------------" << endl;
        cout << "                Sistema de Testes                   " << endl;
        cout << "            Atualizar Dados Empregado              " << endl;
        cout << "----------------------------------------------------" << endl << endl; 

        cout << "CPF atual: " << sistemaCod.getCPF('3',_cpf) << endl; 
        cout << "Insira o CPF desejado: ";
        cin.ignore();
        getline( cin, cpf);
        sistemaCod.atualizaCPF('3',_cpf ,cpf);
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

        cout << "Telefone atual: " << sistemaCod.getTelefone('3',_cpf) << endl; 
        cout << "Insira o Telefone desejado: ";
        cin.ignore();
        getline( cin, telefone);
        sistemaCod.atualizaTelefone('3',_cpf,telefone);
        cout << endl << endl;

        cout << "Telefone alterado com sucesso!" << endl;
        cout << "Voltando ao Menu Atualizar Dados Empregado..." << endl;

        system("pause");

        break;

      case '4':
        
        system("cls");

        cout << "----------------------------------------------------" << endl;
        cout << "                Sistema de Testes                   " << endl;
        cout << "         Teste Atualizar Dados Empregado           " << endl;
        cout << "----------------------------------------------------" << endl << endl; 
        
        cout << "Endereco atual: " << sistemaCod.getEndereco('3', _cpf) << endl; 
        cout << "Insira o Endereco desejado: ";
        cin.ignore();
        getline( cin, endereco);
        sistemaCod.atualizaEndereco('3', _cpf,endereco);
        cout << endl << endl;

        cout << "Endereco alterado com sucesso!" << endl;
        cout << "Voltando ao Menu Atualizar Dados Empregado..." << endl;

        system("pause");

        break;

      case '5':
        
        system("cls");

        cout << "----------------------------------------------------" << endl;
        cout << "                Sistema de Testes                   " << endl;
        cout << "             Atualizar Dados Empregado              " << endl;
        cout << "----------------------------------------------------" << endl << endl; 

        cout << "Codigo do Setor atual: " << sistemaCod.getCodSetor('2', _cpf) << endl; 
        cout << "Digite o novo Codigo do Setor: ";
        cin >> codSetor;
        sistemaCod.atualizaCodSetor('2', _cpf, codSetor);
        cout << endl << endl;

        cout << "Codigo do Setor alterado com sucesso!" << endl;
        cout << "Voltando ao Menu Atualizar Dados Empregado..." << endl;

        system("pause");

        break;

      case '6':
        
        system("cls");

        cout << "----------------------------------------------------" << endl;
        cout << "                Sistema de Testes                   " << endl;
        cout << "         Teste Atualizar Dados Empregado            " << endl;
        cout << "----------------------------------------------------" << endl << endl; 

        cout << "Salario Base atual: " << sistemaCod.getSalarioBase('2',_cpf) << endl; 
        cout << "Digite o novo Salario Base: ";
        cin >> salarioBase;
        sistemaCod.atualizaSalarioBase('2',_cpf,salarioBase);
        cout << endl << endl;
 
        cout << "Salario Base alterada com sucesso!"<< endl;
        cout << "Voltando ao Menu Atualizar Dados Empregado..." << endl;

        system("pause");

        break;

      case '8':
        atualizarEmpregado(_cpf);
        break;

      case '9':
        menu();
        break;

      case '0':
        exit(1);

    }

  }while(v == true);

}

void InterfaceSistema::atualizarOperario(string _cpf){

  do{
    
    v = true;

    system("cls");

    cout << "----------------------------------------------------" << endl;
    cout << "            Sistema Gestão de Pessoas               " << endl;
    cout << "            Atualizar Dados Operario                " << endl;
    cout << "----------------------------------------------------" << endl << endl;
    
    cout << "Insira uma opcao valida:" << endl << endl;
    
    cout << "1 - Atualizar Nome." << endl;
    cout << "2 - Atualizar cpf." << endl;
    cout << "3 - Atualizar Telefone." << endl;
    cout << "4 - Atualizar Endereco." << endl;
    cout << "5 - Atualizar Codigo do Setor." << endl;
    cout << "6 - Atualizar Salario Base." << endl << endl;
    cout << "7 - Atualizar Valor do Produto." << endl << endl;

    cout << "8 - Voltar ao Menu Atualizar Operario." << endl;
    cout << "9 - Voltar ao Menu Principal." << endl;
    cout << "0 - Sair." << endl << endl;
    
    cin >> op;
    
    cout << endl << endl;
    
    switch(op){

      case '1':

        system("cls");

        cout << "----------------------------------------------------" << endl;
        cout << "                Sistema de Testes                   " << endl;
        cout << "            Atualizar Dados Operario              " << endl;
        cout << "----------------------------------------------------" << endl << endl; 

        cout << "nome atual: " << sistemaCod.getNome('5',_cpf) << endl; 
        cout << "Insira o nome desejado: ";
        cin.ignore();
        getline( cin, nome);
        sistemaCod.atualizaNome('5', _cpf, nome);
        cout << endl << endl;

        cout << "Nome alterado com sucesso!" << endl;
        cout << "Voltando ao Menu Atualizar Dados Operario..." << endl;

        system("pause");

        break;

      case '2':
        
        system("cls");

        cout << "----------------------------------------------------" << endl;
        cout << "                Sistema de Testes                   " << endl;
        cout << "            Atualizar Dados Operario              " << endl;
        cout << "----------------------------------------------------" << endl << endl; 

        cout << "CPF atual: " << sistemaCod.getCPF('5',_cpf) << endl; 
        cout << "Insira o CPF desejado: ";
        cin.ignore();
        getline( cin, cpf);
        sistemaCod.atualizaCPF('5',_cpf ,cpf);
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

        cout << "Telefone atual: " << sistemaCod.getTelefone('5',_cpf) << endl; 
        cout << "Insira o Telefone desejado: ";
        cin.ignore();
        getline( cin, telefone);
        sistemaCod.atualizaTelefone('5',_cpf,telefone);
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
        
        cout << "Endereco atual: " << sistemaCod.getEndereco('5', _cpf) << endl; 
        cout << "Insira o Endereco desejado: ";
        cin.ignore();
        getline( cin, endereco);
        sistemaCod.atualizaEndereco('5', _cpf,endereco);
        cout << endl << endl;

        cout << "Endereco alterado com sucesso!" << endl;
        cout << "Voltando ao Menu Atualizar Dados Operario..." << endl;

        system("pause");

        break;

      case '5':
        
        system("cls");

        cout << "----------------------------------------------------" << endl;
        cout << "                Sistema de Testes                   " << endl;
        cout << "             Atualizar Dados Operario              " << endl;
        cout << "----------------------------------------------------" << endl << endl; 

        cout << "Codigo do Setor atual: " << sistemaCod.getCodSetor('3', _cpf) << endl; 
        cout << "Digite o novo Codigo do Setor: ";
        cin >> codSetor;
        sistemaCod.atualizaCodSetor('3', _cpf, codSetor);
        cout << endl << endl;

        cout << "Codigo do Setor alterado com sucesso!" << endl;
        cout << "Voltando ao Menu Atualizar Dados Operario..." << endl;

        system("pause");

        break;

      case '6':
        
        system("cls");

        cout << "----------------------------------------------------" << endl;
        cout << "                Sistema de Testes                   " << endl;
        cout << "         Teste Atualizar Dados Operario            " << endl;
        cout << "----------------------------------------------------" << endl << endl; 

        cout << "Salario Base atual: " << sistemaCod.getSalarioBase('3',_cpf) << endl; 
        cout << "Digite o novo Salario Base: ";
        cin >> salarioBase;
        sistemaCod.atualizaSalarioBase('3',_cpf,salarioBase);
        cout << endl << endl;
 
        cout << "Salario Base alterada com sucesso!"<< endl;
        cout << "Voltando ao Menu Atualizar Dados Operario..." << endl;

        system("pause");

        break;
      case '7':
        
        system("cls");

        cout << "----------------------------------------------------" << endl;
        cout << "                Sistema de Testes                   " << endl;
        cout << "         Teste Atualizar Dados Operario            " << endl;
        cout << "----------------------------------------------------" << endl << endl; 

        cout << "Valor do Produto e atual: " << sistemaCod.getValorProduto('1',_cpf) << endl; 
        cout << "Digite o novo Valor do Produto: ";
        cin >> valorProducao;
        sistemaCod.atualizaValorProduto('1',_cpf,valorProducao);
        cout << endl << endl;
 
        cout << "Valor do Produto alterada com sucesso!"<< endl;
        cout << "Voltando ao Menu Atualizar Dados Operario..." << endl;

        system("pause");

        break;

      case '8':
        atualizarOperario(_cpf);
        break;

      case '9':
        menu();
        break;

      case '0':
        exit(1);

    }

  }while(v == true);

}

void InterfaceSistema::atualizarVendedor(string _cpf){

  do{
    
    v = true;

    system("cls");

    cout << "----------------------------------------------------" << endl;
    cout << "            Sistema Gestão de Pessoas               " << endl;
    cout << "            Atualizar Dados Vendedor                " << endl;
    cout << "----------------------------------------------------" << endl << endl;
    
    cout << "Insira uma opcao valida:" << endl << endl;
    
    cout << "1 - Atualizar Nome." << endl;
    cout << "2 - Atualizar cpf." << endl;
    cout << "3 - Atualizar Telefone." << endl;
    cout << "4 - Atualizar Endereco." << endl;
    cout << "5 - Atualizar Codigo do Setor." << endl;
    cout << "6 - Atualizar Salario Base." << endl << endl;
    cout << "7 - Atualizar Valor do Vendas." << endl << endl;

    cout << "8 - Voltar ao Menu Atualizar Vendedor." << endl;
    cout << "9 - Voltar ao Menu Principal." << endl;
    cout << "0 - Sair." << endl << endl;
    
    cin >> op;
    
    cout << endl << endl;
    
    switch(op){

      case '1':

        system("cls");

        cout << "----------------------------------------------------" << endl;
        cout << "                Sistema de Testes                   " << endl;
        cout << "            Atualizar Dados Vendedor              " << endl;
        cout << "----------------------------------------------------" << endl << endl; 

        cout << "nome atual: " << sistemaCod.getNome('6',_cpf) << endl; 
        cout << "Insira o nome desejado: ";
        cin.ignore();
        getline( cin, nome);
        sistemaCod.atualizaNome('6', _cpf, nome);
        cout << endl << endl;

        cout << "Nome alterado com sucesso!" << endl;
        cout << "Voltando ao Menu Atualizar Dados Vendedor..." << endl;

        system("pause");

        break;

      case '2':
        
        system("cls");

        cout << "----------------------------------------------------" << endl;
        cout << "                Sistema de Testes                   " << endl;
        cout << "            Atualizar Dados Vendedor              " << endl;
        cout << "----------------------------------------------------" << endl << endl; 

        cout << "CPF atual: " << sistemaCod.getCPF('6',_cpf) << endl; 
        cout << "Insira o CPF desejado: ";
        cin.ignore();
        getline( cin, cpf);
        sistemaCod.atualizaCPF('6',_cpf ,cpf);
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

        cout << "Telefone atual: " << sistemaCod.getTelefone('6',_cpf) << endl; 
        cout << "Insira o Telefone desejado: ";
        cin.ignore();
        getline( cin, telefone);
        sistemaCod.atualizaTelefone('6',_cpf,telefone);
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
        
        cout << "Endereco atual: " << sistemaCod.getEndereco('6', _cpf) << endl; 
        cout << "Insira o Endereco desejado: ";
        cin.ignore();
        getline( cin, endereco);
        sistemaCod.atualizaEndereco('6', _cpf,endereco);
        cout << endl << endl;

        cout << "Endereco alterado com sucesso!" << endl;
        cout << "Voltando ao Menu Atualizar Dados Vendedor..." << endl;

        system("pause");

        break;

      case '5':
        
        system("cls");

        cout << "----------------------------------------------------" << endl;
        cout << "                Sistema de Testes                   " << endl;
        cout << "             Atualizar Dados Vendedor              " << endl;
        cout << "----------------------------------------------------" << endl << endl; 

        cout << "Codigo do Setor atual: " << sistemaCod.getCodSetor('4', _cpf) << endl; 
        cout << "Digite o novo Codigo do Setor: ";
        cin >> codSetor;
        sistemaCod.atualizaCodSetor('4', _cpf, codSetor);
        cout << endl << endl;

        cout << "Codigo do Setor alterado com sucesso!" << endl;
        cout << "Voltando ao Menu Atualizar Dados Vendedor..." << endl;

        system("pause");

        break;

      case '6':
        
        system("cls");

        cout << "----------------------------------------------------" << endl;
        cout << "                Sistema de Testes                   " << endl;
        cout << "         Teste Atualizar Dados Vendedor            " << endl;
        cout << "----------------------------------------------------" << endl << endl; 

        cout << "Salario Base atual: " << sistemaCod.getSalarioBase('4',_cpf) << endl; 
        cout << "Digite o novo Salario Base: ";
        cin >> salarioBase;
        sistemaCod.atualizaSalarioBase('4',_cpf,salarioBase);
        cout << endl << endl;
 
        cout << "Salario Base alterada com sucesso!"<< endl;
        cout << "Voltando ao Menu Atualizar Dados Vendedor..." << endl;

        system("pause");

        break;
      case '7':
        
        system("cls");

        cout << "----------------------------------------------------" << endl;
        cout << "                Sistema de Testes                   " << endl;
        cout << "         Teste Atualizar Dados Vendedor            " << endl;
        cout << "----------------------------------------------------" << endl << endl; 

        cout << "Valor do Vendas e atual: " << sistemaCod.getValorProduto('2',_cpf) << endl; 
        cout << "Digite o novo Valor do Vendas: ";
        cin >> valorProducao;
        sistemaCod.atualizaValorProduto('2',_cpf,valorProducao);
        cout << endl << endl;
 
        cout << "Valor do Vendas alterada com sucesso!"<< endl;
        cout << "Voltando ao Menu Atualizar Dados Vendedor..." << endl;

        system("pause");

        break;

      case '8':
        atualizarVendedor(_cpf);
        break;

      case '9':
        menu();
        break;

      case '0':
        exit(1);

    }

  }while(v == true);

}

void InterfaceSistema::atualizarAdministrador(string _cpf){

  do{
    
    v = true;

    system("cls");

    cout << "----------------------------------------------------" << endl;
    cout << "            Sistema Gestão de Pessoas               " << endl;
    cout << "            Atualizar Dados Administrador                " << endl;
    cout << "----------------------------------------------------" << endl << endl;
    
    cout << "Insira uma opcao valida:" << endl << endl;
    
    cout << "1 - Atualizar Nome." << endl;
    cout << "2 - Atualizar cpf." << endl;
    cout << "3 - Atualizar Telefone." << endl;
    cout << "4 - Atualizar Endereco." << endl;
    cout << "5 - Atualizar Codigo do Setor." << endl;
    cout << "6 - Atualizar Salario Base." << endl << endl;
    cout << "7 - Atualizar Ajuda de Custo." << endl << endl;

    cout << "8 - Voltar ao Menu Atualizar Administrador." << endl;
    cout << "9 - Voltar ao Menu Principal." << endl;
    cout << "0 - Sair." << endl << endl;
    
    cin >> op;
    
    cout << endl << endl;
    
    switch(op){

      case '1':

        system("cls");

        cout << "----------------------------------------------------" << endl;
        cout << "                Sistema de Testes                   " << endl;
        cout << "            Atualizar Dados Administrador              " << endl;
        cout << "----------------------------------------------------" << endl << endl; 

        cout << "nome atual: " << sistemaCod.getNome('2',_cpf) << endl; 
        cout << "Insira o nome desejado: ";
        cin.ignore();
        getline( cin, nome);
        sistemaCod.atualizaNome('2', _cpf, nome);
        cout << endl << endl;

        cout << "Nome alterado com sucesso!" << endl;
        cout << "Voltando ao Menu Atualizar Dados Administrador..." << endl;

        system("pause");

        break;

      case '2':
        
        system("cls");

        cout << "----------------------------------------------------" << endl;
        cout << "                Sistema de Testes                   " << endl;
        cout << "            Atualizar Dados Administrador              " << endl;
        cout << "----------------------------------------------------" << endl << endl; 

        cout << "CPF atual: " << sistemaCod.getCPF('2',_cpf) << endl; 
        cout << "Insira o CPF desejado: ";
        cin.ignore();
        getline( cin, cpf);
        sistemaCod.atualizaCPF('2',_cpf ,cpf);
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

        cout << "Telefone atual: " << sistemaCod.getTelefone('2',_cpf) << endl; 
        cout << "Insira o Telefone desejado: ";
        cin.ignore();
        getline( cin, telefone);
        sistemaCod.atualizaTelefone('2',_cpf,telefone);
        cout << endl << endl;

        cout << "Telefone alterado com sucesso!" << endl;
        cout << "Voltando ao Menu Atualizar Dados Administrador..." << endl;

        system("pause");

        break;

      case '4':
        
        system("cls");

        cout << "----------------------------------------------------" << endl;
        cout << "                Sistema de Testes                   " << endl;
        cout << "         Teste Atualizar Dados Administrador           " << endl;
        cout << "----------------------------------------------------" << endl << endl; 
        
        cout << "Endereco atual: " << sistemaCod.getEndereco('2', _cpf) << endl; 
        cout << "Insira o Endereco desejado: ";
        cin.ignore();
        getline( cin, endereco);
        sistemaCod.atualizaEndereco('2', _cpf,endereco);
        cout << endl << endl;

        cout << "Endereco alterado com sucesso!" << endl;
        cout << "Voltando ao Menu Atualizar Dados Administrador..." << endl;

        system("pause");

        break;

      case '5':
        
        system("cls");

        cout << "----------------------------------------------------" << endl;
        cout << "                Sistema de Testes                   " << endl;
        cout << "             Atualizar Dados Administrador              " << endl;
        cout << "----------------------------------------------------" << endl << endl; 

        cout << "Codigo do Setor atual: " << sistemaCod.getCodSetor('1', _cpf) << endl; 
        cout << "Digite o novo Codigo do Setor: ";
        cin >> codSetor;
        sistemaCod.atualizaCodSetor('1', _cpf, codSetor);
        cout << endl << endl;

        cout << "Codigo do Setor alterado com sucesso!" << endl;
        cout << "Voltando ao Menu Atualizar Dados Administrador..." << endl;

        system("pause");

        break;

      case '6':
        
        system("cls");

        cout << "----------------------------------------------------" << endl;
        cout << "                Sistema de Testes                   " << endl;
        cout << "         Teste Atualizar Dados Administrador            " << endl;
        cout << "----------------------------------------------------" << endl << endl; 

        cout << "Salario Base atual: " << sistemaCod.getSalarioBase('1',_cpf) << endl; 
        cout << "Digite o novo Salario Base: ";
        cin >> salarioBase;
        sistemaCod.atualizaSalarioBase('1',_cpf,salarioBase);
        cout << endl << endl;
 
        cout << "Salario Base alterada com sucesso!"<< endl;
        cout << "Voltando ao Menu Atualizar Dados Administrador..." << endl;

        system("pause");

        break;
      case '7':
        
        system("cls");

        cout << "----------------------------------------------------" << endl;
        cout << "                Sistema de Testes                   " << endl;
        cout << "         Teste Atualizar Dados Administrador            " << endl;
        cout << "----------------------------------------------------" << endl << endl; 

        cout << "Ajuda de Custo e atual: " << sistemaCod.getAjudaDeCusto(_cpf) << endl; 
        cout << "Digite o novo Ajuda de Custo: ";
        cin >> ajudaCusto;
        sistemaCod.atualizaAjudaDeCusto(_cpf,ajudaCusto);
        cout << endl << endl;
 
        cout << "Ajuda de Custo alterada com sucesso!"<< endl;
        cout << "Voltando ao Menu Atualizar Dados Administrador..." << endl;

        system("pause");

        break;

      case '8':
        atualizarAdministrador(_cpf);
        break;

      case '9':
        menu();
        break;

      case '0':
        exit(1);

    }

  }while(v == true);

}
void InterfaceSistema::atualizarPessoa(string _cpf){

  do{
    
    v = true;

    system("cls");

    cout << "----------------------------------------------------" << endl;
    cout << "            Sistema Gestão de Pessoas               " << endl;
    cout << "             Atualizar Dados Pessoa                 " << endl;
    cout << "----------------------------------------------------" << endl << endl;
    
    cout << "Insira uma opcao valida:" << endl << endl;
    
    cout << "1 - Atualizar Nome." << endl;
    cout << "2 - Atualizar cpf." << endl;
    cout << "3 - Atualizar Telefone." << endl;
    cout << "4 - Atualizar Endereco." << endl;

    cout << "8 - Voltar ao Menu Atualizar Pessoa." << endl;
    cout << "9 - Voltar ao Menu Principal." << endl;
    cout << "0 - Sair." << endl << endl;
    
    cin >> op;
    
    cout << endl << endl;
    
    switch(op){

      case '1':

        system("cls");

        cout << "----------------------------------------------------" << endl;
        cout << "                Sistema de Testes                   " << endl;
        cout << "              Atualizar Dados Pessoa                " << endl;
        cout << "----------------------------------------------------" << endl << endl; 

        cout << "nome atual: " << sistemaCod.getNome('1',_cpf) << endl; 
        cout << "Insira o nome desejado: ";
        cin.ignore();
        getline( cin, nome);
        sistemaCod.atualizaNome('1', _cpf, nome);
        cout << endl << endl;

        cout << "Nome alterado com sucesso!" << endl;
        cout << "Voltando ao Menu Atualizar Dados Pessoa..." << endl;

        system("pause");

        break;

      case '2':
        
        system("cls");

        cout << "----------------------------------------------------" << endl;
        cout << "                Sistema de Testes                   " << endl;
        cout << "              Atualizar Dados Pessoa                " << endl;
        cout << "----------------------------------------------------" << endl << endl; 

        cout << "CPF atual: " << sistemaCod.getCPF('1',_cpf) << endl; 
        cout << "Insira o CPF desejado: ";
        cin.ignore();
        getline( cin, cpf);
        sistemaCod.atualizaCPF('1',_cpf ,cpf);
        cout << endl << endl;

        cout << "CPF alterado com sucesso!" << endl;
        cout << "Voltando ao Menu Atualizar Dados Pessoa..." << endl;

        system("pause");

        break;

      case '3':
        
        system("cls");

        cout << "----------------------------------------------------" << endl;
        cout << "                Sistema de Testes                   " << endl;
        cout << "              Atualizar Dados Pessoa                " << endl;
        cout << "----------------------------------------------------" << endl << endl; 

        cout << "Telefone atual: " << sistemaCod.getTelefone('1',_cpf) << endl; 
        cout << "Insira o Telefone desejado: ";
        cin.ignore();
        getline( cin, telefone);
        sistemaCod.atualizaTelefone('1',_cpf,telefone);
        cout << endl << endl;

        cout << "Telefone alterado com sucesso!" << endl;
        cout << "Voltando ao Menu Atualizar Dados Pessoa..." << endl;

        system("pause");

        break;

      case '4':
        
        system("cls");

        cout << "----------------------------------------------------" << endl;
        cout << "                Sistema de Testes                   " << endl;
        cout << "              Atualizar Dados Pessoa                " << endl;
        cout << "----------------------------------------------------" << endl << endl; 
        
        cout << "Endereco atual: " << sistemaCod.getEndereco('1', _cpf) << endl; 
        cout << "Insira o Endereco desejado: ";
        cin.ignore();
        getline( cin, endereco);
        sistemaCod.atualizaEndereco('1', _cpf,endereco);
        cout << endl << endl;

        cout << "Endereco alterado com sucesso!" << endl;
        cout << "Voltando ao Menu Atualizar Dados Pessoa..." << endl;

        system("pause");

        break;

      case '8':
        atualizarAdministrador(_cpf);
        break;

      case '9':
        menu();
        break;

      case '0':
        exit(1);

    }

  }while(v == true);

}
void InterfaceSistema::menuRelatorios(){

  do{

    v = true;

    system("cls");

    cout << "----------------------------------------------------" << endl;
    cout << "            Sistema Gestão de Pessoas               " << endl;
    cout << "                 Menu Relatorios                    " << endl;
    cout << "----------------------------------------------------" << endl << endl;
    
    cout << "Insira uma opcao valida:" << endl << endl;
    
    cout << "1 - Relatorio dos Fornecedores." << endl;
    cout << "2 - Relatorio dos Empregados." << endl;
    cout << "3 - Relatorio dos Operarios." << endl;
    cout << "4 - Relatorio dos Vendedores." << endl;
    cout << "5 - Relatorio dos Administradores." << endl;
    cout << "6 - Relatorio das Pessoas." << endl << endl;
    
    cout << "8 - Voltar ao Menu de Gestao de Pessoas."<< endl;
    cout << "9 - Voltar ao Menu Principal." << endl;
    cout << "0 - Sair" << endl << endl;
    
    cin >> op;
    
    cout << endl << endl;
    
    switch(op){

      case '1':
        
        system("cls");

        cout << "----------------------------------------------------" << endl;
        cout << "            Sistema Gestão de Pessoas               " << endl;
        cout << "            Relatorio dos Fornecedores              " << endl;
        cout << "----------------------------------------------------" << endl << endl;

        sistemaCod.imprime('4');
        
        cout << "Relatorio Impresso com sucesso!" << endl;
        cout << "Voltando ao Menu Relatorios..." << endl << endl;

        system("pause");

        break;

      case '2':

        system("cls");

        cout << "----------------------------------------------------" << endl;
        cout << "            Sistema Gestão de Pessoas               " << endl;
        cout << "            Relatorio dos Empregados                " << endl;
        cout << "----------------------------------------------------" << endl << endl;

        sistemaCod.imprime('3');

        cout << "Relatorio Impresso com sucesso!" << endl;
        cout << "Voltando ao Menu Relatorios..." << endl << endl;

        system("pause");
        
        break;

      case '3':
        
        system("cls");

        cout << "----------------------------------------------------" << endl;
        cout << "            Sistema Gestão de Pessoas               " << endl;
        cout << "             Relatorio dos Operarios                " << endl;
        cout << "----------------------------------------------------" << endl << endl;

        sistemaCod.imprime('5');

        cout << "Relatorio Impresso com sucesso!" << endl;
        cout << "Voltando ao Menu Relatorios..." << endl << endl;

        system("pause");
        
        break;
      
      case '4':
        
        system("cls");

        cout << "----------------------------------------------------" << endl;
        cout << "            Sistema Gestão de Pessoas               " << endl;
        cout << "            Relatorio dos Vendedores                " << endl;
        cout << "----------------------------------------------------" << endl << endl;

        sistemaCod.imprime('6');
        
        cout << "Relatorio Impresso com sucesso!" << endl;
        cout << "Voltando ao Menu Relatorios..." << endl << endl;

        system("pause");
        
        break;
      
      case '5':
        
        system("cls");

        cout << "----------------------------------------------------" << endl;
        cout << "            Sistema Gestão de Pessoas               " << endl;
        cout << "          Relatorio dos Administradores             " << endl;
        cout << "----------------------------------------------------" << endl << endl;

        sistemaCod.imprime('2');

        cout << "Relatorio Impresso com sucesso!" << endl;
        cout << "Voltando ao Menu Relatorios..." << endl << endl;

        system("pause");
        
        break;
      
      case '6':
        
        system("cls");

        cout << "----------------------------------------------------" << endl;
        cout << "            Sistema Gestão de Pessoas               " << endl;
        cout << "              Relatorio das Pessoas                 " << endl;
        cout << "----------------------------------------------------" << endl << endl;

        sistemaCod.imprime('1');

        cout << "Relatorio Impresso com sucesso!" << endl;
        cout << "Voltando ao Menu Relatorios..." << endl << endl;

        system("pause");
        
        break;

      case '8':
        sistema();
        break;

      case '9':
        menu();

      case '0':
        exit(1);
    }

  }while(v == true);


}

#pragma endregion  //--------------------------------------------