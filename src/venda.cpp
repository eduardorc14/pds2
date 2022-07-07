#include"venda.h"

/**
*@brief Construtor Class Venda
*@author Eduardo
**/

Venda::Venda(
  Cliente cliente,
  Carro carro, 
  Servico servico,
  Funcionario funcionario,
  std::string data
){
    _data = data;
}

/**
*@brief Retorna a data que foi efetuada a Venda
*@return string
**/

std::string Venda::get_data(){
  return _data;
}

/**
*@brief Adiciona uma nova Venda
*@param Venda venda
**/

void Venda:: adicionar_venda(Venda venda){
  _venda.push_back(venda);
}

/**
*@brief Determina o valor da venda de acordo com os valores dos servicos realizados 
*@param Servico servico
*@return double
**/

double Venda::valor_da_venda(Servico servico){
  return servico.get_precoServico(); 
}

/**
*@brief Emite a Nota Fiscal
**/

void Venda::imprime(){
  
}


  
