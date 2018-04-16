#ifndef NO_H_INCLUDED
#define NO_H_INCLUDED

#include "Aresta.h"

class No{
    private:
        int iD;
        float pesoNo;
        No *proxNo;
        Aresta* listaAresta;
    public:
        No();
        ~No();
        int getID();
        float getPeso();
        No* getProxNo();
        Aresta* getListaAresta();
        void setPeso(float);
        void setProxNo(No*);
        void setListaAresta(Aresta*);
};

#endif // NO_H_INCLUDED
