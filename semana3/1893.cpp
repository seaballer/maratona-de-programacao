#include <iostream>

using namespace std;

int main()
{
    int p1, p2;

    cin >> p1 >> p2;

    if (p2 <= 2)
    {
        cout << "nova\n";
    }
    else if (p2 <= 96)
    {
        cout << ( (p1 < p2) ? "crescente\n" : "minguante\n" );
    }
    else
    {
        cout << "cheia\n";
    }    

    return 0;
}
