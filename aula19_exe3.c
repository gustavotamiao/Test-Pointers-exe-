/*
@file aula19_exe3.c
@author Gustavo Tamiao
@date 29 04 2021
@brief Resolução do exercício 3 da aula 19
Enunciado: 3)Crie um programa que contenha uma matriz (3x3) de float. Imprima o
endereço de cada posição dessa matriz.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

  //declaracao de vetores
  float matriz[3][3];
  float *ptrMat;

  //exibir o endereco de cada posicao da matriz
  for (int l=0; l<3; l++){
    for (int c=0; c<3; c++){
      ptrMat = &matriz[l][c];
      printf("A matriz[%d][%d] esta no endereco: %p\n", l, c, (ptrMat + 1));
    }//for
  }//for

  return 0;
}//main
