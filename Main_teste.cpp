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

            cout << "Menu do Funcionário" << endl << endl;
            //Métodos para os menus do funcionário
        }

        else if(opcao == "2"){

            chamar.menu_cliente_criarLogin();
            getline(cin, opcao);

            if(opcao == "1"){
                system("cls");

                cout << "Criar Cadastro" << endl << endl;
                //Métodos para cadastrar um usuário
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

                            cout << endl << "Passagem Avião" << endl << endl;
                            //Métodos para compra de passagem de avião

                            system("pause");
                            system("cls");
                        }

                        else{

                            cout << endl <<  "Passagem onibus" << endl << endl;
                            //Métodos para compra de passagem de onibus

                            system("pause");
                            system("cls");
                        }
                    }

                    else if(opcao == "2"){
                         system("cls");

                          cout << "Hotéis" << endl << endl;
                          //Métodos para ver os hotéis

                          system("pause");
                          system("cls");
                    }

                    else if(opcao == "3"){
                        system("cls");

                        cout << "Pontos turísticos" << endl << endl;
                        //Métodos para ver os pontos turísticos

                        system("pause");
                        system("cls");
                    }

                    else if(opcao == "4"){
                        system("cls");

                        cout << "Edição compra" << endl << endl;
                        //Métodos para modificações das compras

                        system("pause");
                        system("cls");
                    }

                    else if(opcao == "5"){
                        system("cls");

                        cout << "Edição Cadastro" << endl << endl;
                        //Métodos para editar o cadastro

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
