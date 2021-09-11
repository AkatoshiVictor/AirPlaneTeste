#include <conio.h>
#include <iostream>
#include <locale>
#include <windows.h> /*Para uso da função que muda as cores de strings*/

using namespace std;

#include "Menus.cpp"

int main(){
    setlocale(LC_ALL,"Portuguese");
    system("cls");
    Menus Teste;
    
    while(1){
        int teste = Teste.MenuGeral();

        switch(teste){
            case 0:{
                cout << endl << "você saiu do programa" << endl;
                system("pause"); 
            }
            break;
            case 1:{
                cout << endl << "Você entrou na opção 1" << endl;
                system("pause"); 
            }
            break;
            case 2:{
                cout << endl << "Você entrou na opção 2" << endl;
                system("pause"); 
            }
            break;
        }      
    }

    return 0;
}