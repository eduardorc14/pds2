#include <iostream>
#include <vector>
#include <string>
#include "carro.h"
#include "pessoa.h"
#include "cliente.h"
#include "funcionario.h"
#include "servico.h"


using namespace std;


void cadastro_x(){
    string nome;
    unsigned long cpf;
    double salario;
    unsigned long telefone;
    string marca;
    string modelo;
    string placa;
    string tipo;
    double precoServico;

    int a=0;
    while(a==0){
    cout <<"CADASTRAR:" << endl;
    cout <<"1- Cliente" << endl;
    cout <<"2- Funcionario" << endl;
    cout <<"3- Servico" << endl;
    cout <<"4- Voltar"<<endl;
    cout <<"Digite uma das opcoes:" << endl;
  
    int numx=0;
    cin >> numx;

    if(numx==1){
        cout <<"Digite o nome:" << endl;
        cin>>nome;
        cout <<"Digite o cpf:" << endl;
        cin>>cpf;
        cout <<"Digite o telefone:" << endl;
        cin>>telefone;
        cout <<"Dados do carro" << endl;
        cout <<"Digite a marca:" << endl;
        cin>>marca;
        cout <<"Digite o modelo:" << endl;
        cin>>modelo;
        cout <<"Digite a placa:" << endl;
        cin>>placa;
        Carro carro(marca,modelo,placa);
        Cliente cliente(nome,cpf,telefone,carro);
        cout <<"Cliente cadastrado com sucesso:" << endl;
        a=1;
        break;
    }

    if(numx==2){
        cout <<"Digite o nome:" << endl;
        cin>>nome;
        cout <<"Digite o cpf:" << endl;
        cin>>cpf;
        cout <<"Digite o salario:" << endl;
        cin>>salario;
        Funcionario funcionario(nome,cpf,salario);
        cout <<"Funcionario cadastrado com sucesso:"<< endl;
        a=1;
        break;
    }

    if(numx==4){
        cout <<"Digite o tipo de servico:" << endl;
        cin>>tipo;
        cout <<"Digite o preco:" << endl;
        cin>>precoServico;
        Servico servico(tipo,precoServico);
        cout <<"Servico cadastrado com sucesso:" << endl << endl;
        a=1;
        break;
    }

    if(numx==5){
        return;
    }

    else{
        cout << "Digite um valor valido!" << endl;
    }
    }
}

void consulta_x(){
    string nome;
    string telefone;
    string *cpf;
    string x;
    
    int a=0;
    while(a==0){
    cout <<"CONSULTAR:" << endl;
    cout <<"1- Cliente" << endl;
    cout <<"2- Funcionario" << endl;
    cout <<"3- Carro" << endl;
    cout <<"4- Servico" << endl;
    cout <<"5- Voltar"<<endl;
    cout <<"Digite uma das opcoes:" << endl;
  
    int numx=0;
    cin >> numx;

    if(numx==1){
        cout <<"Digite o CPF do cliente:" << endl;
        cin>>x;
        cpf = &x;
        
        cout<<"CPF: " << *cpf <<endl;
         
        a=1;
        break;
    }
}
  }

int main(){
    int x=0;
    int y=0;

    while(x==0){
    y=0;
    while(y==0){
    cout<<"Bem vindo ao sistema de gerenciamento de servicos automotivos!"<<endl;
    cout<<"MENU:"<<endl;
    cout<<"1- Cadastro de servicos, clientes, funcionarios ou carros."<<endl;
    cout<<"2) Consultar servicos, clientes, funcionarios ou carros."<<endl;
    cout<<"3) Atualizar servicos, clientes, funcionarios ou carros."<<endl;
    cout<<"4) Efetuar venda"<<endl;
    cout<<"5) Sair"<<endl;
    

    cout<<"Digite uma das opcoes:"<<endl;

    int num = 0;
    cin >> num;

    if(num==1){
    cadastro_x();
    y=1;
    break;
    }

    if(num==2){
    consulta_x();
    y=1;
    break;
    }

    if(num==3){
    
    y=1;
    break;
    }

    if(num==4){
    
    y=1;
    break;
    }

    if(num==5){
    return 0;
    }
    
    else{
    cout << "Digite um valor valido!" << endl; 
    }

    }    
}
    return 0;
}
