#include <iostream>

using namespace std;

int main()
{
    int n, t1, t2;
    int i, flag;
    string s1, s2;

    cin >> n;

    while (n--)
    {
        cin >> s1 >> s2;

        t1 = s1.size();
        t2 = s2.size();

        if (t2 > t1)
        {
            cout << "nao encaixa\n";
        }
        else
        {
            t1 -= t2;
            flag = 0;
            for ( i = t1; s1[i] != '\0'; i++ )
            {
                if ( s1[i] != s2[i-t1] ) flag = 1;
            }

            
            if (flag) cout << "nao encaixa\n";
            else cout << "encaixa\n";
        }
    }

    return 0;
}
