#include "../headers/bibliotecas.h"
#include <vector>

Grafo::Grafo()
{

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
    for(it = listaNos.begin() ; it != listaNos.end(); ++it, i++ ){
        if ( it->getID() == id ){
            listaNos.erase( listaNos.begin() + i  );
        }
    }
    i =0;
    for(it = listaNos.begin(); it != listaNos.end(); ++it,i++){
            j = 0;
        for(std::vector<Aresta>::iterator a = listaNos[i].listaAresta.begin(); a != listaNos[i].listaAresta.end() && j < listaNos[i].listaAresta.size() ;   ++a){
                if(a->getIDNo() == id) {
                    listaNos[i].listaAresta.erase( listaNos[i].listaAresta.begin() + j );
                }
                j++;
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

    }
    cout << "size: " << listaNos.size() << endl;

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

 void Grafo::writeFile(string path)
{
    ofstream f(path.c_str());
    if(f.is_open()){
        f << listaNos.size();
        f << "\n";
        for (std::vector<No>::iterator it = listaNos.begin(); it != listaNos.end(); ++it) {
			for(std::vector<Aresta>::iterator a = it->listaAresta.begin(); a != it->listaAresta.end(); ++a){
                f << it->getID();
                f << " " ;
                f << a->getIDNo();
                f << " ";
                f << a->getPesoAresta();
                f << "\n";
        }


    }
    } else {
        cerr << "Couldn't open file!" << endl;
    }


}


void Grafo::readFile(char **path)
{
	int m;
	listaNos.reserve(m);
	int count = 0;
	ifstream f;
	int id=0;
	int id_destino;
	f.open(path[1]);
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
                    if(!noEstaNoGrafo(id)){ // Nó está mo grafo?
                        adcionarNo(id,0);
                    }
                }
                else if (count == 1) {
                    id_destino = value;
                    if(!noEstaNoGrafo(id_destino)){ // Nó está mo grafo?
                        adcionarNo(id_destino,0);
                    }
                }
                else if( count == 2){
                    for (std::vector<No>::iterator it = listaNos.begin(); it != listaNos.end(); ++it) {
                            if( it->getID() == id )
                                    it->adicionaAresta(id_destino,false,value);
                            if( it->getID() == id_destino )
                                    it->adicionaAresta(id,false,value);
                    }


                }
                }
				count++;
		}
            cout << "Arquivo lido com sucesso" << endl;


    }
	else {
		cerr << "Couldn't open file!" << endl;
	}

}

void Grafo::readFile2(string path)
{
	int m,n;
	int count = 0;
	ifstream f;
	int id=0;
	int id_destino;
	f.open(path);
	if (f.is_open()) {
		f >> m;
		f >> n;
		while (true) {
			double value;
			string aux;
			if(count > 2)
                count = 0;
            if (count == 0) {
                    if (!(f >> aux)) {
                            break;
                    }
                }
                else if (  count == 1) {
                    if (!(f >> value)) {
                            break;
                    }
                    id = value;
                    if(!noEstaNoGrafo(id)){ // N� est� mo grafo?
                        adcionarNo(id,0);
                    }
                }
                else if(count == 2){
                    if (!(f >> value)) {
                            break;
                    }
                    id_destino = value;
                    if(!noEstaNoGrafo(id_destino)){ // N� est� mo grafo?
                        adcionarNo(id_destino,0);
                    }
                    for (std::vector<No>::iterator it = listaNos.begin(); it != listaNos.end(); ++it) {
                            if( it->getID() == id )
                                    it->adicionaAresta(id_destino,false,0);
                            if( it->getID() == id_destino )
                                    it->adicionaAresta(id,false,0);
                    }
                }
				count++;
		}
		 cout << "Arquivo lido com sucesso" << endl;
		} else {
            cerr << "Couldn't open file!" << endl;
        }

}




int Grafo::getOrdemGrafo()
{
    return listaNos.size();
}

bool Grafo::grafoTrivial()
{
    if(listaNos.size() == 1){
        if(listaNos[0].listaAresta.size() == 0 )
            return true;
    }
    return false;
}
bool Grafo::grafoNulo()
{
    if(listaNos.size() == 0 ){
        return true;
    } else {
        return false;
    }
}

void Grafo::printSequenciaGraus()
{
    for (std::vector<No>::iterator it = listaNos.begin(); it != listaNos.end(); ++it) {
            cout << it->getGrau() << " ";
    }
    cout <<""<<endl;
}

