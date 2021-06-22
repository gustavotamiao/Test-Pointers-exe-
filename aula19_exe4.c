/*
@file aula19_exe4.c
@author Gustavo Tamiao
@date 29 04 2021
@brief Resolução do exercício 4 da aula 19
Enunciado: 4) Crie um programa que contenha um vetor de inteiros de tamanho 5.
Utilizando aritmética de ponteiros, leia os dados do teclado e exiba seus
valores multiplicado por 2. Em seguida, exiba o endereço de memória das
posições que contém valores pares.
*/

#include <stdio.h>
#include <stdlib.h>
#define TAM 5

int main(){
  //declarar vetor
  int vetor[TAM];

  //preencher vetor
  for(int i=0; i<TAM ; i++){
     printf("Digite Vetor [%d]: ", i);
     scanf("%d",(vetor + i));
  }// for

  //exibir vetor * 2
  for(int i=0; i<TAM ; i++){
    printf("Vetor*2 [%d]: %d\n", i, *(vetor + i) * 2);
  }// for

  // enderecos de memoria que possuem valor par
  printf("\nEnderecos de memoria com valores par:\n");
  for(int i=0; i<TAM ; i++){
    if(*(vetor + i)%2==0){
      printf("Vetor [%d]: %p\n", i, vetor + i);
    }// if
  }// for

  return 0;
}//main
