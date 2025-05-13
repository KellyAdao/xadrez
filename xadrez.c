#include <stdio.h>
#include <string.h>

// Constantes de controle
#define MOV_TORRE 4
#define MOV_BISPO 4
#define MOV_RAINHA 4
#define LINHAS 8
#define COLUNAS 8

// ========================== TORRE (Recursiva) ==========================
void moverTorreCima(int casas)
{
  if (casas == 0)
    return;
  printf("Cima\n");
  moverTorreCima(casas - 1);
}

void moverTorreDireita(int casas)
{
  if (casas == 0)
    return;
  printf("Direita\n");
  moverTorreDireita(casas - 1);
}

// ========================== BISPO (Recursiva + Loop Aninhado) ==========================
void moverBispoRecursivo(int casas)
{
  if (casas == 0)
    return;
  printf("Diagonal Superior Direita\n");
  moverBispoRecursivo(casas - 1);
}

void moverBispoLoops()
{
  printf("\nBispo (Loops Aninhados):\n");
  for (int i = 1; i <= MOV_BISPO; i++)
  { // Loop externo: linhas
    for (int j = 1; j <= MOV_BISPO; j++)
    { // Loop interno: colunas
      if (i == j)
      { // Movimento diagonal
        printf("Diagonal %d: Cima Direita\n", i);
      }
    }
  }
}

// ========================== RAINHA (Recursiva) ==========================
void moverRainhaCima(int casas)
{
  if (casas == 0)
    return;
  printf("Cima\n");
  moverRainhaCima(casas - 1);
}

void moverRainhaEsquerda(int casas)
{
  if (casas == 0)
    return;
  printf("Esquerda\n");
  moverRainhaEsquerda(casas - 1);
}

void moverRainhaDiagonal(int casas)
{
  if (casas == 0)
    return;
  printf("Diagonal Superior Direita\n");
  moverRainhaDiagonal(casas - 1);
}

// ========================== CAVALO (Loops Aninhados e Condições) ==========================
void moverCavalo()
{
  printf("\nCavalo (Loops Complexos):\n");
  for (int i = 1; i <= LINHAS; i++)
  {
    for (int j = 1; j <= COLUNAS; j++)
    {
      // Simula o movimento para cima e direita (2 cima, 1 direita)
      int novaLinha = i - 2;
      int novaColuna = j + 1;

      if (novaLinha < 1 || novaLinha > LINHAS || novaColuna < 1 || novaColuna > COLUNAS)
      {
        continue; // Posição inválida no tabuleiro
      }

      printf("Movimento em L para (%d, %d): Cima Cima Direita\n", novaLinha, novaColuna);

      if (novaLinha == 1 && novaColuna == 8)
      {
        printf("Chegou ao canto superior direito! Encerrando.\n");
        break; // Interrompe o loop se condição especial for atingida
      }
    }
  }
}

// ========================== MAIN ==========================
int main()
{
  // TORRE
  printf("Torre (Recursiva):\n");
  moverTorreCima(MOV_TORRE);
  moverTorreDireita(MOV_TORRE);

  printf("\n");

  // BISPO
  printf("Bispo (Recursiva):\n");
  moverBispoRecursivo(MOV_BISPO);

  moverBispoLoops();

  printf("\n");

  // RAINHA
  printf("Rainha (Recursiva):\n");
  moverRainhaCima(MOV_RAINHA);
  moverRainhaEsquerda(MOV_RAINHA);
  moverRainhaDiagonal(MOV_RAINHA);

  printf("\n");

  // CAVALO
  moverCavalo();

  return 0;
}
