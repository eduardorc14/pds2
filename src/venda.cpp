#include"venda.h"

std::string Venda::get_data(){
  return _data;
}

void Venda:: adicionar_venda(Venda venda){
  _venda.push_back(venda);
}

double Venda::valor_da_venda(Servico servico){
  return servico.get_precoServico(); 
}

Venda::Venda(
  Cliente cliente,
  Carro carro, 
  Servico servico,
  Funcionario funcionario,
  std::string data
){
    _data = data;
}
  
