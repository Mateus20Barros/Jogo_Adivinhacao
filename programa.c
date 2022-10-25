#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "programa.h"
#include <locale.h>

void cabecalho(void) {
   printf("\t\n\n");
   printf("\t*********************************************\n");
   printf("\t* *    BEM VINDO AO JOGO DA ADIVINHAÇÃO   * *\n");
   printf("\t*********************************************\n");
   printf("\n\n");
}

void escolherNivel(void) {
   printf("\t+-------------------------------------------+\n");
   printf("\t|          ESCOLHA O NÍVEL DO JOGO          |\n");
   printf("\t+---------------------+---------------------+\n");
   printf("\t|      [1] Fácil      |     20 Chances      |\n");
   printf("\t+---------------------+---------------------+\n");
   printf("\t|      [2] Médio      |     15 Chances      |\n");
   printf("\t+---------------------+---------------------+\n");
   printf("\t|      [3] Difícil    |     07 Chances      |\n");
   printf("\t+-------------------------------------------+\n");
}

void chuteMaior(int chuteJogador) {
   printf("\t> DICA..: %d é MAIOR.\n", chuteJogador);
}

void chuteMenor(int chuteJogador) {
   printf("\t> DICA..: %d é MENOR.\n", chuteJogador);
}

void mensagemVitoria(int numeroSecreto, double pontos) {
   system("cls");
   printf("\t+-------------------------------------------+\n\n");
   printf("\t                  OOOOOOOOOOO                  \n");
   printf("\t              OOOOOOOOOOOOOOOOOOO              \n");
   printf("\t           OOOOOO  OOOOOOOOO  OOOOOO           \n");
   printf("\t         OOOOOO      OOOOO      OOOOOO         \n");
   printf("\t       OOOOOOOO  #   OOOOO  #   OOOOOOOO       \n");
   printf("\t      OOOOOOOOOO    OOOOOOO    OOOOOOOOOO      \n");
   printf("\t     OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO     \n");
   printf("\t     OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO     \n");
   printf("\t     OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO     \n");
   printf("\t      OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO      \n");
   printf("\t       OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO       \n");
   printf("\t         OOOOO   OOOOOOOOOOOOOOO   OOOO        \n");
   printf("\t           OOOOOO   OOOOOOOOO   OOOOOO         \n");
   printf("\t              OOOOOO         OOOOOO            \n");
   printf("\t                  OOOOOOOOOOOOO              \n\n");

   printf("\t + Parabéns pela conquista!\n");
   printf("\t + O número secreto era [%d].\n", numeroSecreto);
   printf("\t + Você fez %.2f pontos.\n\n", pontos);
   printf("\t+-------------------------------------------+\n\n");
}

void mensagemDerrota(void) {
   system("cls");

   printf("\n");
   printf("\t          \\|/ ____ \\|/      \n");   
   printf("\t           @~/ ,. \\~@        \n");   
   printf("\t          /_( \\__/ )_\\      \n");   
   printf("\t             \\__U_/        \n\n");
   printf("\tNão foi dessa vez. Tente novamente!\n\n");
   printf("\t+-------------------------------------------+\n\n");
}

int main(void) {
   setlocale(LC_ALL, "Portuguese");

   cabecalho();

   int chuteJogador;
   int jogadorAcertou;
   int nivelDoJogo;
   int chuteJogadorEhMaior;
   int tentativas;

   double pontos = 1000;

   srand(time(0));
   int numeroSecreto = rand() % 100;

   escolherNivel();

   printf("\n\tEscolha o nível..: ");
   scanf("%d", &nivelDoJogo);

   switch (nivelDoJogo) {
      case 1: 
         tentativas = 20;
         break;
      case 2:
         tentativas = 15;
         break;
      case 3:
         tentativas = 7;
         break;
      default:
         printf("\n\tOpção Indisponivel.");
         return;
   }

   for (int contador = 1; contador <= tentativas; contador++) {

      printf("\n\t+----------( %dª tentativa de %d )------------+\n\n", contador, tentativas);
      printf("\t> Insira um número..: ");
      scanf("%d", &chuteJogador);

      if (chuteJogador < 0) {
         printf("\tVocê não pode chutar números negativos\n");
         contador = 0;
         continue;
      }

      jogadorAcertou = chuteJogador == numeroSecreto;
      chuteJogadorEhMaior = chuteJogador > numeroSecreto;

      if (jogadorAcertou) break;
      else if (chuteJogadorEhMaior) chuteMaior(chuteJogador);
      else chuteMenor(chuteJogador);

      double pontosperdidos = abs(chuteJogador - numeroSecreto) / 2.0;
      pontos -= pontosperdidos;
   }

   jogadorAcertou ? mensagemVitoria(numeroSecreto, pontos) : mensagemDerrota();
} 
