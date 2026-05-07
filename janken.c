#include <stdio.h>
#include <stdlib.h>
#include <time.h>

    int main() {
        int escolhaJogador, escolhaComputador, menu;
        srand(time(0));
        
    printf("JOKENPO!\n");   
    printf("Menu\n");
    printf("1 - Iniciar Jogo\n");
    printf("2 - Regras\n");
    printf("3 - Sair\n");
    scanf("%d \n", &menu);

    switch (menu)
    {
        case 1:
            printf("escolha sua jogada");
            printf("1 - Pedra");
            printf("2 - Papel");
            printf("3 - Tesoura");
            scanf("%d", escolhaJogador);

            switch (escolhaJogador)
            {
                case 1:
                printf("Jogador: Pedra -")
                break;

                case 2
                printf("Jogador: Papel -")
                break;

                case 3
                printf("Jogador: Tesoura -")
                break;
            }
         case 2:

            printf("Pedra ganha de Tesoura")
            printf("Papel ganha de Pedra")
            printf("Tesoura ganha de Papel")
            break;

         case 3:
            printf("Tchau brigado!")
            break;
        }

    
    
    //escolhaComputador = rand() % 3 + 1;

    }

return 0;