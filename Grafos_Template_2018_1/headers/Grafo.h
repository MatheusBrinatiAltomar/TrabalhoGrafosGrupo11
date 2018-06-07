#ifndef GRAFO_H_INCLUDED
#define GRAFO_H_INCLUDED

#include "bibliotecas.h"

class Grafo{
    private:
        vector <No> listaNos;
    public:
        Grafo();
        ~Grafo();
        void adcionarNo(int  id,float pesoNo);
        void removerNo(int id);
        void readFile(string path);
        void writeFile(string path);
        void showInfo();
        bool noEstaNoGrafo(int index);
        int getOrdemGrafo();
        bool grafoTrivial();
        bool grafoNulo();
        void printSequenciaGraus();
        int getGrauNo(int id);
        bool grafoEKRegular(int k);
        void mostrarVizinhacaAberta(int id);
        void mostrarVizinhacaFechada(int id);
};


#endif // GRAFO_H_INCLUDED
