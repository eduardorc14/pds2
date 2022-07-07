#include "cliente.h"
#include "carro.h"

/**
*@brief Construtor Class Cliente
*@author Gabriel
**/

Cliente::Cliente(
  std::string nome,
  unsigned long cpf,
  unsigned long telefone,
  Carro carro
): Pessoa(nome, cpf),
   _telefone(telefone), _carro(carro) {};

 unsigned long Cliente::get_telefone(){
   return _telefone;
 }
