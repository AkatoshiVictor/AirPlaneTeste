#include "Cliente.h"

Cliente::Cliente(string seguro, string acompanhante, float orcamento, string necessidades_especiais,
                        string metodo_de_pagamento, string email, string senha, string nome_completo,
                        string data_nascimento, string endereco, string telefone, string telefone_familiar,
                        string documento):Usuario(email, senha, nome_completo, data_nascimento,
                           endereco, telefone, telefone_familiar, documento){

    this-> seguro = seguro;
    this-> acompanhante = acompanhante;
    this-> orcamento = orcamento;
    this-> necessidades_especiais = necessidades_especiais;
    this-> metodo_de_pagamento = metodo_de_pagamento;
}

void Cliente::set_seguro(string seguro){

    this-> seguro = seguro;
}

void Cliente::set_acompanhante(string acompanhante){

    this-> acompanhante = acompanhante;
}

void Cliente::set_orcamento(float orcamento){

    this-> orcamento = orcamento;
}

void Cliente::set_necessidades_especiais(string necessidades_especiais){

    this-> necessidades_especiais = necessidades_especiais;
}

void Cliente::set_metodo_de_pagamento(string metodo_de_pagamento){

    this-> metodo_de_pagamento = metodo_de_pagamento;
}

string Cliente::get_seguro() const{

    return seguro;
}

string Cliente::get_acompanhante() const{
    return acompanhante;
}

float Cliente::get_orcamento() const{

    return orcamento;
}

string Cliente::get_necessidades_especiais() const{

    return necessidades_especiais;
}

string Cliente::get_metodo_de_pagamento() const{

    return metodo_de_pagamento;
}

void Cliente::imprime_dados_2(){
    imprime_dados();
    cout<<"\nPossui seguro: "<<get_seguro()
        <<"\nStatus de acompanhate: "<<get_acompanhante()
        <<"\nOrçamento: "<<get_orcamento()<<" R$"
        <<"\nPossui necessidades especiais: "<<get_necessidades_especiais()
         <<"\nMétodo de pagamento: "<<get_metodo_de_pagamento();

}

Cliente::~Cliente(){

}
