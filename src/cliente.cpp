#include "cliente.h"

/**
*@brief Construtor Class Cliente
*@author Gabriel
**/

Cliente::Cliente(
  std::string nome,
  unsigned long cpf,
  double salario
): Pessoa(nome, cpf),
   _vec(vec) {};

/**
*@brief Adiciona um novo Carro ao Cliente
*@param Carro carro
**/

void Cliente::add_carro_list(Carro carro){
    _vec.push_back(carro);
};
