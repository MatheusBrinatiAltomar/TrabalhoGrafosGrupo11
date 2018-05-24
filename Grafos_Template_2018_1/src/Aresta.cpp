#include "../headers/bibliotecas.h"


Aresta::Aresta(int id, bool arc)
{
    iD_No = id;
    arco = arc;
}

Aresta::Aresta(int id)
{
    iD_No = id;
}

void Aresta::setPesoAresta(float peso)
{
    pesoAresta = peso;
}

void Aresta::setArco(bool arc)
{
    arco = arco;
}

bool Aresta::getArco()
{
    return arco;
}

float Aresta::getPesoAresta()
{
    return pesoAresta;
}

int Aresta::getIDNo()
{
    return iD_No;
}

