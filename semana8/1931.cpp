#include <bits/stdc++.h>
using namespace std;

int grafo[10001][10001];
int custo[10001][2], rota[10001];

int main()
{
    int c, v, c1, c2, g, i, menor, par;
    set<int> abertos, fechados, vizinhos, aux;
    set<int>::iterator it;
    vector<int> caminho;

    cin >> c >> v;

    while (v--)
    {
        cin >> c1 >> c2 >> g;

        grafo[c1][c2] = g;
    }

    for (i = 1; i <= c; i++)
    {
        custo[i][0] = INT_MAX;
        custo[i][1] = INT_MAX;
        rota[i] = 1;
        abertos.insert(i);
    }

    custo[1][1] = 0;

    while (!abertos.empty())
    {
        menor = INT_MAX;
        v = 0;
        par = 0;
        for (it = abertos.begin(); it != abertos.end(); it++)
        {
            for (i = 0; i < 2; i++)
            {
                if (custo[*it][i] < menor)
                {
                    menor = custo[*it][i];
                    v = *it;
                    par = i;
                }
            }
        }
            
        vizinhos.clear();
        for (i = 1; i <= c; i++)
        {
            if (grafo[v][i] > 0 || grafo[i][v] > 0) vizinhos.insert(i);
        }

        fechados.insert(v);
        abertos.erase(v);
        set_difference(vizinhos.begin(), vizinhos.end(), fechados.begin(), fechados.end(), inserter(aux, aux.begin()));
        vizinhos = aux;

        
        for (it = vizinhos.begin(); it != vizinhos.end(); it++)
        {
            if (custo[*it][1-par] > custo[v][par] + grafo[v][*it])
            {
                custo[*it][1-par] = custo[v][par] + grafo[v][*it];
                rota[*it] = v;
            }
        }
    }

    caminho.insert(caminho.begin(), c);

    while (rota[caminho[0]] != 1)
    {
        caminho.insert(caminho.begin(), rota[caminho[0]]);
    }

    cout << (custo[c][0] == INT_MAX ? -1 : custo[c][0]) << endl;

    return 0;
}