#include <stdio.h>

int main()
{
    int n, t, i;
    int s[51];
    char pulos[51];
    int cont;

    scanf("%d", &n);

    while (n--)
    {
        cont = 0;
        scanf("%d", &t);
        for (i = 0; i < t; i++) scanf("%d", &s[i]);
        scanf("%s", pulos);
        for (i = 0; i < t; i++)
        {
            if ((pulos[i] == 'J' && s[i] > 2) || (pulos[i] == 'S' && s[i] < 3)) cont++;
        } 

        printf("%d\n", cont);
    }

    return 0;
}