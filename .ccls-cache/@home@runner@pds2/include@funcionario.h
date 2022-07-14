#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include "pessoa.h"

/**
*@brief Define os atributos do Funcionario
*@author Gabriel
**/

class Funcionario : public Pessoa {
  
private:
  double _salario;
  
public:
  
  /**
  *@brief Construtor Class Funcionario
  *@param nome
  *@param cpf
  *@param salario
  **/
  
  Funcionario(
    std::string nome,
    std::string cpf,
    double salario
  );
  
  /**
  *@brief Retorna o salario do Funcionario
  *@return double
  **/
  
  double get_salario();
};

#endif
