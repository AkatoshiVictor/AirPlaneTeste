#include <iostream>
#include <locale>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

#include "Usuario.cpp"
#include "Cliente.cpp"

int main(){

    setlocale(LC_ALL, "");

    /*TESTANDO OS MÉTODOS SET E GET DA CLASSE AVIÃO*/
    string email;
    string senha;
    string nome_completo;
    string data_nascimento;
    string endereco;
    string telefone;
    string telefone_familiar;
    string documento;

    string seguro;
    string acompanhante;
    string necessidades_especiais;
    string metodo_de_pagamento;


    //esses valores das taxas só poderão serem alterados por um funcionário
    cout<<"Digite o e-mail: ";
    cin>>email;

    cout<<"\nDigite a senha: ";
    cin>>senha;

    cout<<"\nDigite o nome completo: ";
    cin.ignore();
    getline(cin, nome_completo);

    cout<<"\nDigite a data de nascimento: ";
    cin>>data_nascimento;

    cout<<"\nDigite o endereço: ";
    cin.ignore();
    getline(cin, endereco);

    cout<<"\nDigite o telefone: ";
    cin>>telefone;

    cout<<"\nDigite o telefone familiar: ";
    cin>>telefone_familiar;

    cout<<"\nNúmero do documento: ";
    cin>>documento;

    cout<<"\nPossui seguro: ";
    cin>>seguro;

    cout<<"\nPossui acompanhante: ";
    cin>>acompanhante;

    cout<<"\nPussui necessidades especiais: ";
    cin>>necessidades_especiais;

    cout<<"\nDigite o método de pagamento: ";
    cin>>metodo_de_pagamento;

    /*TODOS OS ATRIBUTOS QUE O CONSTRUTOR RECEBE 0 OU ALGO VAZIO " ",
        SERÃO ATRIBUTOS QUE NEM O USUÁRIO NÃO VAI INSERIR*/
   Cliente C(seguro, acompanhante, 0, necessidades_especiais, metodo_de_pagamento,email, senha, nome_completo, data_nascimento, endereco, telefone,
                    telefone_familiar, documento);

    C.imprime_dados_2();



    return 0;
}


