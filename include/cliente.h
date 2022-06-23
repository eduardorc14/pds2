#ifndef CLIENTE_H
#define CLIENTE_H

#include "pessoa.h"
#include "carro.h"
#include <vector>

class Cliente : public Pessoa {
private:
  std::vector<Carro> _vec;
public:
  Cliente(
    std::string nome,
    unsigned long cpf,
    std::vector vec
  );
};

#endif
