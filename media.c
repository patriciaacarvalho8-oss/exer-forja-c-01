#include<stdio.h>

#include<stdlib.h>

int main(){
  
        float num1, num2, respSoma;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    respSoma = num1 + num2;
    printf("%2f" ,respSoma);

    system("pause");
   
    return 0;
}

