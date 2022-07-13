#include "doctest.h"
#include "cliente.h"
#include "carro.h"

TEST_CASE("Testando construtor Cliente"){
  Carro carro("Fiat", "Argo", "PVA1145");
    CHECK_EQ(carro.get_marca, "Fiat");
    CHECK_EQ(carro.get_modelo, "Argo");
    CHECK_EQ(carro.get_placa, "PVA1145"); 
  
  Cliente cliente("Ana", "12548756988", "031945786325");
    CHECK_EQ(cliente.get_nome, "Ana");
    CHECK_EQ(cliente.get_cpf, "12548756988");
    CHECK_EQ(cliente.get_telefone, "031945786325");   
}