#include <stdio.h>
#include <string.h>

int main() {
 
    int t, i;
    int n, k, kfat, fat;
    char exclam[20];
    
    scanf("%d", &t);
    
    for ( i = 0; i < t; i++ )
    {
        scanf("%d%s", &n, exclam);
        
        k = strlen(exclam);
        
        kfat = 0;
        fat = 1;
        
        while ( (n - kfat*k) >= 1 )
        {
            fat *= (n - kfat*k);
            kfat++;
        }
        
        printf("%d\n", fat);
    }
    
    return 0;
}
