#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    while (cin >> a >> b >> c)
    {
        if (a+b+c == 0 || a+b+c == 3) cout << '*' << endl;
        if (a+b+c == 1)
        {
            if (a) cout << 'A' << endl;
            if (b) cout << 'B' << endl;
            if (c) cout << 'C' << endl;
        }
        if (a+b+c == 2)
        {
            if (!a) cout << 'A' << endl;
            if (!b) cout << 'B' << endl;
            if (!c) cout << 'C' << endl;
        }
    }

    return 0;
}