#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c, d, e, menor;
    printf("Digite cinco números: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    
    menor = a;
    if (b < menor) menor = b;
    if (c < menor) menor = c;
    if (d < menor) menor = d;
    if (e < menor) menor = e;
    
    printf("O menor número eh: %d\n", menor);
}
