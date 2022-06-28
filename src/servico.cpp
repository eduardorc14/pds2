#include "servico.h"

using namespace std;

Servico::Servico(
  string tipo,
  double precoServico
): _tipo(tipo), _precoServico(precoServico) {};

string Servico::get_tipo() {
  return _tipo;
}

double Servico::get_precoServico() {
  return _precoServico;
}
