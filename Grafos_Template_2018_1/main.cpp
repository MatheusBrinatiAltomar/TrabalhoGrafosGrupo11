#include "headers/bibliotecas.h"



int main(int argc, char **argv){


    Grafo grafo4 = Grafo();
    //Grafo grafo9 = Grafo();

    grafo4.readFile2("instancia/p_hat700-3.txt"); // ja rodou alfa 0.1 e guloso
    //grafo9.readFile2("instancia/keller5.txt");

    cout << "p_hat700-3 guloso :" << endl;
    grafo4.acharCliqueMaxima1();
    cout << "p_hat700-3 randomizado alfa 0.1" << endl;
    for(int i = 0; i < 10; i++)
    {
        grafo4.acharCliqueMaxima(0.1,500);
    }
    cout << "p_hat700-3 randomizado alfa 0.2" << endl;
    for(int i = 0; i < 10; i++)
    {
        grafo4.acharCliqueMaxima(0.2,500);
    }
    cout << "p_hat700-3 randomizado alfa 0.3" << endl;
    for(int i = 0; i < 10; i++)
    {
        grafo4.acharCliqueMaxima(0.3,500);
    }
    cout << "p_hat700-3 randomizado reativo:" << endl;
    for(int i = 0; i < 10; i++)
    {
        grafo4.gulosoRandomizadoReativo(10,1,250,1500);
    }
    return 0;
}


