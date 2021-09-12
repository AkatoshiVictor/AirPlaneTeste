#include "Onibus.h"

Onibus::Onibus(float preco, int origem, int destino, float preco_final,
                    string dia, string partida, string chegada,
                    float a_taxa_executiva,float a_taxa_pobres)
                        : Servicos(preco, origem, destino,
                        preco_final, dia, partida, chegada){

		this-> o_taxa_executiva = o_taxa_executiva;
		this-> o_taxa_economica = o_taxa_economica;
}



void Onibus::set_o_taxa_executiva(float o_taxa_executiva){

    this-> o_taxa_executiva = o_taxa_executiva;
}

void Onibus::set_o_taxa_economica(float o_taxa_economica){

    this-> o_taxa_economica = o_taxa_economica;
}



float Onibus::get_o_taxa_executiva()const{

    return o_taxa_executiva;
}

float Onibus::get_o_taxa_economica()const{

    return o_taxa_economica;
}

void Onibus::imprime_dados_3(){
    cout<<"\n\nValores:"<<endl
        <<"Taxa da classe executiva: "
        <<get_o_taxa_executiva()
        <<" reais/km"<<endl
        <<"Taxa da classe econômica: "
        <<get_o_taxa_economica()
        <<" reais/km\n\n"<<endl;
        imprime_dados_2();
}

Onibus::~Onibus(){
}
