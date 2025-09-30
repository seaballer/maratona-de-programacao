#include <stdio.h>
#include <string.h>

char s[300001];

int main()
{
    int h = 1;
    char a[8];
    char *res;

    scanf("%s", a);

    while (strlen(a) > 1 && a[0] != '0')
    {
        scanf(" %s", s);
        
        res = strstr(s, a);
        
        printf("Instancia %d\n", h++);
        (res != NULL) ? printf("verdadeira\n") : printf("falsa\n");
        
        scanf(" %s", a);
        if (strlen(a) > 1 && a[0] != '0') printf("\n");
    }

    return 0;
}