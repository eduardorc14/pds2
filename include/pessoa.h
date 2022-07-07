#ifndef PESSOA_H
#define PESSOA_H

#include <string>

/**
*@brief Define os atributos de uma Pessoa
*@author Gabriel
**/

class Pessoa {

  private:
    const std::string _nome;
    const unsigned long _cpf;
  
  public:
  
  /**
  *@brief Construtor Class Pessoa
  *@param nome
  *@param cpf
  **/
  
    Pessoa(
    std::string nome,
    unsigned long cpf
   );
  
  /**
  *@brief Retorna o nome da Pessoa
  *@return string
  **/
  
    std::string get_nome() const;
  
  /**
  *@brief Retorna o cpf da Pessoa
  *@return unsigned long
  **/
  
    unsigned long get_cpf() const;
};

#endif
