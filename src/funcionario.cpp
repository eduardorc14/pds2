#include "funcionario.h"

/**
*@brief Construtor Class Funcionarios
*@author Gabriel
**/

Funcionario::Funcionario(
  std::string nome,
  unsigned long cpf,
  double salario
): Pessoa(nome, cpf),
   _salario(salario) {};

/**
*@brief Retorna o salario do Funcionario
*@return double
**/

double Funcionario::get_salario() {
  return this->_salario;
}
