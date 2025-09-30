#include <stdio.h>
 
int main() {
 
    int nc, n, k, i, c;
    char pessoas[10000];
    int vivos, inicio, contador;
    
    scanf("%d", &nc);
    
    for (c = 1; c <= nc; c++)
    {
        scanf("%d %d", &n, &k);
        
        for ( i = 1; i <= n; i++ )
        {
            pessoas[i] = 'v';
        }
        
        vivos = n;
        inicio = 1;
        contador = 0;
        while (vivos > 1)
        {
            while (contador < k)
            {
                if ( pessoas[inicio] == 'v' )
                {
                    contador++;
                }
                if ( contador == k )
                {
                    break;
                }
                
                inicio++;
                if ( inicio > n )
                {
                    inicio = 1;
                }
            }
            
            pessoas[inicio] = 'm';
            vivos--;
            contador = 0;
            
            inicio++;
            if ( inicio > n ) inicio = 1;
            while ( pessoas[inicio] == 'm' )
            {
                inicio++;
                if ( inicio > n ) inicio = 1;
            }
        }
        
        for ( i = 1; i <= n; i++ )
        {
            if ( pessoas[i] == 'v' )
            {
                printf("Case %d: %d\n", c, i);
            }
        }
    }
 
    return 0;
}