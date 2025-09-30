#include <iostream>

using namespace std;

int main()
{
    double x, y;

    cin >> x >> y;

    if (x == 0)
    {
        if ( y != 0 ) cout << "Eixo Y";
        else cout << "Origem";
    }
    else if (x > 0)
    {
        if (y > 0) cout << "Q1"; 
        else if (y < 0) cout << "Q4";
        else cout << "Eixo X";
    }
    else
    {
        if (y > 0) cout << "Q2";
        else if (y < 0) cout << "Q3";
        else cout << "Eixo X";
    }
    cout << "\n";

    return 0;
}
