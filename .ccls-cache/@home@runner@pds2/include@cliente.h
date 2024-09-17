#ifndef CLIENTE_H
#define CLIENTE_H
#include "carro.h"
#include "pessoa.h"
#include <vector>
#include <string>

/**
*@brief Define os atributos do Cliente
*@author Gabriel
**/

class Cliente : public Pessoa {
  
private:
  
  unsigned long _telefone;
  Carro _carro;
  
public:
  
  /**
  *@brief Construtor Class Cliente
  *@param nome
  *@param cpf
  *@param telefone
  *@param Carro carro
  **/
  
  Cliente(
    std::string nome,
    std::string cpf,
    unsigned long telefone,
    Carro carro
  );
  
  /**
  *@brief Retorna o telefone do Cliente
  *@return unsigned long
  **/
  
  unsigned long get_telefone();
  
  
};

#endif
