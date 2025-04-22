/*
7. Crie um programa capaz de ler 3 variáveis a, b e c, que representam valores para uma
equação do segundo grau, e imprimir o delta. A fórmula do delta é ∆ = b2-4*a*c.
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    float a, b, c, delta;
    printf("Digite 3 numeros para a equação: \n");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    delta= (b*b)-(4*a*c);
    printf("Delta eh igual a: %.2f", delta);
}
