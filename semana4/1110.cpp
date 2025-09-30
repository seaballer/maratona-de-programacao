#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<int> d;
    int n, i, aux;

    while (cin >> n && n)
    {
        d.clear();
        for (i = 1; i <= n; i++) d.push_back(i);

        cout << "Discarded cards: ";
        while (d.size() > 1)
        {
            cout << d[0];
            if (d.size() > 2) cout << ", ";
            d.pop_front();

            aux = d[0];
            d.pop_front();
            d.push_back(aux);
        }
        cout << '\n';

        cout << "Remaining card: " << d[0] << '\n';
    }

    return 0;
}
