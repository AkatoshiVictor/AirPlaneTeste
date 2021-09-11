#include "Menus.h"

/*Funcion�ra nas setas, quando for atualizado o padr�o do gatch()*/

/*Toda essa parte � gen�rica e � usada em todos os m�todos de menus*/

/*Usadas na fun��o textcolor*/
static int __BACKGROUND = 0;    /*Preto*/
static int __FOREGROUND = 15;   /*Branco*/

void textcolor (int letras, int fundo){

    /*Lembre que o padr�o de cores utilizados � 0=Preto, 15=Branco, 2=Ciano
    Para letras ativas usa o 2, e siga o padr�o de baixo para cada menu*/

    __FOREGROUND = letras;
    __BACKGROUND = fundo;

    SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE), letras + (__BACKGROUND << 4));
}
/*At� aqui*/

int const Menus::MenuGeral(){

    /*De menu para menu, ser� preenchido apenas o vetor de string com as op��es
    e mudado at� o ponto que a vari�vel I do for vai*/
    string Menu[3] = {"SAIR DO PROGRAMA", "FUNCION�RIO", "CLIENTE"};
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
    
        /*No bloco if-else, s� ser� mudado de acordo com o tamanho, para
        se chegar ao final do menu, regressar ao in�cio*/
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

        /*Bloco padr�o para verifica��o de entrada na op��o, ao final
        da o return da posi��o do menu para utiliza��o do m�todo referente
        aquela posi��o*/

        Controle = getch(); /*Segundo getch() serve para verificar, se foi entrado na op��o*/
        if(Controle == "1")
            continue;
        else if(Controle == "2")
            return PosicaoMenu;
    }
}