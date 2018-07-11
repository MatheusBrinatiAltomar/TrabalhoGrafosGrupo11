#include "headers/bibliotecas.h"



int main(int argc, char **argv){

    Grafo grafo1 = Grafo();
    Grafo grafo2 = Grafo();
    Grafo grafo3 = Grafo();
    Grafo grafo4 = Grafo();
    Grafo grafo5 = Grafo();
    Grafo grafo6 = Grafo();
    Grafo grafo7 = Grafo();
    Grafo grafo8 = Grafo();
    Grafo grafo9 = Grafo();
    Grafo grafo10 = Grafo();
    //Menu menu = Menu(grafo);
    //menu.iniciate();
    grafo1.readFile2("instancia/p_hat300-1.txt");
    grafo2.readFile2("instancia/brock200_2.txt");
    grafo3.readFile2("instancia/brock400_4.txt");
    grafo4.readFile2("instancia/p_hat700-3.txt");
    grafo5.readFile2("instancia/hamming10-4.txt");
    grafo6.readFile2("instancia/MANN_a45.txt");
    grafo7.readFile2("instancia/p_hat1500-3.txt");
    grafo8.readFile2("instancia/C4000.txt");
    grafo9.readFile2("instancia/keller6.txt");
    grafo10.readFile2("instancia/MANN_a81.txt");

    for(int i = 0; i < 10; i++)
    {
        grafo1.acharCliqueMaxima(0.1,1000);
        grafo2.acharCliqueMaxima(0.1,1000);
        grafo3.acharCliqueMaxima(0.1,1000);
        grafo4.acharCliqueMaxima(0.1,100);
        grafo5.acharCliqueMaxima(0.1,100);
        grafo6.acharCliqueMaxima(0.1,100);
        grafo7.acharCliqueMaxima(0.1,100);
        grafo8.acharCliqueMaxima(0.1,10);
        grafo9.acharCliqueMaxima(0.1,10);
        grafo10.acharCliqueMaxima(0.1,10);

        grafo1.acharCliqueMaxima(0.2,1000);
        grafo2.acharCliqueMaxima(0.2,1000);
        grafo3.acharCliqueMaxima(0.2,1000);
        grafo4.acharCliqueMaxima(0.2,100);
        grafo5.acharCliqueMaxima(0.2,100);
        grafo6.acharCliqueMaxima(0.2,100);
        grafo7.acharCliqueMaxima(0.2,100);
        grafo8.acharCliqueMaxima(0.2,10);
        grafo9.acharCliqueMaxima(0.2,10);
        grafo10.acharCliqueMaxima(0.2,10);

        grafo1.acharCliqueMaxima(0.3,1000);
        grafo2.acharCliqueMaxima(0.3,1000);
        grafo3.acharCliqueMaxima(0.3,1000);
        grafo4.acharCliqueMaxima(0.3,100);
        grafo5.acharCliqueMaxima(0.3,100);
        grafo6.acharCliqueMaxima(0.3,100);
        grafo7.acharCliqueMaxima(0.3,100);
        grafo8.acharCliqueMaxima(0.3,10);
        grafo9.acharCliqueMaxima(0.3,10);
        grafo10.acharCliqueMaxima(0.3,10);
    }
   // grafo.showInfo();
    //cout << grafo.multigrafo() << endl;
   // cout << grafo.grafoEKRegular(4) << endl;
    //cout << grafo.grafoCompleto() << endl;
   //  grafo.adicionaAresta(3,2,0);
   // grafo.printSequenciaGraus();
    //grafo.printSequenciaGraus();
    return 0;
}


