#ifndef NO_H_INCLUDED
#define NO_H_INCLUDED
#include "bibliotecas.h"
#include "Aresta.h"

class No{
    private:
        int iD;
        float pesoNo;
        vector <Aresta> listaAresta;
    public:
        No();
        ~No();
        int getID();
        float getPeso();
        void setPeso();
};

#endif // NO_H_INCLUDED
