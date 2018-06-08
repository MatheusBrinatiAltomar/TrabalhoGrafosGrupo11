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
    printText("Digite o endereco do arquivo para salvar grafo");
        string path;
        cin >> path;
        grafoUsado.writeFile(path);
        this->iniciate();
    }

void Menu::letraB()
{
    printText("Deseja fazer a operação com no ou com aresta?");
    string resposta;
    cin >> resposta;
    if (resposta == "no")
    {
        printText("Deseja remover ou adicionar um no?");
        string resposta2;
        cin >> resposta2;
        if (resposta2 == "remover")
        {
            printText("Qual o id do no a ser retirado?");
            int id;
            cin >> id;
            grafoUsado.removerNo(id);
            printText("No removido com sucesso!");
        }
        else
        {
            printText("Qual o id do no a ser adicionado?");
            int id;
            cin >> id;
            printText("Qual o peso do no a ser adicionado?");
            float peso;
            cin >> peso;
            grafoUsado.adcionarNo(id, peso);
            printText("No adicionado com sucesso!");
        }
    }
    else
    {
        printText("Deseja remover ou adicionar uma aresta?");
        string resposta2;
        cin >> resposta2;
        if (resposta2 == "remover")
        {
            int idNo1;
            int idNo2;
            printText("quer fazer a remocao entre quais nos?");
            printText("Digite id primeiro no");
            cin >> idNo1;
            printText("Digite id segundo no");
            cin >> idNo2;
            grafoUsado.removeAresta(idNo1,idNo2);
        }
        else
        {
            int idNo1;
            int idNo2;
            float peso;
            printText("quer fazer a adicao entre quais nos?");
            printText("Digite id primeiro no");
            cin >> idNo1;
            printText("Digite id segundo no");
            cin >> idNo2;
            printText("Digite peso da aresta");
            cin >> peso;
            grafoUsado.adicionaAresta(idNo1,idNo2,peso);
        }
    }
    this->iniciate();
}
void Menu::letraC()
{
    printText("De qual no se quer saber o grau? (Digite o id do no)");
    int id;
    cin >> id;
    int grau = grafoUsado.getGrauNo(id);
    //Fazer a verificação para digrafo
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
        cout << "E " << k << "-regular" << endl;
    }
    else
    {
        cout << "Não e " << k << "-regular" << endl;
    }
    this->iniciate();
}
void Menu::letraE()
{
    int ordem = grafoUsado.getOrdemGrafo();
    cout << "O grafo e de ordem " <<ordem << endl;
    this->iniciate();
}
void Menu::letraF()
{
    if(grafoUsado.grafoTrivial())
    {
        printText("E trivial");
    }
    else
    {
        printText("Não e trivial");
    }
    this->iniciate();
}
void Menu::letraG()
{
    if(grafoUsado.grafoNulo())
    {
        printText("E nulo");
    }
    else
    {
        printText("Não e nulo");
    }
    this->iniciate();
}
void Menu::letraH()
{
    printText("Qual no se quer saber a vizinhanca aberta? (Digite o id do no)");
    int id;
    cin >> id;
    grafoUsado.mostrarVizinhacaAberta(id);
    this->iniciate();
}
void Menu::letraI()
{
    printText("Qual no se quer saber a vizinhanca fechada? (Digite o id do no)");
    int id;
    cin >> id;
    grafoUsado.mostrarVizinhacaFechada(id);
    this->iniciate();
}
void Menu::letraJ()
{
    if(grafoUsado.multigrafo())
    {
        printText("E multigrafo");
    }
    else
    {
        printText("Nao e multigrafo");
    }
    this->iniciate();
}
void Menu::letraK()
{
    if(grafoUsado.grafoCompleto())
    {
        printText("E completo");
    }
    else
    {
        printText("Nao e completo");
    }
    this->iniciate();
}
void Menu::letraL()
{
    if(grafoUsado.bipartido())
    {
        printText("E bipartido");
    }
    else
    {
        printText("Nao e bipartido");
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
    printText("Digite 6 para checar se um grafo é trivial");
    printText("Digite 7 para checar se um grafo é nulo");
    printText("Digite 8 para mostrar a vizinhança aberta de um nó");
    printText("Digite 9 para mostrar a vizinhança fechada de um nó");
    printText("Digite 10 para checar se o grafo é multigrafo");
    printText("Digite 11 para checar se o grafo é completo");
    printText("Digite 12 para checar se o grafo é bipartido");
    printText("Digite 13 para imprimir a sequencia de grau do vertice");
    printText("Digite 0 para finalizar programa");
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
