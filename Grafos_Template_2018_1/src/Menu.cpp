#include "../headers/bibliotecas.h"

using namespace std;




Menu::Menu(Grafo grafo)
{
    grafoUsado = grafo;
}

void Menu::printText(string texto){
    cout << texto << endl;
}

void Menu::letraA()
{
    printText("Digite o endereco do arquivo");
    string path;
    cin >> path;
    grafoUsado.readFile(path);
    printText("Arquivo lido com sucesso");
    this->iniciate();
}
void Menu::letraB()
{
    printText("Deseja fazer a opera��o com n� ou com aresta?");
    string resposta;
    cin >> resposta;
    if (resposta == "no")
    {
        printText("Deseja remover ou adicionar um no?");
        string resposta2;
        cin >> resposta2;
        if (resposta2 == "remover")
        {
            printText("Qual o id do n� a ser retirado?");
            int id;
            cin >> id;
            grafoUsado.removerNo(id);
            printText("N� removido com sucesso!");
        }
        else
        {
            printText("Qual o id do n� a ser adicionado?");
            int id;
            cin >> id;
            printText("Qual o peso do n� a ser adicionado?");
            float peso;
            cin >> peso;
            grafoUsado.adcionarNo(id, peso);
            printText("N� adicionado com sucesso!");
        }
    }
    else
    {
        printText("A partir de qual n� se deseja fazer a opera��o? (digite o id do n�)");
        int idNo;
        cin >> idNo;
        printText("Deseja remover ou adicionar uma aresta?");
        string resposta2;
        cin >> resposta2;
        if (resposta2 == "remover")
        {
            //
        }
        else
        {
            //
        }
    }
    this->iniciate();
}
void Menu::letraC()
{
    printText("De qual n� se quer saber o grau? (Digite o id do n�)");
    int id;
    cin >> id;
    int grau = grafoUsado.getGrauNo(id);
    //Fazer a verifica��o para digrafo
    cout << "Grau: " << grau << endl;
    this->iniciate();
}
void Menu::letraD()
{
    printText("Qual o K para se saber a K-regularidade?");
    int k;
    cin >> k;
    if (grafoUsado.grafoEKRegular(k))
    {
        cout << "� " << k << "-regular" << endl;
    }
    else
    {
        cout << "N�o � " << k << "-regular" << endl;
    }
    this->iniciate();
}
void Menu::letraE()
{
    int ordem = grafoUsado.getOrdemGrafo();
    cout << "O grafo � de ordem " <<ordem << endl;
    this->iniciate();
}
void Menu::letraF()
{
    if(grafoUsado.grafoTrivial())
    {
        printText("� trivial");
    }
    else
    {
        printText("N�o � trivial");
    }
    this->iniciate();
}
void Menu::letraG()
{
    if(grafoUsado.grafoNulo())
    {
        printText("� nulo");
    }
    else
    {
        printText("N�o � nulo");
    }
    this->iniciate();
}
void Menu::letraH()
{
    printText("Qual n� se quer saber a vizinhan�a aberta? (Digite o id do n�)");
    int id;
    cin >> id;
    grafoUsado.mostrarVizinhacaAberta(id);
    this->iniciate();
}
void Menu::letraI()
{
    printText("Qual n� se quer saber a vizinhan�a fechada? (Digite o id do n�)");
    int id;
    cin >> id;
    grafoUsado.mostrarVizinhacaFechada(id);
    this->iniciate();
}
void Menu::letraJ()
{
    if(grafoUsado.multigrafo())
    {
        printText("� multigrafo");
    }
    else
    {
        printText("N�o � multigrafo");
    }
    this->iniciate();
}
void Menu::letraK()
{
    if(grafoUsado.grafoCompleto())
    {
        printText("� completo");
    }
    else
    {
        printText("N�o � completo");
    }
    this->iniciate();
}
void Menu::letraL()
{
    if(grafoUsado.bipartido())
    {
        printText("� bipartido");
    }
    else
    {
        printText("N�o � bipartido");
    }
    this->iniciate();
}
void Menu::letraM()
{
    grafoUsado.printSequenciaGraus();
    this->iniciate();
}




void Menu::iniciate(){
    int num = 1;
    cout << "**------------------------**" << endl;
    printText("Digite 1 para ler arquivo");
    printText("Digite 2 para add or excluir no ou aresta");
    printText("Digite 3 para retornar grau de um no");
    printText("Digite 4 para verificar a k-regularidade de um grafo");
    printText("Digite 5 para retornar a ordem de um grafo");
    printText("Digite 6 para checar se um grafo � trivial");
    printText("Digite 7 para checar se um grafo � nulo");
    printText("Digite 8 para mostrar a vizinhan�a aberta de um n�");
    printText("Digite 9 para mostrar a vizinhan�a fechada de um n�");
    printText("Digite 10 para checar se o grafo � multigrafo");
    printText("Digite 11 para checar se o grafo � completo");
    printText("Digite 12 para checar se o grafo � bipartido");
    printText("Digite 13 para imprimir a sequencia de grau do vertice");
    cout << "**------------------------**" << endl;
    while(num!= 0){
            cin >> num;
        switch (num){
            case 1:
              letraA();
                break;
            case 2:
               letraB();
                break;
            case 3:
               letraC();
                break;
            case 4:
               letraD();
                break;
            case 5:
           letraE();
                break;
            case 6:
              letraF();
                break;
            case 7:
               letraG();
                break;
            case 8:
              letraH();
                break;
            case 9:
                letraI();
                break;
            case 10:
                letraJ();
                break;
            case 11:
               letraK();
                break;
            case 12:
                letraL();
                break;
            case 13:
               letraM();
                break;
            case 0:
                cout << "Finalizando Programa" << endl;
                break;
            default:
                cout << "Opcao Invalida" << endl;

        }
    }
}

Menu::~Menu()
{
    //dtor
}
