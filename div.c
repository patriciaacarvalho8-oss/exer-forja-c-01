//inclui a biblioteca stdio.h que permite usar entrada e saida de infos. (printf e scanf)
#include<stdio.h>

//inclui a biblioteca stdlib.h que permite funcoes utilitarias (system())
#include<stdlib.h>

//declara a funcao principal, onde o programa começa sua execucao 
int main(){
    
    float num1, num2, respDiv;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    respDiv = num1 / num2;
    printf("%2f" ,respDiv);


    //pausar o sistema ate que o usuario pressione qualquer tecla 
    system("pause");
    //finalizamo programa retornando 0, indicando que tudo ocorreu bem 
    return 0;

}