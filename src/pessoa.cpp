#include "pessoa.h"

/**
*@brief Construtor Class Pessoa
*@author Gabriel
**/

Pessoa::Pessoa(
  std::string nome,
  unsigned long cpf
): _nome(nome),
   _cpf(cpf) {
}

/**
*@brief Retorna o nome da Pessoa
*@return string
**/

std::string Pessoa::get_nome() const {
  return this->_nome;
}

/**
*@brief Retorna o cpf da Pessoa
*@return unsigned long
**/

unsigned long Pessoa::get_cpf() const {
  return this->_cpf;
}
