#include <stdio.h>
#include <string.h>

#define MAX 61

int esq[MAX], dir[MAX];

int main() {
 
    int n, m, count, i;
    char l;
    
    while (scanf("%d", &n) != EOF)
    {
        memset(esq, 0, sizeof(esq));
        memset(dir, 0, sizeof(dir));
        count = 0;
        
        for (i = 0; i < n; i++)
        {
            scanf("%d %c", &m, &l);
            
            if (l == 'D') dir[m]++;
            else esq[m]++;
        }
        
        for (i = 30; i < MAX; i++)
        {
            if (esq[i] > dir[i]) count += dir[i];
            else count += esq[i];
        }
        printf("%d\n", count);
    }
    
    return 0;
}