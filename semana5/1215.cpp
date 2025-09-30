#include <iostream>
#include <string>
#include <cctype>
#include <sstream>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
    string texto, palavra, limpo;
    stringstream ss;
    set<string> res;
    set<string>::iterator it;
    char c;

    while ( getline(cin, texto) )
    {
        ss.clear();
        ss.str(texto);

        while (ss >> palavra)
        {
            limpo.clear();
            for ( char c : palavra )
            {
                if ( isalpha(c) )
                {
                    limpo.push_back(tolower(c));
                }
            }

            if (!limpo.empty())
            {
                res.insert(limpo);
            }
        }
    }

    for (it = res.begin(); it != res.end(); it++)
    {
        cout << *it << endl;
    }

    return 0;
}