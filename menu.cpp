#include "menu.h"
#include "personagem.h"

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
    int opcao = 0;
    do{
        std::cout << "===== JOKENPO and Dungeons =====" << std::endl;
        std::cout << "1. Criar Personagem" << std::endl;
        std::cout << "2. Exibir Status" << std::endl;
        std::cout << "3. Batalha" << std::endl;
        std::cout << "0. Voltar ao Menu Principal" << std::endl;
        std::cout << "================\nOpcão Selecionada: ";
        std::cin >> opcao;

        switch (opcao){
            case 1:
                criarPersonagem();
                break;
            case 2:
                exibirStatusPersonagem();
                break;
            case 3:
                iniciarBatalha();
                break;
            case 0:
                std::cout << "Voltando ao Menu Principal." << std::endl;
                break;

            default:
                std::cout << "Opção inválida. Tente novamente." << std::endl;
        }
    } while (opcao != 0);
}

void menuDigitalPet() {
    int opcao = 0;
    do{
        std::cout << "===== DIGITAL PET =====" << std::endl;
        std::cout << "1. Alimentar Pet" << std::endl;
        std::cout << "2. Brincar com Pet" << std::endl;
        std::cout << "3. Exibir Status do Pet" << std::endl;
        std::cout << "0. Voltar ao Menu Principal" << std::endl;
        std::cout << "================\nOpcão Selecionada: ";
        std::cin >> opcao;

         switch (opcao) {
        case 1:
            alimentarPet();
            break;
        case 2:
            brincarComPet();
            break;
        case 3:
            exibirStatusPet();
            break;
        case 0:
            std::cout << "Voltando ao Menu Principal." << std::endl;
            break;
        default:
            std::cout << "Opção inválida. Tente novamente." << std::endl;
    }
    } while (opcao != 0);
}

void menuPlaylist() {
    int opcao = 0;
    do{
        std::cout << "===== Playlist Musical =====" << std::endl;
        std::cout << "1. Adicionar Música" << std::endl;
        std::cout << "2. Próxima Música" << std::endl;
        std::cout << "3. Música Atual" << std::endl;
        std::cout << "0. Voltar ao Menu Principal" << std::endl;
        std::cout << "================\nOpcão Selecionada: ";/* code */
        std::cin >> opcao;
        
        switch (opcao) {
        case 1:
            adicionarMusica();
            break;
        case 2:
            proximaMusica();
            break;
        case 3:
            musicaAtual();
            break;  
        case 0:
            std::cout << "Voltando ao Menu Principal." << std::endl;
            break;
        default:
            std::cout << "Opção inválida. Tente novamente." << std::endl;
        } 
    } while (opcao != 0);
}

void menuDiarioSecreto() {
    int opcao = 0;
    do{
        std::cout << "===== Diario dos Segredos =====" << std::endl;
        std::cout << "1. Escrever" << std::endl;
        std::cout << "2. Ler Diário" << std::endl;
        std::cout << "0. Voltar ao Menu Principal" << std::endl;
        std::cout << "================\nOpcão Selecionada: ";
        std::cin >> opcao;

        switch (opcao) {
        case 1:
            escreverDiario();
            break;
        case 2:
            lerDiario();
            break;
        case 0:
            std::cout << "Voltando ao Menu Principal." << std::endl;
            break;
        default:
            std::cout << "Opção inválida. Tente novamente." << std::endl;
        } 
    } while (opcao != 0);    
}

void menuLampada() {
    int opcao = 0;
    do {
        std::cout << "===== Lâmpada =====" << std::endl;
        std::cout << "1. Ligar ou Desligar Lâmpada" << std::endl;
        std::cout << "2. Trocar Cor da Lâmpada" << std::endl;
        std::cout << "3. Ver Estado da Lâmpada" << std::endl;
        std::cout << "0. Voltar ao Menu Principal" << std::endl;
        std::cout << "================\nOpcão Selecionada: ";
        std::cin >> opcao;

        switch (opcao)
        {
        case 1:
            ligarDesligarLampada();
            break;
        case 2:
            trocarCorLampada();
        case 3:
            verEstadoLampada();
            break;
        case 0:
            std::cout << "Voltando ao Menu Principal." << std::endl;
        default:
            std::cout << "Opção inválida. Tente novamente." << std::endl;
            break;
        }
    } while (opcao != 0);
    
}

void menuAjudante3000() {
    int opcao = 0;
    do {
        std::cout << "===== Ajudante3000 =====" << std::endl;
        std::cout << "1. Executar Tarefa" << std::endl;
        std::cout << "2. Recarregar" << std::endl;
        std::cout << "3. Status de Energia" << std::endl;
        std::cout << "0. Voltar ao Menu Principal" << std::endl;
        std::cout << "================\nOpcão Selecionada: ";
        std::cin >> opcao;

        switch (opcao){
        case 1:
            executarTarefa();
            break;
        case 2:
            recarregarAjudante();
            break;
        case 3:
            statusEnergiaAjudante();
            break;
        case 0:
            std::cout << "Voltando ao Menu Principal." << std::endl;
        default:
            std::cout << "Opção inválida. Tente novamente." << std::endl;
        }
    } while (opcao != 0);
    
}