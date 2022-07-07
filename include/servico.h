#ifndef SERVICO_H
#define SERVICO_H

#include <string>

using namespace std;

/**
*@brief Define os atributos do Servico
*@author Ana Carolina
**/

class Servico {

private:
  string _tipo;
  double _precoServico;

public:
  
  /**
  *@brief Construtor Class Servico
  *@param tipo
  *@param precoServico
  **/
  
  Servico(string tipo, double precoServico);

  /**
  *@brief Retorna o tipo do Servico
  *@return string
  **/
  
  string get_tipo();
  
  /**
  *@brief Retorna o preco do Servico
  *@return double
  **/
  
  double get_precoServico();
  
};

#endif
