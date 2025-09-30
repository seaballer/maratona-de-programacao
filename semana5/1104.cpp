#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
    int a, b, x;
    set<int> alice, beatriz, amenosb, bmenosa;
    
    cin >> a >> b;

    while (a || b)
    {
        alice.clear();
        beatriz.clear();
        amenosb.clear();
        bmenosa.clear();

        while (a--)
        {
            cin >> x;
            alice.insert(x);
        }

        while (b--)
        {
            cin >> x;
            beatriz.insert(x);
        }

        set_difference(alice.begin(), alice.end(), beatriz.begin(), beatriz.end(), inserter(amenosb, amenosb.end()));
        set_difference(beatriz.begin(), beatriz.end(), alice.begin(), alice.end(), inserter(bmenosa, bmenosa.end()));

        cout << ( (amenosb.size() < bmenosa.size()) ? amenosb.size() : bmenosa.size() ) << endl;

        cin >> a >> b;
    }

    /*
    1 5 7 8 9 15
    4 6 10 11
    */

    return 0;
}
