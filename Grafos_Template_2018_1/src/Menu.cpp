#include "Menu.h"
#include <string>
#include <iostream>
using namespace std;
Menu::Menu()
{
    //ctor
}

void Menu::printText(string texto){
    cout << texto << endl;
}

void Menu::iniciate(){
    int num = 1;
    while(num!= 0){
        cout << "Aperte 1 para mostrar info" << endl;
        cout << "Aperte o para mostrar info" << endl;
    }
}

Menu::~Menu()
{
    //dtor
}
