#include <iostream>
#include <cctype>

using namespace std;

int decimal(string x, int y)
{
    int n, dec, i;
    n = 1;
    dec = 0;

    for (i = x.length() - 1; i >= 0; i--)
    {
        if ( isalpha(x[i]) )
        {
            dec += (x[i] - 'a' + 10) * n;
        }
        else
        {
            dec += (x[i] - '0') * n;
        }

        n *= y;
    }

    return dec;
}

string conversao(int dec, int y)
{
    string x = "";

    while (dec)
    {
        if (dec % y > 9)
        {
            x = (char)((dec % y) - 10 + 'a') + x;
        }
        else
        {
            x = (char)((dec % y) + '0') + x;
        }

        dec /= y;
    }

    return x;
}

int main()
{
    int n, i, dec;
    string x, y;

    cin >> n;

    for (i = 1; i <= n; i++)
    {
        cin >> x >> y;

        cout << "Case " << i << ":" << endl;

        if (y == "bin")
        {
            dec = decimal(x, 2);

            cout << dec << " dec" << endl;
            cout << conversao(dec, 16) << " hex" << endl;
        }
        else if (y == "dec")
        {
            dec = decimal(x, 10);

            cout << conversao(dec, 16) << " hex" << endl;
            cout << conversao(dec, 2) << " bin" << endl;
        }
        else //if (y == "hex")
        {
            dec = decimal(x, 16);

            cout << dec << " dec" << endl;
            cout << conversao(dec, 2) << " bin" << endl;
        }
        
        cout << endl;
    }

    return 0;
}