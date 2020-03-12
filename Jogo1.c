// incluindo bibliotecas
 #include <stdio.h>
 #include <stdlib.h>

 int main () {

    // imprime cabeçalho do jogo
    printf("===========================================\n");
    printf(" Bem vindo ao nosso jogo de adivinhacao!!!\n");
    printf("===========================================");
    printf("\n\n");

    //Declarando variaveis
    int chute;
    int tentativas = 1;

    int numerosecreto = 8;
    int acertou = 0;

    int numerodetentativas;

    // escolhendo o nivel de dificuldade
    int nivel;
    printf("Qual o nivel de dificuldade?\n");
    printf("(1) Facil (2) Medio (3) Dificil\n\n");
    printf("Escolha: ");
    scanf("%d", &nivel);
    
      // laço switch case
    switch (nivel) {
        case 1: 
            numerodetentativas = 20;
            break;
        
        case 2: 
            numerodetentativas = 10;
            break;

        case 3: 
            numerodetentativas = 5;
            break;
    }

    // laço if
    if (nivel == 1) {
         numerodetentativas = 20;
    }

    if (nivel == 2) {
         numerodetentativas = 10;
    }
    if (nivel == 3) {
         numerodetentativas = 5;           
    }
    // loop principal do jogo
    for (int i = 1; i <= numerodetentativas; i++) {
    
        printf("Tentativa %d\n", tentativas);
        printf("Qual e o seu chute? ");
        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);

    // tratando chute de numero negativos
        if (chute < 0) {
            printf("Voce nao pode digitar numeros negativos");

            continue;
         }
    // verificar se acetou, maior ou menor
        acertou = (chute == numerosecreto); 
        int maior = chute > numerosecreto;

        if (acertou) {
            break;
        }

            else if(maior) {
                printf("Seu chute foi maior que o numero secreto\n\n");
            }

            else {
                printf("Seu chute foi menor que o numero secreto\n\n");                            
            }

            tentativas++;

            }
            
            printf("Fim de jogo!\n");

        //imprimindo mensagem de vitória ou derrota
        printf("\n");

        if (acertou) {
            printf("             OOOOOOOOOOO               \n");
        printf("         OOOOOOOOOOOOOOOOOOO           \n");
        printf("      OOOOOO  OOOOOOOOO  OOOOOO        \n");
        printf("    OOOOOO      OOOOO      OOOOOO      \n");
        printf("  OOOOOOOO  #   OOOOO  #   OOOOOOOO    \n");
        printf(" OOOOOOOOOO    OOOOOOO    OOOOOOOOOO   \n");
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
        printf("OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO  \n");
        printf(" OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO   \n");
        printf("  OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO    \n");
        printf("    OOOOO   OOOOOOOOOOOOOOO   OOOO     \n");
        printf("      OOOOOO   OOOOOOOOO   OOOOOO      \n");
        printf("         OOOOOO         OOOOOO         \n");
        printf("             OOOOOOOOOOOO              \n");
        printf("\n\n");

        printf("Parabéns voce ganhou!\n");
        printf("Voce acertou em %d tentativas!\n", tentativas);
        }

        else {

             printf("Voce perdeu! Tente de novo!\n");

        printf("       \\|/ ____ \\|/    \n");
        printf("        @~/ ,. \\~@      \n");
        printf("       /_( \\__/ )_\\    \n");
        printf("          \\__U_/        \n");
        
        }
        
     
     
 }
