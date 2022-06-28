#ifndef CARRO_H
#define CARRO_H

#include <string>

class Carro{
private:
    std::string _marca;
    std::string _modelo;
    std::string _placa;

public:
  Carro(
    std::string marca,
    std::string modelo,
    std::string placa
  );
    
    std::string get_marca();
    std::string get_modelo();
    std::string get_placa();

};

#endif