int Grafo::getGrauNo(int id)
{
    for (std::vector<No>::iterator it = listaNos.begin(); it != listaNos.end(); ++it) {
         if( it->getID() == id )
                 return it->getGrau();
    }
    return -1;
}

bool Grafo::grafoEKRegular(int k)
{
    for (std::vector<No>::iterator it = listaNos.begin(); it != listaNos.end(); ++it) {
                if(it->getGrau()!=k)
                    return false;
    }
    return true;
}

void Grafo::mostrarVizinhacaAberta(int id)
{
    int i=0;
    for (std::vector<No>::iterator it = listaNos.begin(); it != listaNos.end(); ++it, i++) {
         if( it->getID() == id ) // vai na lista de adjacência do nó
         {
            for(std::vector<Aresta>::iterator a = listaNos[i].listaAresta.begin(); a != listaNos[i].listaAresta.end(); ++a)
                cout << a->getIDNo() << endl;
         }
         // Percorre as outras arestas para saber os outros vizinhos do no procurado
    }
}

void Grafo::mostrarVizinhacaFechada(int id)
{
    int i=0;
    cout << id << endl;
    for (std::vector<No>::iterator it = listaNos.begin(); it != listaNos.end(); ++it, i++) {
         if( it->getID() == id )
         {
            for(std::vector<Aresta>::iterator a = listaNos[i].listaAresta.begin(); a != listaNos[i].listaAresta.end(); ++a)
                cout << a->getIDNo() << endl;
         }
    }


}

bool Grafo::multigrafo()
{
    // verifica se o grafo é um multigrafo;

    int ord = getOrdemGrafo();
    int grau, id, idviz;
    No no = No();
    Aresta t = Aresta();

    for(int i = 0; i < ord; i++) {
        no = listaNos[i];
        id = no.getID();
        grau = no.getGrau();
        int *A = new int[grau];
        for(int j = 0; j < grau; j++) { // Para cada nó, analisar todas as arestas;
            t = no.listaAresta[j];
            if(t.getArco()) // Se alguma aresta for arco,
                return false; // tem aresta direcionada
            idviz = t.getIDNo();
            if(idviz == id) // Se alguma aresta tiver id igual ao do no em questão,
                return false; // é self-loop
            for(int k = j-1; k >= 0; k--) {
                if(A[k] == idviz) {
                    // Se o vetor A tem elementos repetidos,
                    // existe mais de uma aresta ligando os mesmos nós (multiarestas);
                    return true; // tem multiaresta
                }
            }
            // Se não, fazer o mesmo para o próximo nó da lista;
            A[j] = idviz; // Armazena os ids das arestas em um vetor A;
        }
        delete A;
    }
    // Ao final da lista, se todos os nós forem verificados,
    // siginifica que não existem multiarestas. O grafo não é
    // multigrafo.
    return false;
}

bool Grafo::grafoCompleto()
{
    if(multigrafo())
        return false;

    int N = getOrdemGrafo();
    int num_arestas = 0;
    for(int i = 0; i < N; i++) {
        num_arestas += listaNos[i].getGrau();
    }
    if(num_arestas == N*(N-1)) //seria N(N-1)/2, mas o num_arestas está sendo incrementado duas vezes a cada aresta
        return true;
    return false;
}

void Grafo::removeAresta(int id1,int id2)
{
    if(noEstaNoGrafo(id1) && noEstaNoGrafo(id2)){
        if(vizinho(id1,id2)){
        for (std::vector<No>::iterator it = listaNos.begin(); it != listaNos.end(); ++it) {
             if( it->getID() == id1 )
                    it->removeAresta(id2,false);
             if( it->getID() == id2)
                    it->adicionaAresta(id1,false);
        }
           }

    } else {
         cout << "Nao e possivel remover aresta devido aos nos nao existirem" << endl;
    }

}




void Grafo::adicionaAresta(int id1, int id2, float peso)
{
    if(noEstaNoGrafo(id1) && noEstaNoGrafo(id2)){
        for (std::vector<No>::iterator it = listaNos.begin(); it != listaNos.end(); ++it) {
             if( it->getID() == id1 )
                    it->adicionaAresta(id2,false,peso);
             if( it->getID() == id2)
                    it->adicionaAresta(id1,false,peso);
        }
    } else {
        cout << "Nao e possivel adcionar aresta devido aos nos nao existirem" << endl;
    }
}

