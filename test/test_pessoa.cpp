#include "doctest.h"
#include "pessoa.h"

/**
*@brief Teste 
*@author Eduardo
**/

TEST_CASE("Testando construtor Pessoa"){
 Pessoa pessoa("Nilson", "14785714988");
    CHECK_EQ(pessoa.get_nome(), "Nilson");
    CHECK_EQ(pessoa.get_cpf(), "14785714988");
}