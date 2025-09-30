#include <iostream>

using namespace std;

int main()
{
    int n, x;
    int i, flag;

    cin >> n;

    while (n--)
    {
        cin >> x;

        flag = 0;
        for (i = 1; i <= x; i++)
        {
            if (!(x%i)) flag++; 
        }

        cout << x << ((flag == 2) ? " eh primo\n" : " nao eh primo\n");
    }

    return 0;
}