#include "../headers/bibliotecas.h"

Aresta::Aresta(int id, bool arc,float pesoA)
{
    iD_No = id;
    arco = arc;
    pesoAresta = pesoA;
}

Aresta::Aresta(int id,float pesoA)
{
    iD_No = id;
    arco = true;
    pesoAresta = pesoA;
}

Aresta::Aresta()
{

}

Aresta::~Aresta()
{

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

int Aresta::setIDNo(int id)
{
    this->iD_No = id;
}
