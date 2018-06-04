#include "../headers/bibliotecas.h"
#include <vector>

Grafo::Grafo()
{
    vector <No> listaNos;
}

Grafo::~Grafo()
{

}


void Grafo::adcionarNo(int id, float pesoNo)
{
    No noAdicionado;
    noAdicionado.setID(id);
    noAdicionado.setPeso(pesoNo);
    listaNos.push_back(noAdicionado);
}

void Grafo::removerNo (int id)
{
    vector <No>::iterator it;
    for (it = listaNos.begin(); it != listaNos.end(); it ++)
    {
        int index = distance(listaNos.begin(), it);
        for (vector <No>::iterator i = it; i != listaNos[index].listaAresta.end(); i++, index++)
        {
            //
        }
    }
}
