#include <stdio.h>

#define ZERO 48
 
int main() {
 
    int n, i, soma;
    char led[100];
    int valores[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6}; // numero tem quantos leds
    
    scanf("%d", &n);
    
    while (n--)
    {
        scanf("%s", led);
        soma = 0;
        for ( i = 0; led[i] != '\0'; i++ )
        {
            soma += valores[ led[i] - ZERO ];
        }
        printf("%d leds\n", soma);
    }
 
    return 0;
}