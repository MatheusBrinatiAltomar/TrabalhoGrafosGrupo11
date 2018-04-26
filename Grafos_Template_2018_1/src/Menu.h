#ifndef MENU_H
#define MENU_H
#include <string>
using namespace std;
class Menu
{
    public:
        Menu();
        virtual ~Menu();
        void printText(string texto);
        void iniciate();
    protected:

    private:
};

#endif // MENU_H
