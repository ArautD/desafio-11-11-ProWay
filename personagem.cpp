#include "personagem.h"
#include <iostream>
using namespace std;

Personagem::Personagem(string n, string t, double v, int f) { 
    nome = n;
    tipo = t;
    vida = v;
    forca = f;
}

void Personagem::atacar() {
    cout << nome << " do tipo " << tipo << " atacou com força " << forca << "!" << endl;
}

void Personagem::receberDano() {
    double dano = forca * 0.1; 
    vida -= dano;
    if (vida < 0) vida = 0;
    cout << nome << "recebeu " << dano << " de dano. \nVida restante: " << vida << endl;
}

void Personagem::exibirStatus(){
    cout << "Nome: " << nome << "\nTipo: " << tipo << "\nVida: " << vida << "\nForça: " << forca << endl;
}

int Personagem::getVida() {
    return vida;
}

int Personagem::getForca(){
    return forca;
}