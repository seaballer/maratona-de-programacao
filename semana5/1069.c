#include <stdio.h>

int count;

void cava(char *s, int open)
{
    if (*s == '\0') return;

    if (*s == '<')
    {
        cava(s+1, open+1);
    }
    else if (*s == '>' && open)
    {
        count++;
        cava(s+1, open-1);
    }
    else
    {
        cava(s+1, open);
    }
}

int main()
{
    int n;
    char s[1001];

    scanf("%d", &n);

    while (n--)
    {
        scanf(" %s", s);

        count = 0;
        cava(s, 0);

        printf("%d\n", count);
    }

    return 0;
}