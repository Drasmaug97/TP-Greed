#include <iostream>
#include <ctime>
#include "menu.h"
using namespace std;

int main()
{
    int opcion;
    srand(time(0));

    do
    {
    system("cls");

    opcion = seleccionMenu();
    opcionElegida(opcion);

    system("pause");
    }
    while(opcion != 0);

    return 0;
}
