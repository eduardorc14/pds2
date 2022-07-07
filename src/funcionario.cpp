#include "funcionarios.h"

/**
*@brief Construtor Class Funcionarios
*@author Gabriel
**/

Funcionarios::Funcionarios(
  std::string nome,
  unsigned long cpf,
  double salario
): Pessoa(nome, cpf),
   _salario(salario) {};

/**
*@brief Retorna o salario do Funcionario
*@return double
**/

double Funcionarios::get_salario() {
  return _salario;
}
