#include <stdio.h>
#include <string.h>

int main()
{
    char s[401];
    char face[5], rev[5];
    int n, i, j, pos = 4, count = 0;
    s[0] = 'F'; s[1] = 'A'; s[2] = 'C'; s[3] = 'E';

    scanf("%d", &n);
    while (n--)
    {
        scanf(" %c %c %c %c", &face[0], &face[1], &face[2], &face[3]);
        //printf("%s\n", face);
        face[4] = '\0';
        i = 0;
        while (face[i] != '\0')
        {
            s[pos++] = face[i++];
            //printf("%d %d\n", i, pos);
            //printf("%s\n", s);
        }
        s[pos] = '\0';
        
        j = 0;
        for (i = pos-5; i > pos-9; i--)
        {
            rev[j++] = s[i];
            //printf("%d %d\n", i, j);
            //printf("%s\n", rev);
        }
        rev[j] = '\0';
        //printf("\n%s %s\n", face, rev);
        if (strcmp(face, rev) == 0)
        {
            pos = i+1;
            if (pos == 0)
            {
                s[0] = 'F'; s[1] = 'A'; s[2] = 'C'; s[3] = 'E';
                pos = 4;
            }
            else s[pos] = '\0';
            count++;
            //printf("%s %d\n", s, count);
        }
    
    }

    printf("%d\n", count);

    return 0;
}
