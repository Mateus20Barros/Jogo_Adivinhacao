#ifndef _PROGRAMA_H_
   #define _PROGRAMA_H_

   void cabecalho(void);
   void escolherNivel (void);
   void verificarChute(int jogadorAcertou, int chuteJogador, int numeroSecreto);
   void chuteMaior(int chuteJogador);
   void chuteMenor(int chuteJogador);
   void vitoria(int numeroSecreto, double pontos);
   void derrota(void);
   
#endif
