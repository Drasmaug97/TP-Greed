#include<iostream>
#include "theGame.h"
using namespace std;

void unJugador(){

    int dadosBloqueados [2];
    int dadosNormales [5];
    calcularDadosBloqueados(dadosBloqueados, 2);
    calcularDadosNormales (dadosNormales, 5);
    mostrarDados(dadosBloquados, 2, dadosNormales, 5); ///PROBLEMAS AL MOSTRAR
};

void calcularDadosBloqueados(int dadosBloqueados[], int cantidad){
    for (int i=0; i<cantidad; i++){
        dadosBloqueados[i] = rand() % 6 + 1;
    }
};

void calcularDadosNormales(int dadosNormales[], int cantidad){
    for (int i=0; i<cantidad; i++){
        dadosNormales[i] = rand() % 6 + 1;
    }
};

void mostrarDados(int dadosBloquados[],int cantidad, int dadosNormales[], int cantidad2){
    cout << "Los dados bloqueados son: ";
    for (int i=0; i<2; i++){
        cout << dadosBloqueados[i] << " ";
    }
    cout << endl;

    cout << "Se juegan los dados: ";
    for (int i=0; i<5; i++){
        cout << dadosNormales[i] << " ";
    }
    cout << endl;
};

void creditos(){
    cout << "MUCHAS GRACIAS POR JUGAR NUESTRO JUEGO" << endl;
    cout << "   ESTE JUEGO FUE REALIZADO POR...    " << endl;
    cout << "Damian Ezequiel Ramos, legajo 31117" << endl;
    cout << "";
    system ("pause");
}
