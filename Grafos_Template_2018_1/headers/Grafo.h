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
        void readFile(char **path);
        void readFile2(string path);
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
        bool multigrafo();
        bool vizinho(int id1, int id2);
        bool grafoCompleto();
        void removeAresta(int id1, int id2);
        void adicionaAresta(int id1,int id2, float peso);
        bool bipartido();
        bool tenta2ColorirGrafo(int id,int collorArr[]);
        void acharCliqueMaxima1();
        void acharCliqueMaxima(float alfa,int maxIteracoes);
        void gulosoRandomizadoReativo(int alfaRR, int betaRR, int gammaRR, int itTotal);
        bool formaClique(vector <No> nosNaSolucao, No noCandidato);
        bool verificaSolucao(vector <No> nosNaSolucao);
        int acharCliqueMaxima2(float alfa, int maxIteracoes);
};


#endif // GRAFO_H_INCLUDED
