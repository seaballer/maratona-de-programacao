#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a, b;

    cin >> a >> b;
    
    a += b;
    a /= 2.0;

    cout << "MEDIA = " << fixed << setprecision(5) << a << endl;

    return 0;
}