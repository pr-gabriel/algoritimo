/*
11. Dados os lados a, b e c de um triângulo, elaborar um programa para calcular e exibir o
perímetro e a área do mesmo. Use o semi-perímetro como base para seu cálculo. Fórmulas:
sp =
௔ା௕ ା௖
ଶ
, a = ඥsp ∗ (sp − a) ∗ (sp − b) ∗ (sp − c)
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    float a, b, c, sp, p, area=0.0;
    printf("Digite o lado a: \n");
    scanf("%f", &a);
    printf("Digite o lado b: \n");
    scanf("%f", &b);
    printf("Digite o lado c: \n");
    scanf("%f", &c);
     // Verificação simples para ver se os lados formam um triângulo
    if (a + b > c && a + c > b && b + c > a) {
        p=a+b+c;
        sp=p/2.0;
        area=sqrt(sp *(sp-a)*(sp-b)*(sp-c));
        printf("Area do triangulo e igual a = %.2f", area);
    } else {
        printf("Os lados fornecidos nao formam um triangulo valido.\n");
    }
}
