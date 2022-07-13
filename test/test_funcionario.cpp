#include "doctest.h"
#include "funcionario.h"

/**
*@brief Teste 
*@author Ana Carolina
**/
TEST_CASE("Testando construtor Funcionario"){
 Funcionario funcionario("Eduardo", "12548714988", "1200.00");
    CHECK_EQ(funcionario.get_nome(), "Eduardo");
    CHECK_EQ(funcionario.get_cpf(), "12548714988");
    CHECK_EQ(funcionario.get_salario(), "1200.00");   
}