#ifndef GRAFO_H_INCLUDED
#define GRAFO_H_INCLUDED

#include "No.h"
#include  <vector>
class Grafo{
    private:
        int ordem;
        int grauGrafo;
        int numArestas;
        No *listaNos;
        vector <No> *nodeList;
    public:
        Grafo();
        ~Grafo();
        No* getListaNos();
        int getOrdem();
        int getGrau();
        int getNumArestas();
        void setListaNos(No*);
};

#endif // GRAFO_H_INCLUDED
