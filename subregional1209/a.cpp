#include <iostream>
#include <cstring>

using namespace std;

int cima[10000], baixo[10000];

int main()
{
    unsigned n, t, v;
    int i, j, aux;

    cin >> n >> t;

    while (n || t)
    {
        memset(cima, 0, sizeof(cima));
        memset(baixo, 0, sizeof(baixo));

        for (i = 0; i < n; i++)
        {
            cin >> v;
            cima[i] = v;
        }
        
        for (i = 0; i < n; i++)
        {
            cin >> v;
            baixo[i] = v;
        }

        while (t--)
        {
            cin >> i >> j;

            for (v = i; v <= j; v++)
            {
                aux = cima[v];
                cima[v] = baixo[v];
                baixo[v] = aux;
            }
        }

        for (i = 0; i < n; i++)
        {
            cout << cima[i] << ' ';
        }

        cin >> n >> t;
    }

    return 0;
}
