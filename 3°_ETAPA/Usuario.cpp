#include "Usuario.h"

Usuario::Usuario(string email, string senha, string nome_completo, string data_nascimento,
                           string endereco, string telefone, string telefone_familiar, string documento){

        this-> email = email;
        this-> senha = senha;
        this-> nome_completo = nome_completo;
        this-> data_nascimento = data_nascimento;
        this-> endereco = endereco;
        this-> telefone = telefone;
        this-> telefone_familiar = telefone_familiar;
        this-> documento = documento;
}

void Usuario::set_email(string email){

    this-> email = email;
}

void Usuario::set_senha(string senha){

    this-> senha = senha;
}

void Usuario::set_nome_completo(string nome_completo){

    this-> nome_completo = nome_completo;
}

void Usuario::set_data_nascimento(string data_nascimento){

    this-> data_nascimento = data_nascimento;
}

void Usuario::set_endereco(string endereco){

    this-> endereco = endereco;
}

void Usuario::set_telefone(string telefone){

    this-> telefone = telefone;
}

void Usuario::set_telefone_familiar(string telefone_familiar){

    this-> telefone_familiar = telefone_familiar;
}

void Usuario::set_documento(string documento){

    this-> documento = documento;
}

string Usuario::get_email() const{

    return email;
}

string Usuario::get_senha() const{

    return senha;
}

string Usuario::get_nome_completo() const{

    return nome_completo;
}

string Usuario::get_data_nascimento() const{

    return data_nascimento;
}

string Usuario::get_endereco() const{

    return endereco;
}

string Usuario::get_telefone() const{

    return telefone;
}

string Usuario::get_telefone_familiar() const{

    return telefone_familiar;
}

string Usuario::get_documento() const{

    return documento;
}

void Usuario::imprime_dados(){
    cout<<"\nDados do fucionário:"<<endl
        <<"\nE-mail: "<<get_email()
        <<"\nSenha: "<<get_senha()
        <<"\nNome completo: "<<get_nome_completo()
        <<"\nData de nascimento: "<<get_data_nascimento()
        <<"\nEndereço: "<<get_endereco()
        <<"\nTelefone: "<<get_telefone()
        <<"\nTelefone: familiar: "<<get_telefone_familiar()
        <<"\nDocumento: "<<get_documento();
}

Usuario::~Usuario(){

}
