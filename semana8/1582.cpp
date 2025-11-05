#include <bits/stdc++.h>

using namespace std;

int gcd3(int x, int y, int z)
{
    return gcd(gcd(x, y), z);
}

int main()
{
    int x, y, z;
    vector<int> tri;

    while (cin >> x >> y >> z)
    {   
        tri.clear();

        tri.push_back(x);
        tri.push_back(y);
        tri.push_back(z);

        sort(tri.begin(), tri.end());

        if (tri[0]*tri[0] + tri[1]*tri[1] == tri[2]*tri[2])
        {
            if (gcd3(tri[0], tri[1], tri[2]) == 1)
            {
                cout << "tripla pitagorica primitiva" << endl;
            }
            else
            {
                cout << "tripla pitagorica" << endl;
            }
        }
        else
        {
            cout << "tripla" << endl;
        }
    }

    return 0;
}