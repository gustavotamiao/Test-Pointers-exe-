/*
@file aula19_exe6.c
@author Gustavo Tamiao
@date 03 05 2021
@brief Resolução do exercício 6 da aula 19
Enunciado: 6)Elabora uma função que receba duas strings como parâmetros e verifique se a segunda
string está dentro da primeira. Para isso, utilize apenas aritmética de ponteiros.
*/

/*
@file aula19_exe5.c
@author Gustavo Tamiao
@date 03 05 2021
@brief Resolução do exercício 5 da aula 19
Enunciado: 6)Considere a seguinte declaração:
 int a, *b, **c, ***d;
 Escreva um programa que receba o valor de a, calcule e exiba:
 O dobro do valor a, utilizando o ponteiro b
 O triplo do valor a, utilizando o ponteiro c
 O quadruplo do valor a, utilizando o ponteiro d
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
  //declaracao de variaveis
  int a, *b, **c, ***d;
  b = &a;
  c = &b;
  d = &c;

  //receber valor de a
  printf("Digite o valor de a:");
  scanf("%d", &a);

  // realizar operaçoes e exibir valores com dereferenciacao
  printf("O dobro de a: %d\n", (*b) * 2);
  printf("O triplo de a: %d\n", (**c) * 3);
  printf("O quadruplo de a: %d\n", (***d) * 4);

  return 0;
}//main
