#include <stdio.h>

#define ZERO 1001

int main() {
 
    int p, q, indice;
    float cardapio[5] = {1.5, 2.5, 3.5, 4.5, 5.5};
    float soma = 0.0;
    
    scanf("%d", &p);
    
    while (p--)
    {
        scanf("%d %d", &indice, &q);
        
        indice -= ZERO;
        
        soma += cardapio[indice] * q;
    }
    
    printf("%.2f\n", soma);
 
    return 0;
}
