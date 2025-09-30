#include <iostream>

using namespace std;

int main()
{
    int n, t, min = 21, i, pos;

    cin >> n;

    for (i = 1; i <= n; i++)
    {
        cin >> t;
        if ( t < min )
        {
            min = t;
            pos = i;
        }
    }

    cout << pos << endl;

    return 0;
}