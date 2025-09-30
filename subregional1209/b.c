#include <stdio.h>
#include <string.h>

int main()
{
    int n, i1, i2, j;
    char s1[51], s2[51], s3[102];


    scanf("%d", &n);

    while (n--)
    {
        scanf(" %s %s", s1, s2);

        i1 = 0;
        i2 = 0;
        j = 0;
        while (s1[i1] != '\0' && s2[i2] != '\0')
        {
            s3[j++] = s1[i1++];
            s3[j++] = s2[i2++];
        }

        while (s1[i1] != '\0')
        {
            s3[j++] = s1[i1++];
        }
        while (s2[i2] != '\0')
        {
            s3[j++] = s2[i2++];
        }
        s3[j] = '\0';

        printf("%s\n", s3);
    }

    return 0;
}
