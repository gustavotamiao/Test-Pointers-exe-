/*
@file aula19_exe2.c
@author Gustavo Tamiao
@date 29 04 2021
@brief Resolução do exercício 2 da aula 19
Enunciado: 2) Crie um programa que contenha um vetor float (tamanho 10). Imprima o
endereço de cada posição desse vetor.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

  //declaracao de vetores
  float vetor[10] = {1,2,3,4,5,6,7,8,9,10};
  float *ptrVet = vetor;

  //exibir endereco de memoria de cada posicao
  for(int i=0; i<10; i++){
    printf("O vetor[%d]=%.2f esta no endereco: %p\n", i, *(ptrVet+i), (ptrVet+i));
  }//for

  return 0;
}//main
