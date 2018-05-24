#ifndef ARESTA_H_INCLUDED
#define ARESTA_H_INCLUDED

class Aresta{
    private:
        float pesoAresta;
        int iD_No;
        bool arco;
    public:
        Aresta(int iD_No);
        Aresta(int iD_No, bool arc);
        ~Aresta();
        float getPesoAresta();
        int getIDNo();
        bool getArco();
        void setPesoAresta(float peso);
        void setArco(bool arc);
};


#endif // ARESTA_H_INCLUDED