bool Grafo::vizinho(int id1, int id2)
{
    for (std::vector<No>::iterator it = listaNos.begin(); it != listaNos.end(); ++it){
        if(it->getID() == id1 ){
            return it->eVizinho(id2);
        }
        if(it->getID() == id2 ){
            return it->eVizinho(id1);
        }
    }
    return false;
}

bool Grafo::tenta2ColorirGrafo(int id, int colorArr[] ){
    colorArr[id] = 1;

    //cria uma fila para realizar a bsuca em largura
    queue <int> q;
    q.push(id);


    while (!q.empty())
    {
        //tira o primeiro elemento da fila
        int u = q.front();
        q.pop();

        // Return false if there is a self-loop

        if (vizinho(u,u))
           return false;

         // Find all non-colored adjacent vertices
        for (int v = 1; v <= listaNos.size(); ++v)
        {
            // Se u e v são vizinhos e
            // o n[o v não está colorido
            if(vizinho(u,v) && colorArr[v] == -1)
            {
                // Assign alternate color to this
                // adjacent v of u
                colorArr[v] = 1 - colorArr[u];
                q.push(v);
            }

            // Se u e v são vizinhos e
            // o no v  está colorido com a mesma coir de u
            else if(vizinho(u,v) && colorArr[v] == colorArr[u])
                return false;
        }
    }


    return true;

}

bool Grafo::bipartido()
{
    int V = listaNos.size();
    int colorArr[V+1];
    for (int i = 1; i <= V; ++i)
        colorArr[i] = -1;

    // O loop a seguir fara a busca em largura para verificar a bipartilidade
    // o Algoritmo tenta colorir o grafo com 2 cores, se conseguir o grafo é bipartido.
    for (int i = 1; i <= V; i++)
      if (colorArr[i] == -1)
        if (tenta2ColorirGrafo(i, colorArr) == false)
           return false;

     return true;

}

void Grafo::acharCliqueMaxima1()
{

    sort(listaNos.begin(),listaNos.end()); // Ordena nós pelo grau com base no operator < definido em No.h
    vector <No> nosNaSolucao;
    nosNaSolucao.push_back(*listaNos.begin());
    for(vector <No>::iterator it = (listaNos.begin() + 1); it != listaNos.end() ; it++ ){
        bool e_vizinho = true;
        for(vector <No>::iterator n = nosNaSolucao.begin(); n != nosNaSolucao.end() ; n++)
            if(!vizinho(it->getID(),n->getID())){
                e_vizinho = false;
                break;
            }
            if(e_vizinho){
                nosNaSolucao.push_back(*it);
            }
        }

       cout << nosNaSolucao.size() << endl;

}

void Grafo::acharCliqueMaxima(float alfa, int maxIteracoes)
{
    srand(time(0)); // Inicia semente de randomização
    sort(listaNos.begin(),listaNos.end()); // Ordena nós pelo grau com base no operator < definido em No.h
    vector <No> currentSolution; // Para guardar a solução correspondente a cada iteração
    vector <No> bestSolution; // Para guardar a melhor solução
    vector <No> listaCandidatos; // Para guardar os nós candidatos
    int aux = 0; // var auxiliar para calcularmos o indice aleatório da lista de Candidatos
    int i = 0, j =0;

    bestSolution.push_back(listaNos[0]);

    while(i < maxIteracoes) {
    listaCandidatos = listaNos;
        bool e_vizinho = true;

        while(listaCandidatos.size() > 0){

            aux = (int)ceil(listaCandidatos.size() * alfa);

            j = rand() % aux;

            if(formaClique(currentSolution,listaCandidatos[j] ))
                currentSolution.push_back(listaCandidatos[j]);

           listaCandidatos.erase(listaCandidatos.begin() + j);

        }

        if(currentSolution.size() > bestSolution.size()){

           bestSolution = currentSolution;
        }
        currentSolution.clear();
        i++;
     }
     cout << bestSolution.size();
}

bool Grafo::formaClique(vector<No>nosNaSolucao, No noCandidato)
{
     for(vector <No>::iterator n = nosNaSolucao.begin(); n != nosNaSolucao.end() ; n++)
            if(!vizinho(n->getID(),noCandidato.getID())){
                return false;
            }
     return true;

}


bool Grafo::verificaSolucao(vector<No> nosNaSolucao)
{
    for(int i=0;i<nosNaSolucao.size();i++)
        for(int j=i+1;j<nosNaSolucao.size();j++){
            if(!vizinho(i,j)){
                return false;
            }
    }
    return true;
}
