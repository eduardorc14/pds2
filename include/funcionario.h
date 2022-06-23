#ifndef FUNCIONARIOS_H
#define FUNCIONARIOS_H

#include "pessoa.h"

class Funcionarios : public Pessoa {
private:
  double _salario;
public:
  Funcionarios(
    std::string nome,
    unsigned long cpf,
    double salario
  );
  double get_salario();
};

#endif
