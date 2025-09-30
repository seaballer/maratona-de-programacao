#include <iostream>
#include <algorithm>
#include <iterator>
#include <string>

using namespace std;

char wertyu[] = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";

int main()
{
    string s;
    char *it;
    int i;

    while ( getline(cin, s) )
    {
        i = 0;
        while (s[i] != '\0')
        {
            it = find(begin(wertyu), end(wertyu), s[i]);

            if ( it != end(wertyu) )
            {
                s[i] = *(it-1);
            }

            i++;
        }

        cout << s << '\n';
    }

    return 0;
}