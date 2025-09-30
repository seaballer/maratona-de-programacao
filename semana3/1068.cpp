#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s[1001];
    int open, close, i;

    while (cin >> s)
    {
        open = 0;
        close = 0;
        i = 0;
        while (s[i] != '\0')
        {
            if (s[i] == '(')
            {
                open += 1;
            }

            if (s[i] == ')')
            {
                close += 1;
                if (close > open) break;
            }

            i++;
        }

        cout << ((open == close) ? "correct\n" : "incorrect\n");
    }

    return 0;
}
