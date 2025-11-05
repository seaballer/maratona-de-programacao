#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, b, x, y;

    while (cin >> n && n)
    {
        a = 0;
        b = 0;
        while (n--)
        {
            cin >> x >> y;

            if (x > y) a++;
            else if (y > x) b++;
        }
        printf("%d %d\n", a, b);
    }

    return 0;
}