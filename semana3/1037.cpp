#include <iostream>

using namespace std;

int main()
{
    double n;
    cin >> n;
    
    if (n > 100.0 || n < 0.0) cout << "Fora de intervalo\n";
    else if (n > 75.0) cout << "Intervalo (75,100]\n";
    else if (n > 50.0) cout << "Intervalo (50,75]\n";
    else if (n > 25.0) cout << "Intervalo (25,50]\n";
    else cout << "Intervalo [0,25]\n";
    
    return 0;
}
    