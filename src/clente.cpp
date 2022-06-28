#include "cliente.h"

Cliente::Cliente(
  std::string nome,
  unsigned long cpf,
  double salario
): Pessoa(nome, cpf),
   _vec(vec) {};

void Cliente::add_carro_list(Carro carro){
    _vec.push_back(carro);
};
