# Sistema de Gerenciamento
O projeto, requisitado pela disciplina de Programação de Desenvolvimento de Software II, foi desenvolvido para o gerenciamento de um Centro de Serviços Automotivos.

## Alunos
- Ana Carolina Nascimento de Castro Pessamilio _ 2020026753
- Gabriel Henrique Silva Maia _ 2020103197
- Eduardo Rodrigues Cordeiro _ 2019103863
- Nilson Silvério Ferreira da Cruz Filho _ 2020100058

## User Stories
##### Controle de serviços prestados
Como gerenciador, quero cadastrar os serviços que a empresa pode oferecer e especificar seus valores unitários. Necessito, também, de consultar, atualizar e deletar cada serviço ou seus valores.

##### Controle de clientes cadastrados
Como gerenciador, quero registrar os clientes a partir do seu nome, CPF, telefone e uma lista com o(s) carro(s) vinculado(s) ao cliente. Necessito, também, de consultar, atualizar ou deletar cada cliente.

##### Controle de carros cadastrados
Como gerenciador, quero cadastrar cada carro vinculando ele ao cliente cadastrado e atribuir seu modelo, marca e placa. Necessito, também, de consultar, atualizar e deletar seus dados. 

##### Registro da prestação de serviço
Como gerenciador, quero ter o registro de cada serviço prestado, vinculando a ele a data do serviço, o cliente e seu carro, além do funcionário que realizou esse registro. Necessito, também, de consultar, atualizar ou deletar esses dados.

##### Emissão de Nota Fiscal
Como gerenciador, quero emitir nota fiscal com os dados do serviço prestado, do cliente, do seu veículo e da empresa.

##### Controle de funcionários
Como gerenciador, quero registrar os dados dos funcionários tais como nome, CPF, salário. Necessito, também, de ter o controle de registros feitos por cada funcionário, além de consultar, atualizar ou deletar seus dados.

### Como instalar o programa

- É necessário instalar em sua máquina um compilador c++, o cmake (gerador de sistema de compilação) e o git.
- Após concluída as instalações, siga os passos abaixo:

1. A partir do seu compilador c++, clone o repositório pelo comando abaixo:
   ```sh
   git clone https://github.com/anaPessamilio/pds2.git
   ```
2. Abra o diretório pelo comando abaixo:
    ```sh
    cd pds2
    ```
3. Execute o comando make:
    ```sh
    make
    ```
