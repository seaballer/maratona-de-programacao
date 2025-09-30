#include <iostream>
#include <map>
#include <sstream>

using namespace std;

int main()
{
    int t, m, n, flag;
    map<string, string> mp;
    map<string, string>::iterator it;
    string c, v;
    string linha, palavra;
    stringstream ss;

    cin >> t;

    while (t--)
    {
        cin >> m >> n;
        cin.ignore();
        mp.clear();

        while (m--)
        {
            getline( cin, c );
            getline( cin, v );
            mp[c] = v;
        }

        while (n--)
        {
            flag = 1;
            ss.clear();

            getline( cin, linha );
            ss.str(linha);

            while (ss >> palavra)
            {
                if (!flag) cout << ' ';
                flag = 0;

                it = mp.find(palavra);
                if (it != mp.end()) cout << it->second;
                else cout << palavra;
            }
            cout << '\n';
        }

        cout << '\n';
    }

    return 0;
}
