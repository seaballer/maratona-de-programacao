#include <iostream>

using namespace std;

int main()
{
    int anos, meses, dias;
    
    cin >> dias;
    
    anos = dias / 365;
    dias -= 365*anos;
    meses = dias / 30;
    dias -= 30*meses;
    
    cout << anos << " ano(s)\n" << meses << " mes(es)\n" << dias << " dia(s)\n"; 
    
    return 0;
}
