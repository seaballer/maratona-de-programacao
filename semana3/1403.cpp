#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>

using namespace std;

int pontos[10001];

int main()
{
    int n, m, i, j;
    int d, min, max, maior, maior2;
    vector<int> seg;
    vector<int>::iterator it;

    cin >> n >> m;

    while (n || m)
    {
        max = 0;
        min = 10001;
        maior = 0;
        maior2 = 0;
        seg.clear();
        memset(pontos, 0, sizeof(pontos));

        for ( i = 0; i < n; i++ )
        {
            for ( j = 0; j < m; j++ )
            {
                cin >> d;
                pontos[d]++;
                if (d > max) max = d;
                if (d < min) min = d;
            }
        }
        for ( i = min; i <= max; i++ )
        {
            if (pontos[i] > maior)
            {
                maior2 = maior;
                maior = pontos[i];
            }
            else if (pontos[i] > maior2)
            {
                maior2 = pontos[i];
            }
        }

        if (maior2 > 0)
        {
            for ( i = min; i <= max; i++ )
            {
                if (pontos[i] == maior2)
                {
                    seg.push_back(i);
                }
            }
        }

        sort( seg.begin(), seg.end() );

        for ( it = seg.begin(); it != seg.end(); it++ )
        {
            cout << *it;
            if (next(it) != seg.end()) cout << ' ';
        }
        cout << '\n';

        cin >> n >> m;
    }

    return 0;
}
