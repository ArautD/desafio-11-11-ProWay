#ifndef PERSONAGEM_H
#define PERSONAGEM_H

#include <string>
using namespace std;

class Personagem {
    private:
        string nome;
        string tipo;
        double vida;
        double forca;

    public:
        Personagem(string n, string t, double v, double f);

        void atacar();
        void receberDano();
        void exibirStatus();

        int getVida();
        int getForca();
};
#endif