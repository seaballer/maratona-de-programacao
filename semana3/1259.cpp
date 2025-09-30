#include <iostream>
#include <algorithm>
#include <deque>

using namespace std;

deque<unsigned> ev, od; // par, impar
deque<unsigned>::iterator it;

int main()
{
    int n;
    unsigned d;

    cin >> n;

    while (n--)
    {
        cin >> d;
       
        if (d%2 == 0)
        {
            ev.push_back(d);
        }
        else
        {
            od.push_back(d);
        }  
    }

    sort(ev.begin(), ev.end());
    sort(od.rbegin(), od.rend());

    for ( it = ev.begin(); it != ev.end(); it++ )
    {
        cout << *it << '\n';
    }
    
    for ( it = od.begin(); it != od.end(); it++ )
    {
        cout << *it << '\n';
    }

    return 0;
}
