#include <stdio.h>
#include <ctype.h>

int main()
{
    int n, pos, i;
    char s[51], res[51];

    scanf("%d", &n);

    while (n--)
    {
        pos = 0;
        i = 0;

        scanf(" %[^\n]", s);
        
        for ( pos = 0; s[pos] != '\0'; pos++ )
            if ( islower(s[pos]) && ( (pos == 0) || (s[pos-1] == ' ') ) )
                res[i++] = s[pos];
        res[i] = '\0';
        
        printf("%s\n", res);
    }

    return 0;
}
