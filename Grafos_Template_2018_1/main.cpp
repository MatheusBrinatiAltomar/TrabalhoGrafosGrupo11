#include "headers/bibliotecas.h"



int main(int argc, char **argv){

    Grafo grafo = Grafo();
    Menu menu = Menu(grafo);
    //menu.iniciate();
    grafo.readFile2("instancia/brock200_2.txt");
    grafo.acharCliqueMaxima(0.1,1);
   // grafo.showInfo();
    //cout << grafo.multigrafo() << endl;
   // cout << grafo.grafoEKRegular(4) << endl;
    //cout << grafo.grafoCompleto() << endl;
   //  grafo.adicionaAresta(3,2,0);
   // grafo.printSequenciaGraus();
    //grafo.printSequenciaGraus();
    return 0;
}


