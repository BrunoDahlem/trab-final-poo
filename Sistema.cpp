#include "Sistema.hpp"

Sistema::Sistema() {
}
#pragma region Metodos_Criacao
//Metodos para criar e alocar Pessoas(qualquer) no vetor 
void Sistema::criaPessoa(string _nome,string _cpf, string _telefone, string _endereco){
  pessoa.push_back(Pessoa(_nome, _cpf,_telefone,_endereco));
}
void Sistema::criaAdministrador(string _nome,string _cpf, string _telefone, string _endereco,int _codSetor,double _salarioBase,double _ajudaDeCusto){
  administrador.push_back(Administrador(_nome, _cpf,_telefone,_endereco,_codSetor,_salarioBase,_ajudaDeCusto));
}
void Sistema::criaEmpregado(string _nome,string _cpf, string _telefone, string _endereco,int _codSetor,double _salarioBase){
  empregado.push_back(Empregado(_nome, _cpf,_telefone,_endereco,_codSetor,_salarioBase));
}
void Sistema::criaFornecedor(string _nome,string _cpf, string _telefone, string _endereco,double _valorCredito, double _valorDivida){
  fornecedor.push_back(Fornecedor(_nome, _cpf,_telefone,_endereco,_valorCredito, _valorDivida));
}
void Sistema::criaOperario(string _nome,string _cpf, string _telefone, string _endereco,int _codSetor,double _salarioBase,double _valorProducao){
  operario.push_back(Operario(_nome, _cpf,_telefone,_endereco,_codSetor,_salarioBase,_valorProducao));
}
void Sistema::criaVendedor(string _nome,string _cpf, string _telefone, string _endereco,int _codSetor,double _salarioBase,double _valorVendas){
  vendedor.push_back(Vendedor(_nome, _cpf,_telefone,_endereco,_codSetor,_salarioBase,_valorVendas));
}
#pragma endregion

