#include <stdio.h>
 
int main() {
 
    int n;
    int x, i;
    int soma;
    
    scanf("%d", &n);
    
    while (n--)
    {
        scanf("%d", &x);
        
        soma = 0;
        
        for ( i = 1; i < x; i++ )
        {
            if (x % i == 0) soma += i;
        }

        printf("%d ", x);
        if ( soma != x ) printf("nao ");
        printf("eh perfeito\n");
    }
 
    return 0;
}