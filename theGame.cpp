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
    do
    {
    cout << endl << "-------Ronda Nro: " << ronda << "-------" << endl;
    int dadoBloqueado1, dadoBloqueado2;
    int dadosNormales [5]{};
    calcularDadosBloqueados();
    calcularDadosNormales (dadosNormales, 5);
    mostrarDados(dadosNormales, 5);
    sumarDados(dadoBloqueado1, dadoBloqueado2, dadosNormales, 5);
    ronda++;
    }
    while(ronda != 4);
};
void pedirNombre(){
    string nombre;
    cout << "Ingrese su nombre: ";
    cin >> nombre;
};

int tirarDados(){
    return rand() % 6 + 1;
};
void calcularDadosBloqueados(){ ///Generadores de los dados bloqueados
        int dadoBloqueado1, dadoBloqueado2;
        dadoBloqueado1 = tirarDados();
        dadoBloqueado2 = tirarDados();
        cout << "Los dados bloqueados son: ";
        cout << dadoBloqueado1 << " y " << dadoBloqueado2;
        cout << endl;
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
void sumarDados(int dadoBloquado1,int dadoBloquado2, int dadosNormales[], int cantidad){ ///No funciona todavia
    int i,puntosRonda=0;
    for (i=0; i<cantidad; i++){
        if (dadosNormales[i] == dadoBloquado1 || dadosNormales[i] == dadoBloquado2){
            dadosNormales[i] = 0;
        }
        puntosRonda += dadosNormales[i];
    }
    cout << "La suma total de dados es de " << puntosRonda << endl;
};
void creditos(){ /// Nada mas que los creditos del juego, es decir, quienes lo programaron
    cout << "MUCHAS GRACIAS POR JUGAR NUESTRO JUEGO" << endl;
    cout << "   ESTE JUEGO FUE REALIZADO POR...    " << endl;
    cout << "Damian Ezequiel Ramos, legajo 31117" << endl;
    cout << "";
}
