#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char letras[27] = {'2', '2', '2', '3', '3', '3', '4', '4', '4', '5', '5', '5', '6', '6', '6', '7', '7', '7', '7', '8', '8', '8', '9', '9', '9', '9'};
    char numero[16];
    int i;

    scanf("%s", numero);

    while (strcmp(numero, "FIM") != 0)
    {
        i = 0;
        while (numero[i] != '\0')
        {
            if (isupper(numero[i]))
            {
                numero[i] = letras[numero[i] - 'A'];
            }
            i++;
        }

        printf("%s\n", numero);

        scanf(" %s", numero);
    }

    return 0;
}