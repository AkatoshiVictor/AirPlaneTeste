#include <iostream>
#include <locale>
#include <cstdlib>

using namespace std;

#include "Menus.cpp"

int main(){
    system("color 09");
    system("cls");
    setlocale(LC_ALL, "Portuguese");

    Menus chamar;
    string opcao;



    do{
        chamar.MenuPrincipal();
        getline(cin, opcao);

        if(opcao == "1"){
            system("cls");

            cout << "Menu do Funcion�rio" << endl << endl;
            //M�todos para os menus do funcion�rio
        }

        else if(opcao == "2"){

            chamar.menu_cliente_criarLogin();
            getline(cin, opcao);

            if(opcao == "1"){
                system("cls");

                cout << "Criar Cadastro" << endl << endl;
                //M�todos para cadastrar um usu�rio
            }

            else if(opcao == "2"){

                chamar.menu_cliente_acessarLogin();
                //cins com email e senha

                do{
                    chamar.menu_cliente_principal();
                    getline(cin, opcao);

                    if(opcao == "1"){

                        chamar.menu_cliente_comprar_passagens();
                        getline(cin, opcao);

                        if(opcao == "1"){

                            cout << endl << "Passagem Avi�o" << endl << endl;
                            //M�todos para compra de passagem de avi�o

                            system("pause");
                            system("cls");
                        }

                        else{

                            cout << endl <<  "Passagem onibus" << endl << endl;
                            //M�todos para compra de passagem de onibus

                            system("pause");
                            system("cls");
                        }
                    }

                    else if(opcao == "2"){
                         system("cls");

                          cout << "Hot�is" << endl << endl;
                          //M�todos para ver os hot�is

                          system("pause");
                          system("cls");
                    }

                    else if(opcao == "3"){
                        system("cls");

                        cout << "Pontos tur�sticos" << endl << endl;
                        //M�todos para ver os pontos tur�sticos

                        system("pause");
                        system("cls");
                    }

                    else if(opcao == "4"){
                        system("cls");

                        cout << "Edi��o compra" << endl << endl;
                        //M�todos para modifica��es das compras

                        system("pause");
                        system("cls");
                    }

                    else if(opcao == "5"){
                        system("cls");

                        cout << "Edi��o Cadastro" << endl << endl;
                        //M�todos para editar o cadastro

                        system("pause");
                        system("cls");
                    }

                }while(opcao != "6");
            }
        }

        system("pause");
        system("cls");

    }while(opcao != "3");


    return 0;
}
