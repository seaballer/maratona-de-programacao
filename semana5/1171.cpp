#include <iostream>

using namespace std;

int main()
{
    int n, x[2001] = {0}, i;

    cin >> n;

    while (n--)
    {
        cin >> i;
        x[i]++;
    }

    for (i = 1; i <= 2000; i++)
    {
        if (x[i])
        {
            printf("%d aparece %d vez(es)\n", i, x[i]);
        }
    }

    return 0;
}