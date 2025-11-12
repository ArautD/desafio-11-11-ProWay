#include "personagem.h"
#include <iostream>
using namespace std;

Personagem::Personagem(string n, string t, double v, int c, double f) { 
    nome = n;
    tipo = t;
    vida = v;
    ca = c;
    forca = f;
}

void Personagem::atacar() {
    cout << nome << " do tipo " << tipo << " atacou com força " << forca << "!" << endl;
}

void Personagem::receberDano(int dano) {  
    int danoFinal = dano - ca;
    if (danoFinal < 0) danoFinal = 0;

    vida -= dano;
    if (vida < 0) vida = 0;

    cout << nome << "recebeu " << danoFinal << " de dano (graças a sua armadura). \nVida restante: " << vida << endl;
}

void Personagem::exibirStatus(){
    cout << "Nome: " << nome << "\nTipo: " << tipo << "\nVida: " << vida << "\nArmadura: "<< ca << "\nForça: " << forca << endl;
}

int Personagem::getVida() {
    return vida;
}

int Personagem::getForca(){
    return forca;
}