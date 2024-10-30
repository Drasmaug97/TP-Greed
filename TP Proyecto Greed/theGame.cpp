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
    calcularDadosBloqueados(dadoBloqueado1, dadoBloqueado2);
    calcularDadosNormales (dadosNormales, 5);
    mostrarDados(dadoBloqueado1, dadoBloqueado2, dadosNormales, 5);
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
void calcularDadosBloqueados(int dadoBloqueado1, int dadoBloqueado2){ ///Generadores de los dados bloqueados
        dadoBloqueado1 = rand() % 6 + 1;
        dadoBloqueado2 = rand() % 6 + 1; ///No funciona pero hay que generarlos por separado para la suma de puntos (ir a sumarDados)
};

void calcularDadosNormales(int dadosNormales[], int cantidad){ ///Generador de los dados que se van a jugar
    for (int i=0; i<cantidad; i++){
        dadosNormales[i] = rand() % 6 + 1;
    }
};

void mostrarDados(int dadoBloqueado1, int dadoBloqueado2, int dadosNormales[], int cantidad){ ///Muestra los dados tanto bloqueados como los que se juegan
    cout << "Los dados bloqueados son: ";
    cout << dadoBloqueado1 << " y " << dadoBloqueado2;
    cout << endl;

    cout << "Se juegan los dados: ";
    for (int i=0; i<5; i++){
        cout << dadosNormales[i] << " ";
    }
    cout << endl;
};
void sumarDados(int dadoBloquado1,int dadoBloquado2, int dadosNormales[], int cantidad){ ///No funciona todavia
    int sumaDados=0;
    ///Hay que usar un IF para comparar los dados normales y que no contengan los bloqueados
    ///Despues hay que sumar el resto, una vez hecho eso continuamos con el resto de los parametros
    cout << "La suma total de dados es de " << sumaDados << endl;
};
void creditos(){ /// Nada mas que los creditos del juego, es decir, quienes lo programaron
    cout << "MUCHAS GRACIAS POR JUGAR NUESTRO JUEGO" << endl;
    cout << "   ESTE JUEGO FUE REALIZADO POR...    " << endl;
    cout << "Damian Ezequiel Ramos, legajo 31117" << endl;
    cout << "";
}
