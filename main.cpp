#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#include "menu.h"
#include "personagem.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    execMenuPrinciapl();
    
    Personagem boss = Personagem::criarBoss();
    return 0;
}