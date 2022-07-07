#include "carro.h"

using namespace std;

/**
*@brief Construtor Class Carro
*
**/

Carro::Carro(
  string marca,
  string modelo,
  string placa
): _marca(marca),
   _modelo(modelo),
   _placa(placa) {
}

/**
*@brief Retorna a marca do Carro
*@return string
**/

string Carro::get_marca(){
  return _marca;
}

/**
*@brief Retorna o modelo do Carro
*@return string
**/

string Carro::get_modelo(){
  return _modelo;
}

/**
*@brief Retorna a placa do carro
*@return string
**/

string Carro::get_placa(){
  return _placa;
}

