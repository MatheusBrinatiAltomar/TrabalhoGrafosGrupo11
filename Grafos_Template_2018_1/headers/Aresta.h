#ifndef ARESTA_H_INCLUDED
#define ARESTA_H_INCLUDED

class Aresta{
    private:
        float pesoAresta;
        int iD_No;
        bool arco;
    public:
        Aresta(int iD_No,float pesoA);
        Aresta(int iD_No,bool arc,float pesoA);
        ~Aresta();
        float getPesoAresta();
        int getIDNo();

        int setIDNo(int id);
        bool getArco();
        void setPesoAresta(float peso);
        void setArco(bool arc);
};


#endif // ARESTA_H_INCLUDED
