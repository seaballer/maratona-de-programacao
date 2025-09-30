#include <stdio.h>

int main()
{
    char n[20];
    int i;

    scanf("%s", n);

    i = 0;
    while (n[i] != '\0')
    {
        if (n[i] == '1' && n[i+1] == '3')
        {
            printf("%s es de Mala Suerte\n", n);
            return 0;
        }
        i++;
    }

    printf("%s NO es de Mala Suerte\n", n);

    return 0;
}