#ifndef CLIENTE_H
#define CLIENTE_H
#include "carro.h"
#include "pessoa.h"
#include <vector>
#include <string>

class Cliente : public Pessoa {
private:
  std::vector<Carro> _vec;
  unsigned long _telefone;
public:
  Cliente(
    std::string nome,
    unsigned long cpf,
    std::vector<Carro> vec,
    unsigned long telefone
  );
  
  unsigned long get_telefone();
  
};
void add_carro_list(Carro carro);


#endif
