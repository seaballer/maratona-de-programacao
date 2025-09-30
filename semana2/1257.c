#include <stdio.h>
#include <string.h>

#define MAX 50
#define ZERO 65 // cálculo de ascii

int main() {
 
    int n, l, i;
    char s[MAX];
    unsigned int hash;
    int id;
    
    scanf("%d", &n); 
    
    while (n--)
    {
        scanf("%d", &l);
        
        hash = 0;
        for (i = 0; i < l; i++ )
        {
            // lógica aqui dentro
            scanf(" %s", s);
            
            for ( id = 0; s[id] != '\0'; id++ )
            {
                hash += s[id] - ZERO;
                hash += i; 
                hash += id; 
            }
        }
        
        printf("%u\n", hash);
    }
 
    return 0;
}