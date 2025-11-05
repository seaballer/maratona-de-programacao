#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a1, a2, a3, resultado;

    cin >> a1 >> a2 >> a3;

    resultado = min({ ((a1+a3)*2), (a2*2 + a3*4), (a1*4 + a2*2) });

    cout << resultado << endl;

    return 0;
}