#include "Servicos.h"

Servicos::Servicos(float preco, int origem, int destino, float preco_final,
                    string dia, string partida, string chegada){

    this-> preco = preco;
    this-> origem = origem;
    this-> destino = destino;
    this-> preco_final = preco_final;
    this-> dia = dia;
    this-> partida = partida;
    this-> chegada = chegada;

}

void Servicos::set_origem(int origem){

    this-> origem = origem;
}

void Servicos::set_destino(int destino){

    this-> destino = destino;
}

float Servicos::get_preco()const{

    return preco_final;
}

int Servicos::get_origem()const{

    return origem;
}

int Servicos::get_destino()const{

    return destino;
}

float Servicos::get_preco_final()const{

    return preco_final;
}

string Servicos::get_dia()const{

    return dia;
}

string Servicos::get_partida()const{

    return partida;
}

string Servicos::get_chegada()const{

    return chegada;
}

void Servicos::imprime_dados_2(){
    cout<<"Origem: "
        <<get_origem()
        <<"\nDestino: "
        <<get_destino();
}

Servicos::~Servicos(){
}
