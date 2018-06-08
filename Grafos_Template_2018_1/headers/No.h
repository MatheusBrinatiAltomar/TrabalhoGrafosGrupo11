#ifndef NO_H_INCLUDED
#define NO_H_INCLUDED
#include "bibliotecas.h"
#include "Aresta.h"

class No{
    private:
        int iD;
        int grau;
        int grauEntrada;
        int grauSaida;
        float pesoNo;
    public:
        No();
        No(int iD, int grau, int grauEntrada, int grauSaida, float pesoNo);
        ~No();
        int getID() ;
        int getGrau();
        int getGrauEntrada();
        int getGrauSaida();
        float getPeso();
        void setID(int id);
        void setGrau(int g);
        void setGrauEntrada(int grauE);
        void setGrauSaida(int grauS);
        void setPeso(float pesoN);
        void adicionaAresta(int id,float pesoA,bool arco);
        void adicionaAresta(int id,float pesoA);
        void removeAresta(int id, bool arco);
        float getAresta(int index);
        vector <Aresta> listaAresta;
        bool eVizinho(int id);
};

#endif // NO_H_INCLUDED
