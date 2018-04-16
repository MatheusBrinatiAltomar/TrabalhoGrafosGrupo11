#ifndef ARESTA_H_INCLUDED
#define ARESTA_H_INCLUDED

class Aresta{
    private:
        float pesoAresta;
        int iD_No;
        Aresta *proxAresta;
    public:
        Aresta();
        ~Aresta();
        float getPesoAresta();
        int getIDNo();
        Aresta* getProxAresta();
        void setPesoAresta(float);
        void setProxAresta(Aresta*);
};


#endif // ARESTA_H_INCLUDED