#pragma region Metodos_Atualizacao
//Metodos para setar as infos das Pessoas
void Sistema::atualizaNome(char att, string _cpf, string _nome){
  switch(att){
    case '1':
      for(i=0;i < pessoa.size() ;i++){
        if(_cpf == pessoa[i].getCPF()){
          pessoa[i].setNome(_nome);
        }
      }
      break;
    case '2':
      for(i=0;i < administrador.size() ;i++){
          if(_cpf == administrador[i].getCPF()){
            administrador[i].setNome(_nome);
          }
        }
      break;
    case '3':
      for(i=0;i < empregado.size() ;i++){
          if(_cpf == empregado[i].getCPF()){
            empregado[i].setNome(_nome);
          }
        }
      break;
    case '4':
      for(i=0;i < fornecedor.size() ;i++){
          if(_cpf == fornecedor[i].getCPF()){
            fornecedor[i].setNome(_nome);
          }
        }
      break;
    case '5':
      for(i=0;i < operario.size() ;i++){
          if(_cpf == operario[i].getCPF()){
            operario[i].setNome(_nome);
          }
        }
      break;
    case '6':
      for(i=0;i < vendedor.size() ;i++){
          if(_cpf == vendedor[i].getCPF()){
            vendedor[i].setNome(_nome);
          }
        }
      break;
  }
}
void Sistema::atualizaCPF(char att,string _cpf, string _cpfM){
  switch(att){
    case '1':
      for(i=0;i < pessoa.size() ;i++){
        if(_cpf == pessoa[i].getCPF()){
          pessoa[i].setCPF(_cpfM);
        }
      }
      break;
    case '2':
      for(i=0;i < administrador.size() ;i++){
          if(_cpf == administrador[i].getCPF()){
            administrador[i].setCPF(_cpfM);
          }
        }
      break;
    case '3':
      for(i=0;i < empregado.size() ;i++){
          if(_cpf == empregado[i].getCPF()){
            empregado[i].setCPF(_cpfM);
          }
        }
      break;
    case '4':
      for(i=0;i < fornecedor.size() ;i++){
          if(_cpf == fornecedor[i].getCPF()){
            fornecedor[i].setCPF(_cpfM);
          }
        }
      break;
    case '5':
      for(i=0;i < operario.size() ;i++){
          if(_cpf == operario[i].getCPF()){
            operario[i].setCPF(_cpfM);
          }
        }
      break;
    case '6':
      for(i=0;i < vendedor.size() ;i++){
          if(_cpf == vendedor[i].getCPF()){
            vendedor[i].setCPF(_cpfM);
          }
        }
      break;
  }
}
void Sistema::atualizaTelefone(char att,string _cpf, string _telefone){
  switch(att){
    case '1':
      for(i=0;i < pessoa.size() ;i++){
        if(_cpf == pessoa[i].getCPF()){
          pessoa[i].setTelefone(_telefone);
        }
      }
      break;
    case '2':
      for(i=0;i < administrador.size() ;i++){
          if(_cpf == administrador[i].getCPF()){
            administrador[i].setTelefone(_telefone);
          }
        }
      break;
    case '3':
      for(i=0;i < empregado.size() ;i++){
          if(_cpf == empregado[i].getCPF()){
            empregado[i].setTelefone(_telefone);
          }
        }
      break;
    case '4':
      for(i=0;i < fornecedor.size() ;i++){
          if(_cpf == fornecedor[i].getCPF()){
            fornecedor[i].setTelefone(_telefone);
          }
        }
      break;
    case '5':
      for(i=0;i < operario.size() ;i++){
          if(_cpf == operario[i].getCPF()){
            operario[i].setTelefone(_telefone);
          }
        }
      break;
    case '6':
      for(i=0;i < vendedor.size() ;i++){
          if(_cpf == vendedor[i].getCPF()){
            vendedor[i].setTelefone(_telefone);
          }
        }
      break;
  }
}
void Sistema::atualizaEndereco(char att,string _cpf, string _endereco){
  switch(att){
    case '1':
      for(i=0;i < pessoa.size() ;i++){
        if(_cpf == pessoa[i].getCPF()){
          pessoa[i].setEndereco(_endereco);
        }
      }
      break;
    case '2':
      for(i=0;i < administrador.size() ;i++){
          if(_cpf == administrador[i].getCPF()){
            administrador[i].setEndereco(_endereco);
          }
        }
      break;
    case '3':
      for(i=0;i < empregado.size() ;i++){
          if(_cpf == empregado[i].getCPF()){
            empregado[i].setEndereco(_endereco);
          }
        }
      break;
    case '4':
      for(i=0;i < fornecedor.size() ;i++){
          if(_cpf == fornecedor[i].getCPF()){
            fornecedor[i].setEndereco(_endereco);
          }
        }
      break;
    case '5':
      for(i=0;i < operario.size() ;i++){
          if(_cpf == operario[i].getCPF()){
            operario[i].setEndereco(_endereco);
          }
        }
      break;
    case '6':
      for(i=0;i < vendedor.size() ;i++){
          if(_cpf == vendedor[i].getCPF()){
            vendedor[i].setEndereco(_endereco);
          }
        }
      break;
  }
}
void Sistema::atualizaCodSetor(char att,string _cpf, int _codSetor){
  switch(att){
    case '1':
      for(i=0;i < administrador.size() ;i++){
          if(_cpf == administrador[i].getCPF()){
            administrador[i].setCodSetor(_codSetor);
          }
        }
      break;
    case '2':
      for(i=0;i < empregado.size() ;i++){
          if(_cpf == empregado[i].getCPF()){
            empregado[i].setCodSetor(_codSetor);
          }
        }
      break;
    case '3':
      for(i=0;i < operario.size() ;i++){
          if(_cpf == operario[i].getCPF()){
            operario[i].setCodSetor(_codSetor);
          }
        }
      break;
    case '4':
      for(i=0;i < vendedor.size() ;i++){
          if(_cpf == vendedor[i].getCPF()){
            vendedor[i].setCodSetor(_codSetor);
          }
        }
      break;
  }
}
void Sistema::atualizaSalarioBase(char att,string _cpf, double _salarioBase){
  switch(att){
    case '1':
      for(i=0;i < administrador.size() ;i++){
          if(_cpf == administrador[i].getCPF()){
            administrador[i].setSalarioBase(_salarioBase);
          }
        }
      break;
    case '2':
      for(i=0;i < empregado.size() ;i++){
          if(_cpf == empregado[i].getCPF()){
            empregado[i].setSalarioBase(_salarioBase);
          }
        }
      break;
    case '3':
      for(i=0;i < operario.size() ;i++){
          if(_cpf == operario[i].getCPF()){
            operario[i].setSalarioBase(_salarioBase);
          }
        }
      break;
    case '4':
      for(i=0;i < vendedor.size() ;i++){
          if(_cpf == vendedor[i].getCPF()){
            vendedor[i].setSalarioBase(_salarioBase);
          }
        }
      break;
  }
}
void Sistema::atualizaAjudaDeCusto(string _cpf, double _ajudaDeCusto){
  for(i=0;i < administrador.size() ;i++){
      if(_cpf == administrador[i].getCPF()){
        administrador[i].setAjudaDeCusto(_ajudaDeCusto);
      }
    }
}
void Sistema::atualizaValorProduto(char att,string _cpf, double _valorProduto){
  switch(att){
    case '1':
      for(i=0;i < operario.size() ;i++){
          if(_cpf == operario[i].getCPF()){
            operario[i].setValorProducao(_valorProduto);
          }
        }
      break;
    case '2':
      for(i=0;i < vendedor.size() ;i++){
          if(_cpf == vendedor[i].getCPF()){
            vendedor[i].setValorVendas(_valorProduto);
          }
        }
      break;
  }
}
void Sistema::atualizaValorCredito(string _cpf, double _valorCredito){
  for(i=0;i < fornecedor.size() ;i++){
      if(_cpf == fornecedor[i].getCPF()){
        fornecedor[i].setValorCredito(_valorCredito);
      }
    }
}
void Sistema::atualizaValorDivida(string _cpf, double _valorDivida){
  for(i=0;i < fornecedor.size() ;i++){
      if(_cpf == fornecedor[i].getCPF()){
        fornecedor[i].setValorDivida(_valorDivida);
      }
    }
}
#pragma endregion

