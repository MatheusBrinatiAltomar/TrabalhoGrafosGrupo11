#include "headers/bibliotecas.h"



int main(){
    Grafo grafo = Grafo();
    Menu menu = Menu(grafo);
    menu.iniciate();
    //grafo.mostrarVizinhacaAberta(3);
    //grafo.writeFile("saida.txt");
    return 0;
}


