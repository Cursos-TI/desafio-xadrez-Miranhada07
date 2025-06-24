#include <stdio.h>

void moverTorre(int casas) {
    if (casas == 0) {
        return;
    }
    printf("Direita\n");
    moverTorre(casas - 1);
}

void moverBispoRecursivo(int casas) {
    if (casas == 0) {
        return;
    }
    printf("Cima Direita\n");
    moverBispoRecursivo(casas - 1);
}


void moverRainha(int casas) {
    if (casas == 0) {
        return;
    }
    printf("Esquerda\n");
    moverRainha(casas - 1);
}


int main() {

    printf("Movimentação da Torre:\n");
    moverTorre(5); 
    printf("\n");

 
    printf("Movimentação do Bispo (Recursivo):\n");
    moverBispoRecursivo(5); 
    printf("\n");


    printf("Movimentação do Bispo (Loops Aninhados):\n");


    for (int vertical = 1; vertical <= 5; vertical++) {
    
        for (int horizontal = 1; horizontal <= 1; horizontal++) {
            printf("Cima Direita\n");
        }
    }
    printf("\n");


    printf("Movimentação da Rainha:\n");
    moverRainha(8); 
    printf("\n");


    printf("Movimentação do Cavalo:\n");

    int movimentosFeitos = 0;

    for (int cima = 1; cima <= 2; cima++) {
        if (cima == 2) {
            printf("Cima\n");
            movimentosFeitos++;

           
            for (int direita = 1; direita <= 1; direita++) {
                if (movimentosFeitos >= 3) {
                    break; 
                }
                printf("Direita\n");
                movimentosFeitos++;

               
                if (movimentosFeitos > 3) {
                    continue;
                }
            }

            break; 
        } else {
            printf("Cima\n");
            movimentosFeitos++;
            continue;
        }
    }

    return 0;
}
