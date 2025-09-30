#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    double a, b, c;
    double v[3];

    cin >> a >> b >> c;

    v[0] = a;
    v[1] = b;
    v[2] = c;

    sort(v, v+3, greater<double>());

    if (v[0] >= v[1] + v[2]) cout << "NAO FORMA TRIANGULO\n";
    else
    {
        if ( v[0]*v[0] == v[1]*v[1] + v[2]*v[2] ) cout << "TRIANGULO RETANGULO\n";
        else if ( v[0]*v[0] > v[1]*v[1] + v[2]*v[2] ) cout << "TRIANGULO OBTUSANGULO\n";
        else cout << "TRIANGULO ACUTANGULO\n";

        if (v[0] == v[1] && v[1] == v[2]) cout << "TRIANGULO EQUILATERO\n";
        else if (v[0] == v[1] || v[0] == v[2] || v[1] == v[2]) cout << "TRIANGULO ISOSCELES\n";
    }

    return 0;
}

