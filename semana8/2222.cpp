#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, q, m, x, i, op, y;
    unsigned long long mascara, resultado, conjuntos[10001];

    cin >> t;

    while (t--)
    {
        cin >> n;

        for (i = 1; i <= n; i++)
        {
            mascara = 0;
            cin >> m;

            while (m--)
            {
                cin >> x;
                mascara |= ( 1ULL << (x-1) );
            }

            conjuntos[i] = mascara;
        }

        cin >> q;

        while (q--)
        {
            cin >> op >> x >> y;
            
            if (op == 1) resultado = conjuntos[x] & conjuntos[y];
            else resultado = conjuntos[x] | conjuntos[y];
            
            cout << __builtin_popcountll(resultado) << endl;
        }
    }

    return 0;
}