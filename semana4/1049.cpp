#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    map<int, string> mp;
    string s;
    char c1, c2, c3;

    mp['v'+'a'+'r'] = "aguia";
    mp['v'+'a'+'i'] = "pomba";
    mp['v'+'m'+'i'] = "homem";
    mp['v'+'m'+'r'] = "vaca";
    mp['i'+'i'+'m'] = "pulga";
    mp['i'+'i'+'r'] = "lagarta";
    mp['i'+'a'+'m'] = "sanguessuga";
    mp['i'+'a'+'i'] = "minhoca";

    cin >> s;
    c1 = s[0];
    cin >> s;
    c2 = s[0];
    cin >> s;
    c3 = s[2];

    cout << mp[c1+c2+c3] << '\n';

    return 0;
}

