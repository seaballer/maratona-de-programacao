#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a, b, c;

    cin >> a >> b >> c;
    
    a *= 2; b *= 3; c *= 5;
    a += b + c;
    a /= 3.0;

    cout << "MEDIA = " << fixed << setprecision(1) << a << endl;

    return 0;
}