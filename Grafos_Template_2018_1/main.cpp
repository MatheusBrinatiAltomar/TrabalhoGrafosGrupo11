#include "headers/bibliotecas.h"



int main(int argc, char **argv){


    Grafo grafo4 = Grafo();
    Grafo grafo5 = Grafo();
    Grafo grafo9 = Grafo();

    grafo4.readFile2("instancia/p_hat700-3.txt"); // ja rodou alfa 0.1 e guloso
    grafo5.readFile2("instancia/p_hat700-1.txt");
    grafo9.readFile2("instancia/keller5.txt");

    /*cout << "DSJC500_5 guloso :" << endl;
    grafo6.acharCliqueMaxima1();
    cout << "DSJC500_5 randomizado alfa 0.1" << endl;
    for(int i = 0; i < 10; i++)
    {
        grafo6.acharCliqueMaxima(0.1,1000);
    }
    cout << "DSJC500_5 randomizado alfa 0.2" << endl;
    for(int i = 0; i < 10; i++)
    {
        grafo6.acharCliqueMaxima(0.2,1000);
    }
    cout << "DSJC500_5 randomizado alfa 0.3" << endl;
    for(int i = 0; i < 10; i++)
    {
        grafo6.acharCliqueMaxima(0.3,1000);
    }
    cout << "DSJC500_5 randomizado reativo:" << endl;
    for(int i = 0; i < 10; i++)
    {
        grafo6.gulosoRandomizadoReativo(10,1,500,3000);
    }*/
    return 0;
}


