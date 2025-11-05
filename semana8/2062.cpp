#include <bits/stdc++.h>
#include <cstring>

using namespace std;

int main()
{
    int n, first = 1;
    char s[21], aux[21];
    cin >> n;
    while (n--)
    {
        if (first)
        {
            first = 0;
        }
        else
        {
            cout << ' ';
        }
        scanf(" %s", s);

        strcpy(aux, s);
        aux[2] = 'I';

        if ( strcmp(aux, "OBI") == 0 || strcmp(aux, "URI") == 0 )
        {
            cout << aux;
        }
        else
        {
            cout << s;
        }
    }
    cout << endl;
    return 0;
}