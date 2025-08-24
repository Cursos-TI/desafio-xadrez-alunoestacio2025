// USAR OS COMANDOS for / while / do while PARA MOVER PEÇAS DO TABULEIRO

#include <stdio.h>

    int main() {
        /*
        NIVEL AMADOR:
        APENAS SIMULANDO OS MOVIMENTOS DE TORRE / BISPO / RAINHA / CAVALO
        (Aguarde melhorias nas proximas atualizações)
        */ 
        printf("                     ##### ATENÇÃO JOGADOR ##### \n");
        printf("--- ESTE É APENAS UM PROJETO DE SIMULAÇÃO DE MOVIMENTOS DAS PEÇAS ---\n\n");
        // TORRE COM WHILE
        int direcaoTorre;
        int i = 1;
        printf("Em qual direção a Torre deve ir? \n");
        printf("1.Direita   2.Esquerda   3.Pra frente   4.Pra trás \n");
        scanf("%d", &direcaoTorre);
        switch (direcaoTorre)
        {
        case 1:
        while (i <= 5){
        printf("Direita...\n");
        i++;
        }
            break;
        
        case 2:
        while (i <= 5){
        printf("Esquerda...\n");
        i++;
        }
            break;
            
        case 3:
        while (i <= 5){
        printf("Pra frente...\n");
        i++;
        }
        
        case 4:
        while (i <= 5){
        printf("Pra trás...\n");
        i++;
        }
        }
        printf("\n\n\n");

        // BISPO COM DO WHILE
        int direcaoBispo;
        i = 1;
        printf("Em qual direção o Bispo deve ir? \n");
        printf("1.Diagonal direita   2.Diagonal esquerda\n");
        scanf("%d", &direcaoBispo);
        switch (direcaoBispo)
        {
        case 1:
        do {
        printf("Diagonal direita... \n");
        i++;
        } while (i <=5);
            break;
        
        case 2:
        do {
        printf("Diagonal esquerda... \n");
        i++;
        } while (i <=5);
            break;
        }
        printf("\n\n\n");

        // RAINHA COM FOR
        int direcaoRainha;
        printf("Em qual direção a Rainha deve ir? \n");
        printf("1.Direita   2.Esquerda   3.Pra frente \n");
        printf("4.Pra trás  5.Diagonal direita  6.Diagonal esquerda \n");
        scanf("%d", &direcaoRainha);
        switch (direcaoRainha)
        {
        case 1:
        for (int i = 1; i <= 8; i++)
        {
        printf("Direita... \n");
        }
            break;
        
        case 2:
        for (int i = 1; i <= 8; i++)
        {
        printf("Esquerda... \n");
        }
            break;

        case 3:
        for (int i = 1; i <= 8; i++)
        {
        printf("Pra frente... \n");
        }
            break;
        case 4:
        for (int i = 1; i <= 8; i++)
        {
        printf("Pra trás... \n");
        }
            break;

        case 5:
        for (int i = 1; i <= 8; i++)
        {
        printf("Diagonal direita... \n");
        }
            break;

        case 6:
        for (int i = 1; i <= 8; i++)
        {
        printf("6.Diagonal esquerda... \n");
        }
            break;        
        }
        printf("\n\n\n");

        // CAVALO
        int direcaoCavalo;
        printf("Em qual direção o Cavalo deve ir? \n");
        printf("1.Pra frente / Direita   2.Pra frente / Esquerda \n");
        scanf("%d", &direcaoCavalo);
        switch (direcaoCavalo)
        {
        case 1:
         for (int i = 0; i <= 0; i++){
         for (int j = 0; j <=1; j++)
         {
            printf("Cima... \n");
         }
            printf("Direita... \n");
         }
        break;
        case 2:
         for (int i = 0; i <= 0; i++){
         for (int j = 0; j <=1; j++)
         {
            printf("Cima... \n");
         }
            printf("Esquerda... \n");
         }
        break;
        }
        printf("\n\n\n");
        
        
        
        






return 0;
    }


