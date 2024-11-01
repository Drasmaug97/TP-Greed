#include<iostream>
#include "theGame.h"
using namespace std;

void unJugador(){
    int ronda = 1;
    string eleccion = "";
    cout << endl;
    cout << "-----Modo: Un Jugador------" << endl;
    cout << endl;
    pedirNombre();
    int dadoBloqueado1, dadoBloqueado2, puntosRonda;
    int dadosNormales [5]{};
    bool respuesta;
    calcularDadosBloqueados(); ///Transformarlo a un int
    do
    {
    cout << endl << "-------Ronda Nro: " << ronda << "-------" << endl;
    calcularDadosNormales (dadosNormales, 5);
    mostrarDados(dadosNormales, 5); /// Agregar los dados bloqueados
    puntosRonda = sumarDados(dadoBloqueado1, dadoBloqueado2, dadosNormales, 5);
    cout << "Los puntos de la ronda son: " << puntosRonda << endl;
    respuesta = seguirJugando();
    ronda++;
    }
    while(respuesta == true);
};
void pedirNombre(){
    string nombre;
    cout << "Ingrese su nombre: ";
    cin >> nombre;
};

int tirarDados(){
    return rand() % 6 + 1;
};
int calcularDadosBloqueados(){ ///Generadores de los dados bloqueados
        int dadoBloqueado1, dadoBloqueado2;
        dadoBloqueado1 = tirarDados();
        dadoBloqueado2 = tirarDados();
        cout << "Los dados bloqueados son: ";
        cout << dadoBloqueado1 << " y " << dadoBloqueado2;
        cout << endl;
        return dadoBloqueado1 && dadoBloqueado2;
};

void calcularDadosNormales(int dadosNormales[], int cantidad){ ///Generador de los dados que se van a jugar
    for (int i=0; i<cantidad; i++){
        dadosNormales[i] = tirarDados();
    }
};

void mostrarDados( int dadosNormales[], int cantidad){ ///Muestra los dados tanto bloqueados como los que se juegan

    cout << "Se juegan los dados: ";
    for (int i=0; i<5; i++){
        cout << dadosNormales[i] << " ";
    }
    cout << endl;
};
int sumarDados(int dadoBloqueado1,int dadoBloqueado2, int dadosNormales[], int cantidad){ ///Suma todos los dados, hay que discriminar los bloqueados
    int i,puntosRonda=0;
    for (i=0; i<cantidad; i++){
        if (dadosNormales[i] != dadoBloqueado1 && dadosNormales[i] != dadoBloqueado2){
            puntosRonda += dadosNormales[i];
        }
    }
    return puntosRonda;
};
bool seguirJugando(){
    bool respuesta = true;
    string seguir;
    cout << "¿Seguir jugando? (S o N)";
    cin >> seguir;
    if (seguir == "S"){
        respuesta = true;
    }
    else if (seguir == "N"){
        respuesta = false;
    }
    return respuesta;
};
void creditos(){ /// Nada mas que los creditos del juego, es decir, quienes lo programaron
    cout << "MUCHAS GRACIAS POR JUGAR NUESTRO JUEGO" << endl;
    cout << "   ESTE JUEGO FUE REALIZADO POR...    " << endl;
    cout << "Damian Ezequiel Ramos, legajo 31117" << endl;
    cout << "";
}
