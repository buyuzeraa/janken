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

    scanf("%d", &menu);

    switch (menu){
        case 1:
            printf("escolha sua jogada\n");
            printf("1 - Pedra\n");
            printf("2 - Papel\n");
            printf("3 - Tesoura\n");
            scanf("%d", &escolhaJogador);
            
            escolhaComputador = rand() %3 + 1;

            switch (escolhaJogador){
                case 1:
                printf("Jogador: Pedra - \n");
                break;

                case 2:
                printf("Jogador: Papel - \n");
                break;

                case 3:
                printf("Jogador: Tesoura -\n");

                break;

                default:
                    printf("Escolha Inválida\n");

                    

            }

            switch (escolhaComputador){
                case 1:
                printf("Computador: Pedra -\n");
                break;

                case 2:
                printf("Computador: Papel - \n");
                break;

                case 3:
                printf("Computador: Tesoura -\n");
 


            }

            if(escolhaComputador == escolhaJogador)
                    printf("Empate\n");

                else if (escolhaComputador == 1 && escolhaJogador == 2)
                    printf("Jogador venceu\n");

                else if(escolhaComputador == 1 && escolhaJogador == 3)
                    printf("Computador venceu\n");

                else if(escolhaComputador == 2 && escolhaJogador == 3)
                    printf("Jogador venceu\n");
                 
                else if(escolhaComputador == 2 && escolhaJogador == 1)
                    printf("Computador venceu\n");

                else if(escolhaComputador == 3 && escolhaJogador == 1)
                    printf("Jogador venceu\n");

                else if(escolhaComputador == 3 && escolhaJogador == 2)
                    printf("Computador venceu\n");  

                    
        
                break;

         case 2:

            printf("Pedra ganha de Tesoura\n");
            printf("Papel ganha de Pedra\n");
            printf("Tesoura ganha de Papel\n");
            break;

         case 3:
            printf("Tchau brigado!");
            break;
        }

    
    
    //escolhaComputador = rand() % 3 + 1;
    
return 0;
}