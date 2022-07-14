#include "funcionario.h"

/**
*@brief Construtor Class Funcionarios
*@author Gabriel
**/

Funcionario::Funcionario(
  std::string nome,
  std::string cpf,
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
