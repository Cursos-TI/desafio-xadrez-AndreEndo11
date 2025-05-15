#include <stdio.h>

void moverTorre(int casas) { // Função recursiva 
    if (casas > 0) {
        printf("Torre Direita\n");
        moverTorre(casas - 1);
    }
}
void moverBispo() { 
    for (int b = 0; b < 1; b++) {
        printf("Bispo Vertical\n");
        for (int b = 0; b < 5; b++) {
            printf("Bispo Horizontal\n");
        }
    }
}
void moverRainha(int a) { // Função recursiva
    if (a > 0) {
        printf("Rainha Esquerda\n"); 
        moverRainha(a - 1);      
    }
}

int main() {
    int option, c = 1;
    // Enquanto a option for 1 ou 2 o jogo continua, quando option for 3 sai do jogo.
    do {
        printf("### JOGO XADREZ ###\n");
        printf("Menu:\n");
        printf("1. Iniciar jogo! \n");
        printf("2. Regras do jogo! \n");
        printf("3. Sair\n");
        printf("Escolha uma opção:\n");
        scanf("%d", &option);
        
        printf("\n");
        switch(option) {
            case 1:
                printf("### START ###\n");
                // Mover a torre 5 casas para a direita
                moverTorre(5); // Chama a função moverTorre e imprime a direção do movimento

                printf("\n");
                // Move o bispo 1 casa na vertical e 5 na horizontal
                moverBispo(); // Chama a função moverBispo e Imprime a direção do movimento
                
                printf("\n");
                // Move a Rainha 8 casas para a esquerda
                moverRainha(8); // Chama a função moverRainha e Imprime a direção do movimento

                printf("\n");
                // Move o cavalo 2  para baixo e 1 para a esquerda
                while (c--) {
                    for (int i = 0; i < 2; i++) {
                        printf("Cavalo Cima\n"); // imprime "Cima" duas vezes
                    }
                    printf("Cavalo direita\n"); // Imprime "Direita" uma vez
                }
                printf("\n");
                break;
            case 2:
                printf("Torre: Move-se em linha reta horizontalmente ou verticalmente.\n");
                printf("Bispo: Move-se na diagonal.\n");
                printf("Rainha: Move-se em todas as direções.\n");
                printf("Cavalo: se move duas casas em uma direção (horizontal ou vertical) e depois uma casa perpendicularmente\n");
                break;
            case 3:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (option != 3);

    return 0;

}
