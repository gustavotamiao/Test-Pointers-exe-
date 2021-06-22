/*
@file aula19_exe5.c
@author Gustavo Tamiao
@date 03 05 2021
@brief Resolução do exercício 5 da aula 19
Enunciado: 5)Elabora uma função que receba duas strings como parâmetros e verifique se a segunda
string está dentro da primeira. Para isso, utilize apenas aritmética de ponteiros.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

 //limpar o buffer do teclado
 void limpaBuffer(){
   fflush(stdin);
 }//limpaBuffer

//recebe string
void recebeString(char* string, int tam){
  fgets(string, tam, stdin);
  string[strcspn(string, "\n")] = '\0';
  limpaBuffer();
}//recebeString

//verifica se a string2 esta contida na string 1
bool verificaStringInt(char* string, char* stringInt ){
  int tamString = strlen(string);
  int tamSub = strlen(stringInt);
  bool saoIguais;// true ou false

  //Percorre todas as posiçoes possivel de inicio da stringInt
  for(int l=0; l<tamString-tamSub+1; l++){
    saoIguais = true;//
    for(int c=0; c<tamSub; c++) {//verifica cada posicao da stringInt
      if(*(string+l+c) != *(stringInt + c)){
        saoIguais = false;// nao sao iguais, busca dnv
        break;
      }// if
    }// for
    if(saoIguais){// permanece true, vdd
      return true;
    }
  }// for
  return false; //Não encontrou stringInt
}// verificaStringInt

int main(){
  //declarar strings
  char string1[30];
  char string2[30];

  //receber strings
  printf("Digite a string 1: ");
  recebeString(string1,30);

  printf("Digite a string 2: ");
  recebeString(string2,30);

  //chamar funcao e exibir resposta
  if(verificaStringInt(string1, string2)){
    printf("A string %s esta contida na string %s\n", string2, string1);
  }else{
    printf("A string %s nao esta contida na string %s\n", string2, string1);
  }//else

  return 0;
}//main
