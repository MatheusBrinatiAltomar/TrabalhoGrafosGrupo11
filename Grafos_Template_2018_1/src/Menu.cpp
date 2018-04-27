#include "../headers/bibliotecas.h"

using namespace std;




Menu::Menu()
{

}

void Menu::printText(string texto){
    cout << texto << endl;
}

void Menu::letraA(){
            printText("A");
        }
void Menu::letraB(){
            printText("A");
        }
void Menu::letraC(){
            printText("A");
        }
void Menu::letraD(){
            printText("A");
        }
void Menu::letraE(){
            printText("A");
        }
void Menu::letraF(){
            printText("A");
}
void Menu::letraG(){
            printText("A");
}
void Menu::letraH(){
            printText("A");
}
void Menu::letraI(){
            printText("A");
}
void Menu::letraJ(){
            printText("A");
}
void Menu::letraK(){
            printText("A");
}
void Menu::letraL(){
            printText("A");
}
void Menu::letraM(){
            printText("A");
}




void Menu::iniciate(){
    int num = 1;
    cout << "**------------------------**" << endl;
    printText("Digite 1 para ler arquivo");
    printText("Digite 2 para add or excluir no");
    printText("Digite 3 para retornar grau de um no");
    printText("Digite 4 para verificar a k-regularidade de um grafo");
    printText("Digite 5 para retornar a ordem de um grafo");
    printText("Digite 6 para checar se um grafo é trivial");
    printText("Digite 7 para checar se um grafo é nulo");
    printText("Digite 8 para mostrar a vizinhança aberta de um nó");
    printText("Digite 9 para mostrar a vizinhança fechada de um nó");
    printText("Digite 10 para checar se o grafo é multigrafo");
    printText("Digite 11 para checar se o grafo é completo");
    printText("Digite 12 para checar se o grafo é bipartido");
    printText("Digite 13 para imprimir a sequencia de grau do vertice");
    cout << "**------------------------**" << endl;
    while(num!= 0){
            cin >> num;
        switch (num){
            case 1:
              letraA();
                break;
            case 2:
               letraB();
                break;
            case 3:
               letraC();
                break;
            case 4:
               letraD();
                break;
            case 5:
           letraE();
                break;
            case 6:
              letraF();
                break;
            case 7:
               letraG();
                break;
            case 8:
              letraH();
                break;
            case 9:
                letraI();
                break;
            case 10:
                letraJ();
                break;
            case 11:
               letraK();
                break;
            case 12:
                letraL();
                break;
            case 13:
               letraM();
                break;
            case 0:
                cout << "Finalizando Programa" << endl;
                break;
            default:
                cout << "Opcao Invalida" << endl;

        }
    }
}

Menu::~Menu()
{
    //dtor
}
