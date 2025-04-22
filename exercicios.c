/*: Extremamente Básico

Leia 2 variáveis, nomeadas A e B e faça a soma dessas duas variáveis, atribuindo seu resultado à variável X. . Imprimir X como mostrado abaixo. Imprima a linha final após o resultado, caso contrário você obterá “Erro de Apresentação”.

Entrada
O arquivo de entrada conterá 2 números inteiros.

Saída
Imprima a carta X (maiúscula) com espaço em branco antes e depois do sinal igual seguido do valor de X, conforme exemplo a seguir.

Obs.: afinal, não se esqueça da linha final.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1, num2, x;
    
    printf("Digite 2 numeros para a soma: \n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    
    x = num1 + num2;
    
    printf("\nX = %d", x);
    
    printf("\n\nFinal \n _____________________");
    
    return 0;
}

/*Área de um Círculo

A fórmula para calcular a área de uma circunferência é definida como A = π. R2. . Considerando a este problema que π = 3.14159:

Calcule a área usando a fórmula fornecida na descrição do problema.

Entrada
A entrada contém um valor de ponto flutuante (dupla precisão), que é a variável R.

Saída
Apresentar a mensagem "A=" seguida do valor da variável, como no exemplo abaixo, com quatro casas após a vírgula. Use todas as variáveis de precisão dupla. 
Como todos os problemas, não se esqueça de imprimir o final da linha após o resultado, caso contrário você receberá "Erro de apresentação".*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float R, A=0, n=3.14159;
    
    printf("Digite o raio do Círculo: \n");
    scanf("%f", &R);
    
    A = n*(R*R);
    
    printf("A = %.4f", A);
}

#include <stdio.h>
#include <math.h>

// EXERCÍCIO 01
// Leia 2 valores de ponto flutuante de dupla precisão A e B, que correspondem a duas notas de um aluno.
// A seguir, calcule a média do aluno, sabendo que a nota A tem peso 3.5 e a nota B tem peso 7.5.
int main(){
    double A, B, MEDIA;

    printf("Digite as duas notas:\n");
    scanf("%lf", &A);
    scanf("%lf", &B);

    MEDIA = (A * 3.5 + B * 7.5) / 11.0;

    printf("MEDIA = %.5lf\n", MEDIA);

    // EXERCÍCIO 02
    // Neste problema, deve-se ler o código de uma peça 1, o número de peças 1, o valor unitário de cada peça 1,
    // o código de uma peça 2, o número de peças 2 e o valor unitário de cada peça 2. Após, calcule e mostre o valor a ser pago.
    int cod1, qtd1, cod2, qtd2;
    float preco1, preco2, total;

    printf("Digite os dados do produto 1:\n");
    scanf("%d %d %f", &cod1, &qtd1, &preco1);

    printf("Digite os dados do produto 2:\n");
    scanf("%d %d %f", &cod2, &qtd2, &preco2);

    total = (qtd1 * preco1) + (qtd2 * preco2);

    printf("VALOR A PAGAR: R$ %.2f\n", total);

    // EXERCÍCIO 03
    // Faça um programa que calcule e mostre o volume de uma esfera sendo fornecido o valor de seu raio (R).
    double R, VOLUME;
    double pi = 3.14159;

    printf("Digite o raio:\n");
    scanf("%lf", &R);

    VOLUME = (4.0/3) * pi * R * R * R;

    printf("VOLUME = %.3lf\n", VOLUME);

    // EXERCÍCIO 04
    // Leia um valor inteiro correspondente à idade de uma pessoa em dias e informe-a em anos, meses e dias.
    int dias, anos, meses;

    printf("Digite a idade em dias:\n");
    scanf("%d", &dias);

    anos = dias / 365;
    dias = dias % 365;
    meses = dias / 30;
    dias = dias % 30;

    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);

    // EXERCÍCIO 05
    // Leia um valor de ponto flutuante com duas casas decimais. Este valor representa um valor monetário.
    // A seguir, calcule o menor número de notas e moedas possíveis no qual o valor pode ser decomposto.
    int N, moedas;
    double valor;

    printf("Digite o valor monetario:\n");
    scanf("%lf", &valor);

    N = (int)valor;
    moedas = (valor - N) * 100 + 0.5;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", N/100); N = N%100;
    printf("%d nota(s) de R$ 50.00\n", N/50); N = N%50;
    printf("%d nota(s) de R$ 20.00\n", N/20); N = N%20;
    printf("%d nota(s) de R$ 10.00\n", N/10); N = N%10;
    printf("%d nota(s) de R$ 5.00\n", N/5); N = N%5;
    printf("%d nota(s) de R$ 2.00\n", N/2); N = N%2;

    moedas += N * 100;

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", moedas/100); moedas = moedas%100;
    printf("%d moeda(s) de R$ 0.50\n", moedas/50); moedas = moedas%50;
    printf("%d moeda(s) de R$ 0.25\n", moedas/25); moedas = moedas%25;
    printf("%d moeda(s) de R$ 0.10\n", moedas/10); moedas = moedas%10;
    printf("%d moeda(s) de R$ 0.05\n", moedas/5); moedas = moedas%5;
    printf("%d moeda(s) de R$ 0.01\n", moedas);

    // EXERCÍCIO 06
    // Leia os valores das coordenadas X e Y de um ponto no plano cartesiano e mostre em qual dos quadrantes o ponto se encontra.
    // Se o ponto estiver na origem, escreva "Origem". Se o ponto estiver sobre um dos eixos, escreva "Eixo X" ou "Eixo Y".
    float x, y;

    printf("Digite as coordenadas:\n");
    scanf("%f %f", &x, &y);

    if(x == 0 && y == 0)
        printf("Origem\n");
    else if(x == 0)
        printf("Eixo Y\n");
    else if(y == 0)
        printf("Eixo X\n");
    else if(x > 0 && y > 0)
        printf("Q1\n");
    else if(x < 0 && y > 0)
        printf("Q2\n");
    else if(x < 0 && y < 0)
        printf("Q3\n");
    else
        printf("Q4\n");

    // EXERCÍCIO 07
    // Leia 3 valores inteiros e ordene-os em ordem crescente.
    // No final, mostre os valores em ordem crescente, uma linha em branco e em seguida os valores na ordem que foram lidos.
    int a, b, c;
    int x, y, z;

    printf("Digite tres numeros:\n");
    scanf("%d %d %d", &a, &b, &c);

    x = a; y = b; z = c;

    if(a > b){ int t = a; a = b; b = t; }
    if(a > c){ int t = a; a = c; c = t; }
    if(b > c){ int t = b; b = c; c = t; }

    printf("%d\n%d\n%d\n\n", a, b, c);
    printf("%d\n%d\n%d\n", x, y, z);

    // EXERCÍCIO 08
    // Leia 3 valores reais (A, B e C) e verifique se eles formam um triângulo.
    // Em caso positivo, calcule o perímetro. Caso contrário, calcule a área do trapézio.
    float A, B, C;

    printf("Digite os 3 valores:\n");
    scanf("%f %f %f", &A, &B, &C);

    if(A + B > C && A + C > B && B + C > A)
        printf("Perimetro = %.1f\n", A + B + C);
    else
        printf("Area = %.1f\n", ((A + B) * C) / 2);

    // EXERCÍCIO 09
    // Leia a hora inicial e a hora final de um jogo. A seguir calcule a duração do jogo.
    // Obs: O jogo tem duração mínima de 1 minuto e máxima de 24 horas.
    int hi, mi, hf, mf, h, m;

    printf("Digite a hora inicial e final:\n");
    scanf("%d %d %d %d", &hi, &mi, &hf, &mf);

    h = hf - hi;
    m = mf - mi;

    if(m < 0){
        m += 60;
        h -= 1;
    }

    if(h < 0)
        h += 24;

    if(h == 0 && m == 0)
        h = 24;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m);

    // EXERCÍCIO 10
    // A empresa ABC resolveu conceder um aumento de salários aos seus funcionários.
    // Faça um programa que leia o salário de um funcionário e calcule o reajuste.
    double salario, novo, reajuste;
    int percentual;

    printf("Digite o salario:\n");
    scanf("%lf", &salario);

    if(salario <= 400.00){
        percentual = 15;
    } else if(salario <= 800.00){
        percentual = 12;
    } else if(salario <= 1200.00){
        percentual = 10;
    } else if(salario <= 2000.00){
        percentual = 7;
    } else {
        percentual = 4;
    }

    reajuste = salario * percentual / 100.0;
    novo = salario + reajuste;

    printf("Novo salario: %.2lf\n", novo);
    printf("Reajuste ganho: %.2lf\n", reajuste);
    printf("Em percentual: %d %%\n", percentual);

    return 0;
}
