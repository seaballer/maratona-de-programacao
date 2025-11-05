#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, n, count = 0;

    cin >> x;
    while (cin >> n) if (n == x) count++;
    cout << count << endl;

    return 0;
}