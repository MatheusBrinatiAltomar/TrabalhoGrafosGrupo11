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
    No no = No();
    no.setID(id);
    no.setPeso(pesoNo);
    listaNos.push_back(no);
}

void Grafo::removerNo (int id)
{
    vector <No>::iterator it;
    vector <Aresta>::iterator a;
    int i=0,j=0;
    it = listaNos.begin();
    for(i=0;i<listaNos.size() || it != listaNos.end() ;i++){
        int index = distance(listaNos.begin(), it);
        a = listaNos[i].listaAresta.begin();
        for(j=i;j<listaNos[i].listaAresta.size();j++){
            if(listaNos[i].listaAresta[j].getIDNo() == id ){
                    listaNos[i].listaAresta.erase(a + j);
            }
        }
    }
}

void Grafo::showInfo(){
    int i=0;
    for (std::vector<No>::iterator it = listaNos.begin(); it != listaNos.end(); ++it) {
			cout << "No: " << it->getID() << endl;
			for(std::vector<Aresta>::iterator a = listaNos[i].listaAresta.begin(); a != listaNos[i].listaAresta.end(); ++a){
                cout << a->getIDNo() << endl;
			}
			i++;
			//<< " Aresta: " << it->listaAresta[0].getIDNo() <<  " Peso:" << it->listaAresta[0].getPesoAresta()
    }
   // cout << "Aresta: " << listaNos[4].getAresta(1) << endl;
    cout << "size: " << listaNos.size();

}

bool Grafo::noEstaNoGrafo(int index)
{
    for (std::vector<No>::iterator it = listaNos.begin(); it != listaNos.end(); ++it) {
        if( it->getID() == index ){
            return true;
        }
    }
    return false;
}

void Grafo::readFile(string path)
{
	int m;
	listaNos.reserve(m);
	int count = 0;
	ifstream f;
	int i=0;
	int id=0;
	int id_destino;
    Aresta *a;
	f.open(path.c_str());
	if (f.is_open()) {
		f >> m;
		while (true) {
			double value;
			if(count > 2){
                count = 0;
			}
            if (!(f >> value)) {
                break;
            }
            else {
                if (count == 0) {
                    id = value;
                    if(!noEstaNoGrafo(id)){
                        adcionarNo(value,0);
                        i++;
                    }
                }
                else if (count == 1) {
                    id_destino = value;
                }
                else if( count == 2){
                    listaNos[id].adicionaAresta(id_destino,value);
                    //cout << "No: " << id << endl;
                  /* for(std::vector<Aresta>::iterator a = listaNos[id].listaAresta.begin(); a != listaNos[id].listaAresta.end(); ++a){
                cout << a->getIDNo() << endl;
			} */

                }
                }
				count++;
		}
       // cout << "Aresta: " << listaNos[4].getAresta(1) << endl;
		//showInfo();
    }
	else {
		cerr << "Couldn't open file!" << endl;
	}

}
