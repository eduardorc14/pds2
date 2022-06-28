/**
    * Data da realização do serviço
    * Funcionário que realizou a venda (ou finalizou)
    * Cliente
    * Carro
    * Serviços
        * Tipo
        * Valor unitário
        * Quantidade
    * Valor total
  
**/
#ifndef VENDA_H
#define VENDA_H

#include<vector>

#include "cliente.h"
#include "servico.h"
#include "funcionario.h"
#include "carro.h"

class Venda {
  private:
    std::string _data;
    //histórico de vendas
    std::vector<Venda> _venda;
  public:
    //construindo objeto venda
    Venda(
      Cliente cliente,
      Carro carro, 
      Servico servico,
      Funcionario funcionario,
      std::string data
    );
    //obtem a data da venda
    string get_data();
    //método para calcular o valor da venda
    double valor_da_venda(Servico servico);
    //adiciona a venda ao nosso histórico
    void adicionar_venda(Venda venda);
};
#endif
