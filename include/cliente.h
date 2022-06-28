#ifndef CLIENTE_H
#define CLIENTE_H
#include "carro.h"
#include "pessoa.h"
#include <vector>
#include <string>

class Cliente : public Pessoa {
private:
  std::vector<Carro> _vec;
public:
  Cliente(
    std::string nome,
    unsigned long cpf,
    std::vector<Carro> vec
  );
};
void add_carro_list(Carro carro);

#endif
