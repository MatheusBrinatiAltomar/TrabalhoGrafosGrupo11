#include "headers/bibliotecas.h"



int main(){
    Menu menu = Menu();
    //menu.iniciate();

    Grafo grafo = Grafo();
    grafo.readFile("entrada.txt");
   grafo.adcionarNo(14,0);
    grafo.removerNo(1);
    grafo.showInfo();
    grafo.removerNo(4);
    grafo.showInfo();
    return 0;
}


