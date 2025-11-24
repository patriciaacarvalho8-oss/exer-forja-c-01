//incluir a biblioteca stdio.h, permite a entrada e saida de valores como o print
#include<stdio.h>
//Inclui a biblioteca stdlib.h para funcoes ultilitararias como o system
#include<stdlib.h>

//inicio da funcao, onde o programa começa a ser executado 
int main(){

    float num1, num2 = 100.45;
    //int num2 = 200;

    //printar os numeros das variaveis 
    printf("%f %f", num1, num2)/

    //pausa o programa, ate q o usuario pressione qualquer tecla
    system("pause");
    //finaliza o programa retornando 0, indicando q deu tudo certo 
    return 0;
}