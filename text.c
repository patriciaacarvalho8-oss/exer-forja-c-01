#include<stdio.h>
#include<stdlib.h>

int main(){

    //declarar uma string com tamanho maximo de 50 caracters 

    char nome[50];

    printf("Digite o seu nome: ");
    scanf("%s", nome);
    printf("o nome digitado foi: %s \n", nome );

    system("pause");
    return 0;
}