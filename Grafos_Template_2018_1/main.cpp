#include "headers/bibliotecas.h"



int main(){
    Grafo grafo = Grafo();
    Menu menu = Menu(grafo);
    //menu.iniciate();
    grafo.readFile("entrada.txt");
    cout << grafo.vizinho(1,2) << endl;
    cout << grafo.bipartido() << endl;
    return 0;
}


