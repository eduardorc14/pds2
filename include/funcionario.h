#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include "pessoa.h"

class Funcionario : public Pessoa {
private:
  double _salario;
public:
  Funcionario(
    std::string nome,
    unsigned long cpf,
    double salario
  );
  double get_salario();
};

#endif
