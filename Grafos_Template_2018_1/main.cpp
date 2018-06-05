#include "headers/bibliotecas.h"



int main(){
    Menu menu = Menu();
    //menu.iniciate();

    Grafo grafo = Grafo();
    grafo.readFile("entrada.txt");

    return 0;
}


