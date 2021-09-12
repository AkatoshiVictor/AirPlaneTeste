#include <iostream>
#include <locale>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

#include "Servicos.cpp"
#include "Onibus.cpp"

int main(){

    /*TESTANDO OS MÉTODOS SET E GET DA CLASSE AVIÃO*/
    float taxa_classe1, taxa_classe2;
    int origem, destino;

    //esses valores das taxas só poderão serem alterados por um funcionário
    cout<<"Digite a taxa para a primeira classe: ";
    cin>>taxa_classe1;

    cout<<"\nDigite a taxa para a classe executiva: ";
    cin>>taxa_classe2;

    //já o cliente vai inserir a otigem de onde quer partir e o destino de sua viagem
    //que são valores inteiros pois facilita a nossa lógica
    cout<<"Digite a origem: ";
    cin>>origem;
    cout<<"Digite o destino: ";
    cin>>destino;


    /*TODOS OS ATRIBUTOS QUE O CONSTRUTOR RECEBE 0 OU ALGO VAZIO " ",
        SERÃO ATRIBUTOS QUE NEM O USUÁRIO NÃO VAI INSERIR*/
    Onibus O(0, origem, destino, 0, " ", " ", " ", taxa_classe1, taxa_classe2);

    O.imprime_dados_3();



    return 0;
}

