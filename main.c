#include <stdio.h>


float maior( float vetor[] , int tamanho ) {
  float maior = vetor[0];
  for (int i=1 ; i< tamanho;i++) {
    if (vetor[i]>maior) maior = vetor[i];
  }
  return maior;
}


int main(void) { 
  float valores[4] = { 12.3, 494.3, 2, 492.2 } ;
  printf("O maior valor do vetor é %4.2f \n",maior(valores,4));
  return 0;
}