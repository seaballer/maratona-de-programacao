#include <bits/stdc++.h>

using namespace std;

typedef struct Carro
{
    int chegada;
    int saida;
} Carro;

int main()
{
    int n, k;
    int c, s, i, flag;
    stack<Carro> st;

    while (cin >> n >> k && (n || k))
    {
        while (!st.empty())
        {
            st.pop();
        }
        flag = 0;
        for (i = 1; i <= n; i++)
        {
            cin >> c >> s;
            
            if (st.empty())
            {
                st.push({c, s});
            }
            else
            {
                while (!st.empty() && st.top().saida <= c)
                {
                    st.pop();
                }

                if (st.size() >= k)
                {
                    flag++;
                }
                else if (!st.empty() && st.top().saida <= s)
                {
                    flag++;
                }
                else
                {
                    st.push({c, s});
                }
            }
        }

        cout << (flag ? "Nao" : "Sim") << endl;
    }

    return 0;
}