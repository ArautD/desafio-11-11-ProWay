#ifndef PERSONAGEM_H
#define PERSONAGEM_H

#include <string>
using namespace std;

class Personagem {
    private:
        string nome;
        string tipo;
        double vida;
        int ca;
        double forca;

    public:
        Personagem(string n, string t, double v, int c, double f);
        static Personagem criarBoss();

        void atacar();
        void receberDano(int dano);
        void exibirStatus();

        int getVida();
        int getForca();
        std::string getNome();
};
#endif