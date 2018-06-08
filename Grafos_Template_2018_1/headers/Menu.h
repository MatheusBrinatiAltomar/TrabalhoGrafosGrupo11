#ifndef MENU_H
#define MENU_H
#include "bibliotecas.h"

class Menu
{
    private:
        Grafo grafoUsado;
    public:
        Menu(Grafo grafo);
        ~Menu();
        void printText(string texto);
        void iniciate();
        void letraA();
        void letraB();
        void letraC();
        void letraD();
        void letraE();
        void letraF();
        void letraG();
        void letraH();
        void letraI();
        void letraJ();
        void letraK();
        void letraL();
        void letraM();
    protected:

    private:
};

#endif // MENU_H
