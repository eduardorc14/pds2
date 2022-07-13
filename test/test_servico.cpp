#include "doctest.h"
#include "servico.h"

TEST_CASE("Testando construtor Servico"){
    Servico servico("Alinhamento", "100.00");
    CHECK_EQ(servico.get_tipo, "Alinhamento");
    CHECK_EQ(servico.get_precoServico, "100.00");
     }