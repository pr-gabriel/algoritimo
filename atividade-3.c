/*
1. Leia o código de um determinado produto e mostre sua classificação. Utilize a
seguinte tabela como referência:


1 Alimento não-perecível 
2,3 ou 4 Alimento perecível 
5 ou 6 Vestuário 
7 Higiene Pessoal
8 até 15 Limpeza e Utensílios Domésticos 
Qualquer outro código Código inválido  

2. 

O cardápio de uma casa de lanches é dado pela tabela abaixo:
100 Cachorro quente R$ 1,70 
101 Bauru Simples R$ 2,30 
102 Bauru com ovo R$ 2,60 
103 Hamburguer R$ 2,40 
104 Cheeseburguer R$ 2,50 
105 Refrigerante R$ 1,00 
Escreva um algoritmo que leia o código do item adquirido pelo consumidor e a
quantidade, calculando e mostrando o valor a pagar. Não será necessário exibir o produto
e o valor, somente o valor final



3.  Um funcionário irá receber um aumento de acordo com o seu plano de
trabalho, de acordo com a tabela abaixo: 
A 10% 
B 15% 
C 20% 
Faça um programa que leia o plano de trabalho e o salário atual de um
funcionário e calcula e imprime o seu novo salário. 

4.  Faça um programa que leia um número entre 0 e 10, e escreva este
número por extenso.



5.  Faça um programa que leia um número entre 1 e 7 e escreva o dia da semana. Considere 1 = domingo.
6   Faça um programa que leia um número entre 1 e 12 e escreva o mês referente.
*/

#include <stdio.h>

void atividade1() {
    int num1;
    printf("Digite o código do produto: ");
    scanf("%d", &num1);

    switch (num1) {
        case 1:
            printf("Alimento não-perecível\n");
            break;
        case 2:
        case 3:
        case 4:
            printf("Alimento perecível\n");
            break;
        case 5:
        case 6:
            printf("Vestuário\n");
            break;
        case 7:
            printf("Higiene Pessoal\n");
            break;
        default:
            if (num1 >= 8 && num1 <= 15)
                printf("Limpeza e Utensílios Domésticos\n");
            else
                printf("Código Inválido\n");
    }
}

void atividade2() {
    int num1, num2;
    printf("Cod: ");
    scanf("%d", &num1);
    printf("Quantidade: ");
    scanf("%d", &num2);

    float preco;
    switch (num1) {
        case 100:
            preco = 1.70;
            break;
        case 101:
            preco = 2.30;
            break;
        case 102:
            preco = 2.60;
            break;
        case 103:
            preco = 2.40;
            break;
        case 104:
            preco = 2.50;
            break;
        case 105:
            preco = 1.00;
            break;
        default:
            printf("Código inválido\n");
            return;
    }
    printf("Valor a pagar: %.2f\n", num2 * preco);
}

void atividade3() {
    char plano;
    float sal;
    printf("Plano de Salário (A, B, C): ");
    scanf(" %c", &plano);
    printf("Salário: ");
    scanf("%f", &sal);

    switch (plano) {
        case 'A':
            sal *= 1.10;
            break;
        case 'B':
            sal *= 1.15;
            break;
        case 'C':
            sal *= 1.20;
            break;
        default:
            printf("Plano inválido\n");
            return;
    }
    printf("Novo salário: %.2f\n", sal);
}

void atividade4() {
    int num;
    char *extenso[] = {"Zero", "Um", "Dois", "Três", "Quatro", "Cinco", "Seis", "Sete", "Oito", "Nove", "Dez"};
    printf("Digite um número (0-10): ");
    scanf("%d", &num);
    if (num >= 0 && num <= 10)
        printf("%s\n", extenso[num]);
    else
        printf("Número inválido\n");
}

void atividade5() {
    int num;
    char *dias[] = {"Domingo", "Segunda", "Terça", "Quarta", "Quinta", "Sexta", "Sábado"};
    printf("Escreva o dia da semana (1-7): ");
    scanf("%d", &num);
    if (num >= 1 && num <= 7)
        printf("%s\n", dias[num - 1]);
    else
        printf("Número inválido\n");
}

void atividade6() {
    int num;
    char *meses[] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
    printf("Digite o número do mês (1-12): ");
    scanf("%d", &num);
    if (num >= 1 && num <= 12)
        printf("%s\n", meses[num - 1]);
    else
        printf("Número inválido\n");
}

int main() {
    atividade1();
    atividade2();
    atividade3();
    atividade4();
    atividade5();
    atividade6();
    return 0;
}
