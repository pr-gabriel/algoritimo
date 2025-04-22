/*
10. Crie um programa capaz de ler a altura (h) e o raio (r) de um cilindro e imprimir seu volume.
A fórmula para área é v = π ∗ r*r*h
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    float h, v, pi=3.14, r;
    printf("Digite o raio do cilindro: \n");
    scanf("%f", &r);
    printf("Digite a altura do cilindro: \n");
    scanf("%f", &h);
    v = pi * pow(r, 2)*h;
    printf("Area do cilindro e igual a = %.2f cm cubicos", v);
}