#pragma region Metodos_gets
string Sistema::getNome(char att, string _cpf){
  string resultado;
  switch(att){
    case '1':
      for(i=0;i < pessoa.size() ;i++){
        if(_cpf == pessoa[i].getCPF()){
          resultado = pessoa[i].getNome();
        }
      }
      break;
    case '2':
      for(i=0;i < administrador.size() ;i++){
          if(_cpf == administrador[i].getCPF()){
            resultado = administrador[i].getNome();
          }
        }
      break;
    case '3':
      for(i=0;i < empregado.size() ;i++){
          if(_cpf == empregado[i].getCPF()){
            resultado = empregado[i].getNome();
          }
        }
      break;
    case '4':
      for(i=0;i < fornecedor.size() ;i++){
          if(_cpf == fornecedor[i].getCPF()){
            resultado = fornecedor[i].getNome();
          }
        }
      break;
    case '5':
      for(i=0;i < operario.size() ;i++){
          if(_cpf == operario[i].getCPF()){
           resultado = operario[i].getNome();
          }
        }
      break;
    case '6':
      for(i=0;i < vendedor.size() ;i++){
          if(_cpf == vendedor[i].getCPF()){
           resultado = vendedor[i].getNome();
          }
        }
      break;
  }
  return resultado;
}
string Sistema::getCPF(char att, string _cpf){
  string resultado;
  switch(att){
    case '1':
      for(i=0;i < pessoa.size() ;i++){
        if(_cpf == pessoa[i].getCPF()){
         resultado = pessoa[i].getCPF();
        }
      }
      break;
    case '2':
      for(i=0;i < administrador.size() ;i++){
          if(_cpf == administrador[i].getCPF()){
           resultado = administrador[i].getCPF();
          }
        }
      break;
    case '3':
      for(i=0;i < empregado.size() ;i++){
          if(_cpf == empregado[i].getCPF()){
            resultado = empregado[i].getCPF();
          }
        }
      break;
    case '4':
      for(i=0;i < fornecedor.size() ;i++){
          if(_cpf == fornecedor[i].getCPF()){
            resultado = fornecedor[i].getCPF();
          }
        }
      break;
    case '5':
      for(i=0;i < operario.size() ;i++){
          if(_cpf == operario[i].getCPF()){
            resultado = operario[i].getCPF();
          }
        }
      break;
    case '6':
      for(i=0;i < vendedor.size() ;i++){
          if(_cpf == vendedor[i].getCPF()){
           resultado =  vendedor[i].getCPF();
          }
        }
      break;
  }
  return resultado;
}
string Sistema::getTelefone(char att, string _cpf){
  string resultado;
  switch(att){
    case '1':
      for(i=0;i < pessoa.size() ;i++){
        if(_cpf == pessoa[i].getCPF()){
         resultado = pessoa[i].getTelefone();
        }
      }
      break;
    case '2':
      for(i=0;i < administrador.size() ;i++){
          if(_cpf == administrador[i].getCPF()){
           resultado = administrador[i].getTelefone();
          }
        }
      break;
    case '3':
      for(i=0;i < empregado.size() ;i++){
          if(_cpf == empregado[i].getCPF()){
           resultado = empregado[i].getTelefone();
          }
        }
      break;
    case '4':
      for(i=0;i < fornecedor.size() ;i++){
          if(_cpf == fornecedor[i].getCPF()){
           resultado = fornecedor[i].getTelefone();
          }
        }
      break;
    case '5':
      for(i=0;i < operario.size() ;i++){
          if(_cpf == operario[i].getCPF()){
           resultado = operario[i].getTelefone();
          }
        }
      break;
    case '6':
      for(i=0;i < vendedor.size() ;i++){
          if(_cpf == vendedor[i].getCPF()){
           resultado = vendedor[i].getTelefone();
          }
        }
      break;
  }
  return resultado;
}
string Sistema::getEndereco(char att, string _cpf){
  string resultado;
  switch(att){
    case '1':
      for(i=0;i < pessoa.size() ;i++){
        if(_cpf == pessoa[i].getCPF()){
         resultado = pessoa[i].getEndereco();
        }
      }
      break;
    case '2':
      for(i=0;i < administrador.size() ;i++){
          if(_cpf == administrador[i].getCPF()){
           resultado = administrador[i].getEndereco();
          }
        }
      break;
    case '3':
      for(i=0;i < empregado.size() ;i++){
          if(_cpf == empregado[i].getCPF()){
           resultado = empregado[i].getEndereco();
          }
        }
      break;
    case '4':
      for(i=0;i < fornecedor.size() ;i++){
          if(_cpf == fornecedor[i].getCPF()){
           resultado = fornecedor[i].getEndereco();
          }
        }
      break;
    case '5':
      for(i=0;i < operario.size() ;i++){
          if(_cpf == operario[i].getCPF()){
           resultado = operario[i].getEndereco();
          }
        }
      break;
    case '6':
      for(i=0;i < vendedor.size() ;i++){
          if(_cpf == vendedor[i].getCPF()){
           resultado = vendedor[i].getEndereco();
          }
        }
      break;
  }
  return resultado;
}
int Sistema::getCodSetor(char att,string _cpf){
  int resultado;
  switch(att){
    case '1':
      for(i=0;i < administrador.size() ;i++){
          if(_cpf == administrador[i].getCPF()){
           resultado = administrador[i].getCodSetor();
          }
        }
      break;
    case '2':
      for(i=0;i < empregado.size() ;i++){
          if(_cpf == empregado[i].getCPF()){
           resultado = empregado[i].getCodSetor();
          }
        }
      break;
    case '3':
      for(i=0;i < operario.size() ;i++){
          if(_cpf == operario[i].getCPF()){
           resultado = operario[i].getCodSetor();
          }
        }
      break;
    case '4':
      for(i=0;i < vendedor.size() ;i++){
          if(_cpf == vendedor[i].getCPF()){
           resultado = vendedor[i].getCodSetor();
          }
        }
      break;
  }
  return resultado;
}
double Sistema::getSalarioBase(char att,string _cpf){
double resultado;
switch(att){
    case '1':
      for(i=0;i < administrador.size() ;i++){
          if(_cpf == administrador[i].getCPF()){
           resultado = administrador[i].getSalarioBase();
          }
        }
      break;
    case '2':
      for(i=0;i < empregado.size() ;i++){
          if(_cpf == empregado[i].getCPF()){
           resultado = empregado[i].getSalarioBase();
          }
        }
      break;
    case '3':
      for(i=0;i < operario.size() ;i++){
          if(_cpf == operario[i].getCPF()){
           resultado = operario[i].getSalarioBase();
          }
        }
      break;
    case '4':
      for(i=0;i < vendedor.size() ;i++){
          if(_cpf == vendedor[i].getCPF()){
          resultado = vendedor[i].getSalarioBase();
          }
        }
      break;
  }
  return resultado;
}
double Sistema::getAjudaDeCusto(string _cpf){
  double resultado;
  for(i=0;i < administrador.size() ;i++){
    if(_cpf == administrador[i].getCPF()){
      resultado = administrador[i].getAjudaDeCusto();
    }
  }
  return resultado;
}
double Sistema::getValorProduto(char att,string _cpf){
  double resultado;
  switch(att){
    case '1':
      for(i=0;i < operario.size() ;i++){
          if(_cpf == operario[i].getCPF()){
           resultado = operario[i].getValorProducao();
          }
        }
      break;
    case '2':
      for(i=0;i < vendedor.size() ;i++){
          if(_cpf == vendedor[i].getCPF()){
           resultado = vendedor[i].getValorVendas();
          }
        }
      break;
  }
  return resultado;
}
double Sistema::getValorCredito(string _cpf){
  double resultado;
  for(i=0;i < fornecedor.size() ;i++){
    if(_cpf == fornecedor[i].getCPF()){
      resultado = fornecedor[i].getValorCredito();
    }
  }
  return resultado;
}
double Sistema::getValorDivida(string _cpf){
  double resultado;
  for(i=0;i < fornecedor.size() ;i++){
    if(_cpf == fornecedor[i].getCPF()){
      resultado = fornecedor[i].getValorDivida();
    }
  }
  return resultado;
}
#pragma endregion
void Sistema::imprime(char _tipo){
  switch(_tipo){

    case '1':
      for(i=0;i < pessoa.size() ;i++){
        cout << i+1 << " ";
        pessoa[i].imprime();
      }
      break;
    case '2':
      for(i=0;i < administrador.size() ;i++){
          cout << i+1 << " ";
          administrador[i].imprime();
        }
        break;
    case '3':
      for(i=0;i < empregado.size() ;i++){
          cout << i+1 << " ";
          empregado[i].imprime();
        }
        break;
    case '4':
      for(i=0;i < fornecedor.size() ;i++){
          cout << i+1 << " ";
          fornecedor[i].imprime();
        }
        break;
    case '5':
      for(i=0;i < operario.size() ;i++){
          cout << i+1 << " ";
          operario[i].imprime();
        }
        break;
    case '6':
      for(i=0;i < vendedor.size() ;i++){
          cout << i+1 << " ";
          vendedor[i].imprime();
        }
        break;
  }
}