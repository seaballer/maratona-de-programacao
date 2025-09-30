#include <stdio.h>

int altura[10001];

int main()
{
    int a, c, i;
    int cont;

    scanf("%d %d", &a, &c);

    while (a || c)
    {

        for ( i = 0; i < c; i++ )
        {
            scanf("%d", &altura[i]);
        }

        cont = a - altura[0];
        
        for ( i = 1; i < c; i++ )
        {
            if (altura[i] < altura[i-1])
            {
                cont += altura[i-1] - altura[i];
            }
        }

        printf("%d\n", cont);

        scanf("%d %d", &a, &c);
    }
    return 0;
}