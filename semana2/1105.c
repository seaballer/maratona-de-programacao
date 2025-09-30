#include <stdio.h>
#define MAX 20

int main() {
 
    int b, n;
    int i, flag;
    int banco[MAX];
    int d, c;
    long int v;

    scanf("%d %d", &b, &n);
    
    while (b || n)
    {

        for ( i = 1; i <= b; i++ )
        {
            scanf("%d", &banco[i]);
        }

        for ( i = 0; i < n; i++ )
        {
            scanf("%d %d %ld", &d, &c, &v);

            banco[d] -= v;
            banco[c] += v;
        }

        flag = 0;
        for ( i = 1; i <= b; i++ )
        {
            if ( banco[i] < 0 ) flag = 1;
        }

        printf(flag ? "N\n" : "S\n");
        
        scanf("%d %d", &b, &n);
    }
 
    return 0;
}