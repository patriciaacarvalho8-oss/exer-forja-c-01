#include<stdio.h>
#include<stdlib.h>

int main(){

    char cidade [50];
    char estado [50];
    int ano;
    int resposta;


    printf("Digite sua cidade de nascimento: ");
    fgets(cidade, 50, stdin);

    printf("Digite seu estado de nascimento: ");
    fgets(estado, 50, stdin);

    printf("qual o seu ano de nascimento: ");
    scanf("%d", &ano);

     resposta = 2025 - ano;

    printf("você nasceu em %se no estado %se tem %d anos. \n", cidade, estado, resposta);

    system("pause");
    return 0;

}
