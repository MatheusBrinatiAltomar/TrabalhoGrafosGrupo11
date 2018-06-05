#include "../headers/bibliotecas.h"

No::No()
{

}

No::No(int iD, int grau, int grauEntrada, int grauSaida, float pesoNo)
{
    this->iD = iD;
    this->grau = grau;
    this->grauEntrada = grauEntrada;
    this->grauSaida = grauSaida;
    this->pesoNo = pesoNo;
    vector <Aresta> listaAresta;
}

No::~No()
{

}

void No::setGrau(int g)
{
    grau = g;
}

void No::setGrauEntrada(int grauE)
{
    grauEntrada = grauE;
}

void No::setGrauSaida(int grauS)
{
    grauSaida = grauS;
}

void No::setPeso(float pesoN)
{
    this->pesoNo = pesoN;
}

void No::setID(int id)
{
    this->iD = id;
}

int No::getGrau()
{
    return grau;
}

int No::getGrauSaida()
{
    return grauSaida;
}

int No::getGrauEntrada()
{
    return grauEntrada;
}

float No::getAresta(int index){
    return listaAresta[index].getIDNo();
}

int No::getID()
{
    return iD;
}

float No::getPeso()
{
    return pesoNo;
}

 void No::adicionaAresta(int id, float pesoA)
{
    cout << "asudh" << endl;
    Aresta a =  Aresta(id,pesoA);
    if(id == iD)
        grau += 2;
        else
        grau += 1;
     for(std::vector<Aresta>::iterator a = listaAresta.begin(); a != listaAresta.end(); ++a){
        cout << a->getIDNo() << endl;
     }
    listaAresta.push_back(a);
    for(std::vector<Aresta>::iterator a = listaAresta.begin(); a != listaAresta.end(); ++a){
        cout << a->getIDNo() << endl;
     }

}

void No::adicionaAresta(int id,float pesoA,bool arco)
{
    if(arco == false)
    {
        if(id == iD)
            grau += 2;
        else
            grau += 1;
    }
    else
    {
        grauSaida +=1;
    }
}

void No::removeAresta(int id, bool arco)
{
    if(arco == false)
    {
        if(id == iD)
            grau -= 2;
        else
            grau -= 1;
    }
    else
    {
        grauSaida -=1;
    }
}
