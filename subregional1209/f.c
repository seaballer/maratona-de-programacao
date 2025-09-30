#include <stdio.h>
#include <string.h>

int cont[10001];

int main()
{
    int n, i, maior;

    scanf("%d", &n);

    while (n)
    {
        memset(cont, 0, sizeof(cont));

        maior = 0;
        while (n--)
        {
            scanf("%d", &i);
            cont[i]++;
            if (cont[i] > maior) maior = cont[i];
        }

        i = 1;
        while (1)
        {
            if (cont[i] == maior)
            {
                printf("%d\n", i);
                break;
            }
            i++;
        }

        scanf("%d", &n);
    }
    return 0;
}