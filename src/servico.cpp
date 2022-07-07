#include "servico.h"

using namespace std;

/**
* @brief Construtor Class Servico
* @author Ana Carolina
**/

Servico::Servico(
  string tipo,
  double precoServico
): _tipo(tipo), _precoServico(precoServico) {};

/**
*@brief Retornar o tipo de servico
*@return string
**/

string Servico::get_tipo() {
  return _tipo;
}

/**
*@brief Retornar o preco do servico
*@return double
**/

double Servico::get_precoServico() {
  return _precoServico;
}
