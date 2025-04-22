//1. Crie um programa capaz de ler 3 notas e calcular a sua média.

#include<stdio.h>
#include<stdlib.h>

int main(){
    int a, b, c;
    float media=0;
    printf("Digite 3 numeros: \n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    media=(a+b+c)/3.0;
    printf("A media eh: %.2f", media);
}
