#include "headers/bibliotecas.h"



int main(int argc, char **argv){

    Grafo grafo = Grafo();
    Menu menu = Menu(grafo);
    //menu.iniciate();

   grafo.readFile2("instancia/p_hat700-1.txt");
   // grafo.readFile2("instancia/p_hat1500-3.txt");
    for(int i=0;i<10;i++){
        cout << "Sol" << i << " ";
        grafo.acharCliqueMaxima(0.1,1000);
        //grafo.acharCliqueMaxima1();
        cout << endl;
    }
   // grafo.showInfo();




   // grafo.showInfo();
    //cout << grafo.multigrafo() << endl;
   // cout << grafo.grafoEKRegular(4) << endl;
    //cout << grafo.grafoCompleto() << endl;
   //  grafo.adicionaAresta(3,2,0);
   // grafo.printSequenciaGraus();
    //grafo.printSequenciaGraus();
    return 0;
}


