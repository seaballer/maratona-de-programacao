#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int f, s, g, u, d;
    int dist[100001];
    int i, x;
    queue<int> q;

    cin >> f >> s >> g >> u >> d;

    for (i = 1; i <= f; i++)
    {
        dist[i] = -1;
    }

    q.push(s);
    dist[s] = 0;

    while (!q.empty())
    {
        x = q.front();
        q.pop();

        if (x == g)
        {
            cout << dist[x] << endl;
            return 0;
        }

        
    }

    return 0;
}
