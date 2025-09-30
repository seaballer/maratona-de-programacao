#include <iostream>
#include <set>
#include <sstream>

using namespace std;

int main()
{
    int n;
    string linha, palavra;
    stringstream ss;
    set<string> s;
    set<string>::iterator it;

    cin >> n;
    cin.ignore();

    while (n--)
    {
        s.clear();
        ss.clear();
        getline( cin, linha );
        ss.str(linha);

        while (ss >> palavra)
        {
            s.insert(palavra);
        }

        for ( it = s.begin(); it != s.end(); it++ )
        {
            if (it != s.begin()) cout << ' ';
            cout << *it;
        }

        cout << '\n';
    }

    return 0;
}
