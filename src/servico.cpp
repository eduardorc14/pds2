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
*@brief Retorna o tipo de Servico
*@return string
**/

string Servico::get_tipo() {
  return _tipo;
}

/**
*@brief Retorna o preco do Servico
*@return double
**/

double Servico::get_precoServico() {
  return _precoServico;
}
