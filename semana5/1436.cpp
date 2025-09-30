#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    int t, n, i, j, x;
    vector<int> idades;

    cin >> t;

    for (i = 1; i <= t; i++)
    {
        idades.clear();
        cin >> n;

        for (j = 0; j < n; j++)
        {
            cin >> x;
            idades.push_back(x);
        }

        sort(idades.begin(), idades.end());

        printf("Case %d: %d\n", i, idades[ ceil(n/2) ]);
    }

    return 0;
}