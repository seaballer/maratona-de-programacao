#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main()
{
    queue<int> q;
    stack<int> s;
    priority_queue<int> pq;
    int n, op, x, flagq, flags, flagpq;

    while (cin >> n)
    {
        while (!q.empty()) q.pop();
        while (!s.empty()) s.pop();
        while (!pq.empty()) pq.pop();

        flagq = flags = flagpq = 1;
        while (n--)
        {
            cin >> op >> x;
            if (op == 1)
            {
                if (flagq) q.push(x);
                if (flags) s.push(x);
                if (flagpq) pq.push(x);
            }
            else
            {
                if (flagq)
                {
                    if (q.empty() || q.front() != x) flagq = 0;
                    else q.pop();
                }
                if (flags)
                {
                    if (s.empty() || s.top() != x) flags = 0;
                    else s.pop();
                }
                if (flagpq)
                {
                    if (pq.empty() || pq.top() != x) flagpq = 0;
                    else pq.pop();
                }
            }
        }

        if (flagpq+flags+flagq > 1) cout << "not sure";
        else if (flagpq+flags+flagq == 0) cout <<"impossible";
        else
        {
            if (flagpq) cout << "priority queue";
            if (flagq) cout << "queue";
            if (flags) cout << "stack"; 
        }
        cout << "\n";

    }

    return 0;
}