#ifndef CARRO_H
#define CARRO_H

#include "cliente.h"
#include "servico.h"

#include <string>
#include <map>
/*map: quando necessário para
construir tabelas.
*/

class carro {
  private:
    std::map<int, std::string> _carmontadora;

  public:
    Carro(
      std::map carmontadora,
      const unsigned long ordem_de_servico,
    );

    std::string get_montadora();
    unsigned long get_ordem_de_servico();
}

#endif
