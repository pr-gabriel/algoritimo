#include <stdio.h>
#include <stdlib.h>

int main() {
    int b, h;
    printf("Digite os lados b e h: ");
    scanf("%d %d", &b, &h);
    
    if (b == h) {
        printf("É um quadrado.\n");
    } else {
        printf("É um retângulo.\n");
    }
}
