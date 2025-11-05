#include <bits/stdc++.h>
#include <cctype>

using namespace std;

int main()
{
    string s;
    int flag[4];

    while (getline(cin, s))
    {
        memset(flag, 0, sizeof(flag));
        flag[3] = 1;

        if (s.size() < 6 || s.size() > 32)
        {
            cout << "Senha invalida." << endl;
            continue;
        }
        else
        {
            for (auto c : s)
            {
                if (isupper(c)) flag[0] = 1;
                if (islower(c)) flag[1] = 1;
                if (isdigit(c)) flag[2] = 1;
                if (ispunct(c) || isspace(c)) flag[3] = 0;
            }

            if (flag[0] && flag[1] && flag[2] && flag[3])
            {
                cout << "Senha valida." << endl;
            }
            else
            {
                cout << "Senha invalida." << endl;
            }
        }
    }

    return 0;
}