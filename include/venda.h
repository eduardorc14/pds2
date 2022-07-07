#ifndef VENDA_H
#define VENDA_H

#include<vector>

#include "cliente.h"
#include "servico.h"
#include "funcionario.h"
#include "carro.h"

/**
*@brief Define os atributos da Venda
*@author Eduardo
**/

class Venda {
   
  private:
    std::string _data;
    //histórico de vendas
    std::vector<Venda> _venda;
   
  public:
   
    /**
    *@brief Construtor Class Venda
    *@param cliente
    *@param carro
    *@param servico
    *@param funcionario
    *@param data
    **/
   
    Venda(
      Cliente cliente,
      Carro carro, 
      Servico servico,
      Funcionario funcionario,
      std::string data
    );
   
   /**
   *@brief Retorna a data que foi efetuada a Venda
   *@return string
   **/
   
    string get_data();
   
    /**
    *@brief Determina o valor da Venda de acordo com os serviocs realizados
    *@param Servico servico
    **/
   
   double valor_da_venda(Servico servico);
   
   /**
   *@brief Adiciona uma nova Venda
   *@param Venda venda
   **/
   
    void adicionar_venda(Venda venda);
};
  #endif
