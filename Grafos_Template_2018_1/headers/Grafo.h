#ifndef GRAFO_H_INCLUDED
#define GRAFO_H_INCLUDED

#include "bibliotecas.h"

class Grafo{
    private:
        int ordem;
        int grauGrafo;
        int numArestas;
        //No *listaNos;
        vector <No> listaNos;
    public:
        Grafo();
        ~Grafo();
        No* getListaNos();
        int getOrdem();
        int getGrau();
        int getNumArestas();
        void setListaNos(No*);
        //void adcionarNo(int  id,float pesoNo);
        //void removerNo(int id);
};

#endif // GRAFO_H_INCLUDED
