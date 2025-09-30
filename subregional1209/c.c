#include <stdio.h>

int mat[1000][1000], soma[1000][1000];

int main()
{
    int l, c, m, n, i, j;

    scanf("%d %d %d %d", &l, &c, &m, &n);

    while (l || c || m || n)
    {
        for ( i = 0; i < l; i++ )
        {
            for ( j = 0; j < c; j++ )
            {
                scanf("%d", &mat[i][j]);
            }
        }

        for ( i = 0; i < l; i++ )
        {
            for ( j = 0; j < n; j++)
            {
                
            }
        }

        scanf("%d %d %d %d", &l, &c, &m, &n);
    }

    return 0;
}
