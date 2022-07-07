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
  std::vector<Carro> _vec;
  unsigned long _telefone;
  
public:
  
  /**
  *@brief Construtor Class Cliente
  *@param nome
  *@param cpf
  *@param vec
  *@param telefone
  **/
  
  Cliente(
    std::string nome,
    unsigned long cpf,
    std::vector<Carro> vec,
    unsigned long telefone
  );
  
  /**
  *@brief Retorna o telefone do Cliente
  *@return unsigned long
  **/
  
  unsigned long get_telefone();
  
};

/**
*@brief Adiciona um novo Carro ao Cliente
*@param Carro carro
**/

void add_carro_list(Carro carro);


#endif
