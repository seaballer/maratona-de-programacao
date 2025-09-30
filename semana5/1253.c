#include <stdio.h>

int main()
{
    char s[51];
    int n, x, i;

    scanf("%d", &n);

    while (n--)
    {
        scanf(" %s %d", s, &x);

        i = 0;
        while (s[i] != '\0')
        {
            s[i] -= x;
            if (s[i] < 'A') s[i] += 26;
            printf("%c", s[i]);
            i++;
        }
        printf("\n");
    }

    return 0;
}