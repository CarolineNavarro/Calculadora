#include <stdio.h>
#include <stdlib.h>

void soma (double num1, double num2){

    double resultadoSoma = num1 + num2;
    printf("Resultado da soma: %.2lf", resultadoSoma);

}

void subtracao (double num1, double num2){

    double resultadoSubtracao = num1 - num2;
    printf("Resultado da subtracao: %.2lf", resultadoSubtracao);

}

void multiplicacao (double num1, double num2){

    double resultadoMultiplicacao = num1 * num2;
    printf("Resultado da multiplicacao: %.2lf", resultadoMultiplicacao);

}

void divisao (double num1, double num2){

    double resultadoDivisao = num1 / num2;
    printf("Resultado da divisao: %.2lf", resultadoDivisao);

}


int main()
{
    char operacao;
    double num1, num2;

    printf("selecione a operacao desejada: (+, -, *, /)\n");
    scanf("%c", &operacao);

    switch(operacao)
    {
        case '+':
            printf("Digite os 2 numeros separados por espaco:\n");
            scanf("%lf" "%lf", &num1, &num2);
            soma(num1, num2);
            break;

        case '-':
            printf("Digite os 2 numeros separados por espaco:\n");
            scanf("%lf" "%lf", &num1, &num2);
            subtracao(num1, num2);
            break;

        case '*':
            printf("Digite os 2 numeros separados por espaco:\n");
            scanf("%lf" "%lf", &num1, &num2);
            multiplicacao(num1, num2);
            break;

        case '/':
            printf("Digite os 2 numeros separados por espaco:\n");
            scanf("%lf" "%lf", &num1, &num2);
            divisao(num1, num2);
            break;

    }

    return 0;
}
