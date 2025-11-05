#include <bits/stdc++.h>

using namespace std;

int main()
{
    int caverna[10][10], adj[10][10];
    int n, m, i, j;
    int ini_l, ini_c;

    cin >> n >> m;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cin >> caverna[i][j];

            if (caverna[i][j] == 3)
            {
                ini_l = i;
                ini_c = j;
            }
        }
    }

    
    

    return 0;
}