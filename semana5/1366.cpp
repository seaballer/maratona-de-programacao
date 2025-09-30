#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, c, v, i, pares;

    while (cin >> n && n)
    {
        pares = 0;

        for (i = 0; i < n; i++)
        {
            cin >> c >> v;

            pares += floor(v / 2);
        }

        cout << floor(pares / 2) << endl;
    }

    return 0;
}