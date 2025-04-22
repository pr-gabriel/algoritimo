/*5. Repita o exercício 4, porém agora usando a fórmula de juros compostos. Para calcular juros
compostos a fórmula é a que se segue: j௖ = c ∗ (1 + t)௠.
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int m;
    float c, t, j=0.0;
    printf("Digite o valor do empréstimo, em reais(Ex.:1833.68): \n");
    scanf("%f", &c);
    printf("Agora a quantidade de meses do empréstimo (Ex.:24): \n");
    scanf("%d", &m);
    printf("Por fim, a taxa de juros(em porcentagem. Ex.:12.8): \n");
    scanf("%f", &t);
    j= c* pow(1 + (t/100.0), m);
    printf("Os juros aplicados ao empréstimo eh: %.2f", j);
}
