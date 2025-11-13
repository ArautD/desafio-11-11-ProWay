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
std::string Personagem::getNome(){
    return nome;
}

//funcao para criar personagem
Personagem criarPersonagem(){
    std::string nome, tipo;
    double vida, forca;
    int ca;

    cout << "\n ===== Criar Personagem =====" << endl;
    cout << "Digite o nome do personagem: ";
    cin >> nome;
    cout << "\n1. Guerreiro\n2. Mago\n3. Arqueiro\nEscolha uma classe: ";
    cin >> tipo;
    cout << "Digite a vida do personagem: ";
    cin >> vida;
    cout << "Digite a força do personagem: ";
    cin >> forca;
    cout << "Digite a armadura (CA) do personagem: ";
    cin >> ca;

    Personagem novo(nome, tipo, vida, forca, ca);
    cout << "Personagem " << nome << " criado com sucesso!" << endl;
    novo.exibirStatus();
    return novo;
}
Personagem Personagem::criarBoss(){
    return Personagem("Boss", "Dragão", 150, 10, 25.0);
}
Personagem iniciarBatalha(Personagem& p1, Personagem& p2){
    cout << "\n ===== Iniciando Batalha =====" << endl;
    while (p1.getVida() > 0 && p2.getVida() > 0) {
        p1.atacar();
        p2.receberDano(p1.getForca());
        if (p2.getVida() <= 0) {
            cout << p2.getNome() << " foi derrotado!" << endl;
            break;
        }

        p2.atacar();
        p1.receberDano(p2.getForca());
        if (p1.getVida() <= 0) {
            cout << p1.getNome() << " foi derrotado!" << endl;
            break;
        }
    }
    return p1.getVida() > 0 ? p1 : p2;
}

Personagem receberDano(Personagem &p, int dano){
    p.receberDano(dano);
    return p;
}

Personagem exibirStatusPersonagem(Personagem& p){
    cout << "\n ===== Status do Personagem =====" << endl;
    p.exibirStatus();
    return p;
}