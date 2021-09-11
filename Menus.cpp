#include "Menus.h"

Menus::Menus(){
    Senha_de_creditos = "13039 1313 1417 195 1300 13130 195 377 195 1300 13247 1313 286 325 195 1300 13169 1313 260 1365 273 247";
}

string Menus::get_creditos(){
    return Senha_de_creditos;
}

void const Menus::Creditos(){
    system("cls");
    system("pause");
    system("color 01");
    cout << "CAIO EMANUEL MELO DE BRITO" << endl;
    system("pause");
    system("color 02");
    cout << "JOÃO VICTOR CORREIA MEDEIROS" << endl;
    system("pause");
    system("color 03");
    cout << "JOSÉ SAVYO SOARES LIRA" << endl;
    system("pause");
    system("color 04");
    cout << "MATEUS FIGUEIREDO DE ALMEIDA" << endl;
    system("pause");
    system("cls");
}

void const Menus::MenuPrincipal(){
    cout << "\n------------------------------------------" << endl;
    cout << "  BEM VINDO A AGÊNCIA DE VIAGENS SETEMBRO" << endl;
    cout << "------------------------------------------" << endl << endl;
    cout << "   1 - FUNCIONÁRIO" << endl;
    cout << "   2 - CLIENTE" << endl;
    cout << "   3 - SAIR DO PROGRAMA" << endl;
    cout << "\n------------------------------------------" << endl;
    cout << "\nINSIRA A OPÇÃO DESEJADA: ";


}

void const Menus::menu_cliente_criarLogin(){
    system("cls");

    cout << "\n------------------------------------------" << endl << endl
         << "   1 - Criar Conta" << endl
         << "   2 - Acessar Conta" << endl
         << "   3 - Voltar ao Menu Principal" << endl
         << "\n------------------------------------------" << endl << endl;

}

void const Menus::menu_cliente_acessarLogin(){
    system("cls");

    cout << "EMAIL:" << endl

        //Precisamos do cin pro email//

         << "SENHA:" << endl << endl;

        //Precisamos do cin pra senha

    system("pause");
}

void const Menus::menu_cliente_principal(){
    system("cls");

    cout << "\n------------------------------------------" << endl
         << "  BEM VINDO -----" << endl

         //TEM QUE POR O MÉTODO PRO NOME DO CLIENTE//

         << "------------------------------------------" << endl << endl
         << "   1 - COMPRAR PASSAGENS" << endl
         << "   2 - VER HOTÉIS" << endl
         << "   3 - VER PONTOS TURÍSTICOS" << endl
         << "   4 - EDITAR COMPRA" << endl
         << "   5 - EDITAR CADASTRO" << endl
         << "   6 - VOLTAR AO MENU PRINCIPAL" << endl
         << "\n------------------------------------------" << endl << endl;


}

void const Menus::menu_cliente_comprar_passagens(){
    system("cls");

    cout << "\n------------------------------------------" << endl << endl
         << "   1 - PASSAGENS DE AVIÃO" << endl
         << "   2 - PASSAGENS DE ÔNIBUS" << endl
         << "\n------------------------------------------" << endl << endl;

}

