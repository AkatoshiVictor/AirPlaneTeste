#include "Menus.h"

/*Não funcionará nas setinhas*/

/*Toda essa parte é genérica e é usada em todos os métodos de menus*/

/*Usadas na função textcolor*/
static int __BACKGROUND = 0;    /*Preto*/
static int __FOREGROUND = 15;   /*Branco*/

void textcolor (int letras, int fundo){

    /*Lembre que o padrão de cores utilizados é 0=Preto, 15=Branco, 2=Ciano
    Para letras ativas usa o 2, e siga o padrão de baixo para cada menu*/

    __FOREGROUND = letras;
    __BACKGROUND = fundo;

    SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE), letras + (__BACKGROUND << 4));
}
/*Até aqui*/

int const Menus::ExibidorDeMenus(){

    /*NÃO ALTERAR A EXIBIÇÃO PADRÃO DE MENUS, OS
    MÉTODOS ADICIONADOS PARA NOVOS MENUS, CHAMAM ESSE
    AO FINAL*/

    int PosicaoMenu = 0;
    string Controle = "";

    while(1){
        system("cls");

        textcolor(4,0);
        cout << MensagemAmigavel[0] << endl << endl;
        textcolor(15,0);

        for(int I=0; I<Exibidor.size(); I++){
            if(I == PosicaoMenu){
                textcolor(2,0); /*2 = Ciano*/
                cout << Exibidor[I] << endl;
                cout << "   [1 Voltar || 2 Entrar]" << endl;
            }
            else{
                textcolor(15,0); /*Voltando ao original*/
                cout << Exibidor[I] << endl;
            }
           
        }

        textcolor(15,0); /*Ao final deve se voltar ao original*/
    
        /*No bloco if-else, só será mudado de acordo com o tamanho, para
        se chegar ao final do menu, regressar ao início*/
        Controle = getch();
        if(Controle == "s"){
            PosicaoMenu++;
            if(PosicaoMenu > Exibidor.size()-1)
                PosicaoMenu = 0;
        }
        else if(Controle == "w"){
            PosicaoMenu--;
            if(PosicaoMenu < 0)
                PosicaoMenu = Exibidor.size()-1;
        }

        /*Bloco padrão para verificação de entrada na opção, ao final
        da o return da posição do menu para utilização do método referente
        aquela posição*/

        Controle = getch(); /*Segundo getch() serve para verificar, se foi entrado na opção*/
        if(Controle == "1")
            return 99;
        else if(Controle == "2")
            return PosicaoMenu;
    }

}

/*Esses são os métodos que devem ser chamados na main*/
    /*Menu geral*/
int const Menus::MenuGeral(){

    string Menu[2] = {"FUNCIONÁRIO", "CLIENTE"};

    /*Mensagem amigável para indicar ao usuário em que menu ele está no momento*/
    MensagemAmigavel.clear();
    MensagemAmigavel.push_back("EMPRESA DE VIAGENS AIRPLANE");

    Exibidor.clear();
    for(int I=0; I<2; /*O .size não fucniona*/ I++){
        Exibidor.push_back(Menu[I]);
    }

    return ExibidorDeMenus();
}

int const Menus::Cliente(){

    string Menu[2] = {"ENTRAR", "CADASTRE-SE"};

    MensagemAmigavel.clear();
    MensagemAmigavel.push_back("MENU DE CLIENTE");

    Exibidor.clear();
    for(int I=0; I<2; I++){
        Exibidor.push_back(Menu[I]);
    }

    return ExibidorDeMenus();
}

int const Menus::Funcionario(){

    string Menu[2] = {"ENTRAR", "TENTE UMA VAGA"};

    MensagemAmigavel.clear();
    MensagemAmigavel.push_back("MENU DE FUNCIOÁRIO");

    Exibidor.clear();
    for(int I=0; I<2; I++){
        Exibidor.push_back(Menu[I]);
    }

    return ExibidorDeMenus();
}
