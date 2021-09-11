#include "Menus.h"

/*Funcionára nas setas, quando for atualizado o padrão do gatch()*/

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

int const Menus::MenuGeral(){

    /*De menu para menu, será preenchido apenas o vetor de string com as opções
    e mudado até o ponto que a variável I do for vai*/
    string Menu[3] = {"SAIR DO PROGRAMA", "FUNCIONÁRIO", "CLIENTE"};
    int PosicaoMenu = 0;
    string Controle = "";

    while(1){
        system("cls");

        for(int I=0; I<3; I++){
            if(I == PosicaoMenu){
                textcolor(2,0); /*2 = Ciano*/
                cout << Menu[I] << endl;
                cout << "   [1 Voltar || 2 Entrar]" << endl;
            }
            else{
                textcolor(15,0); /*Voltando ao original*/
                cout << Menu[I] << endl;
            }
           
        }

        textcolor(15,0); /*Ao final deve se voltar ao original*/
    
        /*No bloco if-else, só será mudado de acordo com o tamanho, para
        se chegar ao final do menu, regressar ao início*/
        Controle = getch();
        if(Controle == "s"){
            PosicaoMenu++;
            if(PosicaoMenu > 2)
                PosicaoMenu = 0;
        }
        else if(Controle == "w"){
            PosicaoMenu--;
            if(PosicaoMenu < 0)
                PosicaoMenu = 2;
        }

        /*Bloco padrão para verificação de entrada na opção, ao final
        da o return da posição do menu para utilização do método referente
        aquela posição*/

        Controle = getch(); /*Segundo getch() serve para verificar, se foi entrado na opção*/
        if(Controle == "1")
            continue;
        else if(Controle == "2")
            return PosicaoMenu;
    }
}