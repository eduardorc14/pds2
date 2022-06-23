#ifndef SERVICO_H
#define SERVICO_H

#include <string>

using namespace std;

class Servico {

private:
  string _tipo;
  double _precoServico;

public:
  Servico(string tipo, double precoServico);

  string get_tipo();
  double get_precoServico();
  
};

#endif
