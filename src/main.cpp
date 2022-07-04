#include <iostream>
#include <vector>
#include <string>
#include "carro.h"
#include "pessoa.h"
#include "cliente.h"
#include "funcionario.h"
#include "servico"


using namespace std;


void cadastro_x(){
    string nome;
    unsigned long cpf;
    double salario;
    vector <Carro> vec;
    unsigned long telefone;
     std::string marca;
    std::string modelo;
    std::string placa;
    string tipo;
    double precoServico;


    cout <<"CADASTRAR:" << endl;
    cout <<"1- Cliente" << endl;
    cout <<"2- Funcionario" << endl;
    cout <<"4- Carro" << endl;
    cout <<"5- Servico" << endl;
    cout <<"Digite uma das opcoes:" << endl;
  
    int numx = 0;
    cin >> numx;
    
    
    switch(numx){
        
        case 1:
        cout <<"Digite o nome:" << endl;
        cin>>nome;
        cout <<"Digite o cpf:" << endl;
        cin>>cpf;
        cout <<"Digite os carros:" << endl;
        cin<<vec;
        cout <<"Digite o telefone:" << endl;
        cin<<telefone;
        Cliente cliente(nome,cpf,vec,telefone);
        break;

        case 2:
        cout <<"Digite o nome:" << endl;
        cin>>nome;
        cout <<"Digite o cpf:" << endl;
        cin>>cpf;
        cout <<"Digite o salario:" << endl;
        cin<<salario;
        Funcionario funcionario(nome,cpf,salario);
        break;

        case 3:
        cout <<"Digite a marca:" << endl;
        cin>>marca;
        cout <<"Digite o modelo:" << endl;
        cin>>modelo;
        cout <<"Digite a placa:" << endl;
        cin<<placa;
        Carro Carro(marca,modelo,placa);
        break;

        case 4:
        cout <<"Digite o tipo de servico:" << endl;
        cin>>tipo;
        cout <<"Digite o preco:" << endl;
        cin>>precoServico;
        Servico servico(tipo,precoServico);

        break;

        default:
        cout << "O valor digitado não corresponde a nenhuma opcao!" << endl;

    }


}



int main(){

    cout<<"Bem vindo ao sistema de gerenciamento de servicos automotivos!"<<endl;

    cout<<"MENU:"<<endl;
    cout<<"1- Cadastro de servicos, clientes, funcionarios ou carros."<<endl;
    cout<<"3- Venda"<<endl;

    cout<<"Digite uma das opcoes:"<<endl;

    int num = 0;
    cin >> num;

    switch(num){
        case 1:
            cadastro_x();
            break;

        case 2:

            break;

        case 3:
            
            break;

        default:
            cout << "O valor digitado não corresponde a nenhuma opcao!" << endl;
    }

    return 0;
}


