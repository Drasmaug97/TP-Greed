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
    system("cls"); ///Limpia la pantalla cada vez que se vuelve al menu

    opcion = seleccionMenu();
    opcionElegida(opcion);

    system("pause"); /// hace una pausa antes de finalizar o reiniciar
    }
    while(opcion != 0);

    return 0;
}
