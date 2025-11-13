#include "menu.h"

void menuPrincipal() {
    std::cout << "===== Menu Principal =====" << std::endl;
    std::cout << "1. JOKENPO and Dungeons" << std::endl; //classe Personagem
    std::cout << "2. DIGITAL PET" << std::endl; //Clase petVirtual
    std::cout << "3. Playlist" << std::endl; //Classe PlaylistMusical
    std::cout << "4. Diario dos Segredos" << std::endl; //Classe Diario Secreto (senha)
    std::cout << "5. Lâmpada" << std::endl; //Classe Lâmpada
    std::cout << "6. Ajudante3000" << std::endl; //Classe Robô
    std::cout << "0. Sair" << std::endl;
    std::cout << "================\nOpcão Selecionada: ";
}

void execMenuPrinciapl() {
    int opcao = 0;
    bool rodando = true;

    while (rodando) {
        menuPrincipal();
        std::cin >> opcao;

        switch (opcao) {
            case 1:
                menuJokenpoAndDungeons();
                break;
            case 2:
                menuDigitalPet();
                break;
            case 3:
                menuPlaylist();
                break;
            case 4:
                menuDiarioSecreto();
                break;
            case 5:
                menuLampada();
                break;
            case 6:
                menuAjudante3000();
                break;
            case 0:
                std::cout << "Saindo do programa. Até mais!" << std::endl;
                rodando = false;
                break;
            default:
                std::cout << "Opção inválida. Tente novamente." << std::endl;
        }
    }
}

void menuJokenpoAndDungeons() {
    std::cout << "===== JOKENPO and Dungeons =====" << std::endl;
    std::cout << "1. Criar Personagem" << std::endl;
    std::cout << "2. Exibir Status" << std::endl;
    std::cout << "3. Batalha" << std::endl;
    std::cout << "5. Voltar ao Menu Principal" << std::endl;
    std::cout << "================\nOpcão Selecionada: ";
}

void menuDigitalPet() {
    std::cout << "===== DIGITAL PET =====" << std::endl;
    std::cout << "1. Alimentar Pet" << std::endl;
    std::cout << "2. Brincar com Pet" << std::endl;
    std::cout << "3. Exibir Status do Pet" << std::endl;
    std::cout << "4. Voltar ao Menu Principal" << std::endl;
    std::cout << "================\nOpcão Selecionada: ";
}

void menuPlaylist() {
    std::cout << "===== Playlist Musical =====" << std::endl;
    std::cout << "1. Adicionar Música" << std::endl;
    std::cout << "2. Próxima Música" << std::endl;
    std::cout << "3. Música Atual" << std::endl;
    std::cout << "4. Voltar ao Menu Principal" << std::endl;
    std::cout << "================\nOpcão Selecionada: ";
}

void menuDiarioSecreto() {
    std::cout << "===== Diario dos Segredos =====" << std::endl;
    std::cout << "1. Escrever" << std::endl;
    std::cout << "2. Ler Diário" << std::endl;
    std::cout << "3. Voltar ao Menu Principal" << std::endl;
    std::cout << "================\nOpcão Selecionada: ";
}

void menuLampada() {
    std::cout << "===== Lâmpada =====" << std::endl;
    std::cout << "1. Ligar ou Desligar Lâmpada" << std::endl;
    std::cout << "2. Trocar Cor da Lâmpada" << std::endl;
    std::cout << "3. Ver Estado da Lâmpada" << std::endl;
    std::cout << "4. Voltar ao Menu Principal" << std::endl;
    std::cout << "================\nOpcão Selecionada: ";
}

void menuAjudante3000() {
    std::cout << "===== Ajudante3000 =====" << std::endl;
    std::cout << "1. Executar Tarefa" << std::endl;
    std::cout << "2. Recarregar" << std::endl;
    std::cout << "3. Status de Energia" << std::endl;
    std::cout << "4. Voltar ao Menu Principal" << std::endl;
    std::cout << "================\nOpcão Selecionada: ";
}