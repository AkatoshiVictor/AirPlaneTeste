#include "Funcionario.h"

Funcionario::Funcionario(string email, string senha, string nome_completo,string data_nascimento,
                        string endereco, string telefone, string telefone_familiar,
                        string documento, float salario, string classe_do_funcionario, string plano_de_saude,
                        string regiao_de_atuacao, int score_vendas):Usuario(email, senha, nome_completo, data_nascimento,
                           endereco, telefone, telefone_familiar, documento){

        this-> salario = salario;
        this-> classe_do_funcionario = classe_do_funcionario;
        this-> plano_de_saude = plano_de_saude;
        this-> regiao_de_atuacao = regiao_de_atuacao;
        this-> score_vendas = score_vendas;
}


void Funcionario::set_classe_do_funcionario(string classe_do_funcionario){

    this-> classe_do_funcionario = classe_do_funcionario;
}

void Funcionario::set_plano_de_saude(string plano_de_saude){

    this-> plano_de_saude = plano_de_saude;
}

void Funcionario::set_regiao_de_atuacao(string regiao_de_atuacao){

    this-> regiao_de_atuacao = regiao_de_atuacao;
}


string Funcionario::get_classe_do_funcionario()const{

    return classe_do_funcionario;
}

string Funcionario::get_plano_de_saude()const{

    return plano_de_saude;
}

string Funcionario::get_regiao_de_atuacao()const{

    return regiao_de_atuacao;
}

void Funcionario::imprime_dados_1(){
    imprime_dados();
    cout<<"\nClasse do funcionario: "<<get_classe_do_funcionario()
        <<"\nPossui plano de saúde: "<<get_plano_de_saude()
        <<"\nRegião de atuação: "<<get_regiao_de_atuacao();

}
