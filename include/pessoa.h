#ifndef PESSOA_H
#define PESSOA_H

#include <string>
class Pessoa {

  private:
    const std::string _nome;
    const unsigned long _cpf;
  public:
    Pessoa(
    std::string nome,
    unsigned long cpf
   );
    std::string get_nome() const;
    unsigned long get_cpf() const;
};

#endif
