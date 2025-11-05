#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, d, i, b, k, q, id, qtd, aux;
    int preco[100], bolo[101];
    vector<int> count;
    vector<int>::iterator max;

    cin >> t;

    while (t--)
    {
        cin >> d >> i >> b;
        count.clear();

        for (k = 0; k < i; k++)
        {
            cin >> preco[k];
        }

        for (k = 1; k <= b; k++)
        {
            bolo[k] = 0;
            count.push_back(0);

            cin >> q;
            
            while (q--)
            {
                cin >> id >> qtd;

                bolo[k] += preco[id] * qtd;
            }

            aux = bolo[k];
            while (aux <= d)
            {
                count[k-1]++;
                aux += bolo[k];
            }
        }

        max = max_element(count.begin(), count.end());
        cout << *max << endl;
    }

    return 0;
}