#include "funcionarios.h"

Funcionarios::Funcionarios(
  std::string nome,
  unsigned long cpf,
  double salario
): Pessoa(nome, cpf),
   _salario(salario) {};

double Funcionarios::get_salario() {
  return _salario;
}
