#include<iostream>
#include "menu.h"
#include "theGame.h"
using namespace std;

int seleccionMenu(){
    int opcion;

    cout << endl << "GREED" << endl;
    cout << "-----------------------" << endl;
    cout << "1 - MODO UN JUGADOR" << endl;
    cout << "2 - MODO DOS JUGADORES"<< endl;
    cout << "3 - ESTADISTICAS"<< endl;
    cout << "4 - CREDITOS"<< endl;
    cout << "-----------------------"<< endl;
    cout << "0 - SALIR"<< endl;
    cout << endl;
    cout << "SELECCIONE UN OPCION: ";
    cin >> opcion;

return opcion;
}

void opcionElegida(int opcion){

    switch (opcion){
    case 1:
        unJugador();
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        creditos();
        break;
    case 0:
        cout << "Esto es todo amigos!!" << endl;
        break;
    }
};
