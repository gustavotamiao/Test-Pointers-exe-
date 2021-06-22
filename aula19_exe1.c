/*
@file aula19_exe1.c
@author Gustavo Tamiao
@date 29 04 2021
@brief Resolução do exercício 1 da aula 19
Enunciado: 1) Escreva um programa que contenha duas variáveis inteiras. Compare os
endereços e exiba o endereço e o conteúdo do maior endereço.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

  //declaracao de variaveis
  int var1 = 77;
  int var2 = 788;
  int *ptr1;
  int *ptr2;

  ptr1 = &var1;
  ptr2 = &var2;

  //compara os valor dos enderecos
  if(&ptr1 > &ptr2){
    printf("O maior endereco eh %p, de conteudo: %d\n", &ptr1, *ptr1);
  }else{
    printf("O maior endereco eh %p\n, de conteudo: %d\n", &ptr2, *ptr2);
  }//else

  if(*ptr1 > *ptr2){
    printf("O maior valor eh: %d\n", *ptr1);
  }else{
    printf("O maior valor eh: %d\n", *ptr2);
  }//else

  return 0;
}//main
