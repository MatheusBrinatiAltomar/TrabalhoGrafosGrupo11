#include "headers/bibliotecas.h"



int main(int argc, char **argv){

    Grafo grafo = Grafo();
    Menu menu = Menu(grafo);
    //menu.iniciate();
    grafo.readFile(argv);

   // grafo.showInfo();
    cout << grafo.multigrafo() << endl;
    cout << grafo.grafoEKRegular(4) << endl;
    cout << grafo.grafoCompleto() << endl;
     grafo.adicionaAresta(3,2,0);
    grafo.printSequenciaGraus();
    //grafo.printSequenciaGraus();
    return 0;
}


