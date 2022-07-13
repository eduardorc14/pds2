#include "doctest.h"
#include "carro.h"

/**
*@brief Teste 
*@author Ana Carolina
**/

TEST_CASE("Testando construtor Carro"){
    Carro carro("Fiat", "Argo", "PVA1145");
    CHECK_EQ(carro.get_marca(), "Fiat");
    CHECK_EQ(carro.get_modelo(), "Argo");
    CHECK_EQ(carro.get_placa(), "PVA1145");   
}