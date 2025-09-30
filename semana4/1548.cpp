#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n, m, i, v;
    vector<int> p, psort;

    cin >> n;

    while (n--)
    {
        cin >> m;
        p.clear();
        psort.clear();

        for ( i = 0; i < m; i++ )
        {
            cin >> v;
            p.push_back(v);
            psort.push_back(v);
        }
        
        sort(psort.rbegin(), psort.rend());

        v = 0;
        for ( i = 0; i < m; i++ )
        {
            if (p[i] == psort[i]) v++;
        }

        cout << v << '\n';
    }

    return 0;
}
