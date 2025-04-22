/*
9. Crie um programa capaz de ler o raio de um círculo e imprimir sua área. A fórmula para
área é a = π ∗ r*r
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    float a, pi=3.14, r;
    printf("Digite o raio do circulo: \n");
    scanf("%f", &r);
    a= pi*pow(r, 2);
    printf("Area do circulo e igual a = %.2f", a);
}
