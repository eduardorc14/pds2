#ifndef CARRO_H
#define CARRO_H

#include <string>

/**
*@brief Define os atributos do Carro
*@author Nilson
**/

class Carro{
private:
    std::string _marca;
    std::string _modelo;
    std::string _placa;

public:
    
    /**
    *@brief Construtor Class Carro
    *@param marca
    *@param modelo
    *@param placa
    **/
    
  Carro(
    std::string marca,
    std::string modelo,
    std::string placa
  );
    
    /**
    *@brief Retorna a marca do Carro
    *@return string
    **/
    
    std::string get_marca();
    
    /**
    *@brief Retorna o modelo do Carro
    *@return string
    **/
    
    std::string get_modelo();
    
    /**
    *@brief Retorna a placa do Carro
    *@return string
    **/
    
    std::string get_placa();

};

#endif
