#include <iostream>
#include <numeric>

using namespace std;

int main()
{
    int n;
    int n1, d1, n2, d2, num, den, mdc;
    char bar, op;

    cin >> n;

    while (n--)
    {
        cin >> n1 >> bar >> d1 >> op >> n2 >> bar >> d2;

        if (op == '+')
        {
            num = (n1*d2 + n2*d1);
            den = (d1*d2);
        }
        if (op == '-')
        {
            num = (n1*d2 - n2*d1);
            den = (d1*d2);
        }
        if (op == '*')
        {
            num = (n1*n2);
            den = (d1*d2);
        }
        if (op == '/')
        {
            num = (n1*d2);
            den = (n2*d1);
        }

        printf("%d/%d = ", num, den);

        mdc = gcd(num, den);

        num /= mdc;
        den /= mdc;

        printf("%d/%d", num, den);

        cout << endl;
    }

    return 0;
}