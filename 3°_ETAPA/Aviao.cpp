#include "Aviao.h"

Aviao::Aviao(float preco, int origem, int destino, float preco_final,
                    string dia, string partida, string chegada,
                    float a_taxa_primeira_classe, float a_taxa_executiva,
                    float a_taxa_economica): Servicos(preco, origem, destino,
                    preco_final, dia, partida, chegada){

        this-> a_taxa_primeira_classe = a_taxa_primeira_classe;
		this-> a_taxa_executiva = a_taxa_executiva;
		this-> a_taxa_economica = a_taxa_economica;
}


void Aviao::set_a_taxa_primeira_classe(float a_taxa_primeira_classe){

    this-> a_taxa_primeira_classe = a_taxa_primeira_classe;
}

void Aviao::set_a_taxa_executiva(float a_taxa_executiva){

    this-> a_taxa_executiva = a_taxa_executiva;
}

void Aviao::set_a_taxa_economica(float a_taxa_economica){

    this-> a_taxa_economica = a_taxa_economica;
}


float Aviao::get_a_taxa_primeira_classe()const{

    return a_taxa_primeira_classe;
}

float Aviao::get_a_taxa_executiva()const{

    return a_taxa_executiva;
}

float Aviao::get_a_taxa_economica()const{

    return a_taxa_economica;
}

void Aviao::imprime_dados(){
    cout<<"\n\nValores:"<<endl
        <<"Taxa da primeira classe: "
        <<get_a_taxa_primeira_classe()
        <<"reais/km"<<endl
        <<"Taxa da classe executiva: "
        <<get_a_taxa_executiva()
        <<"reais/km"<<endl
        <<"Taxa da classe econômica: "
        <<get_a_taxa_economica()
        <<"reais/km\n\n"<<endl;
        imprime_dados_2();
}

Aviao::~Aviao(){
}
