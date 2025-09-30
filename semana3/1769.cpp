#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    int i, pos;
    int cpf[12];
    int b1, b2;
    string scpf;

    while ( cin >> scpf )
    {
        pos = 1;
        for ( i = 0; scpf[i] != '\0'; i++ )
        {
            if (isdigit(scpf[i]))
            {
                cpf[pos++] = scpf[i] - '0';
            }
        }
        
        // pos = 12
        b1 = 0;
        b2 = 0;
        for ( i = 1; i <= 9; i++ )
        {
            b1 += cpf[i] * i;
            b2 += cpf[i] * (10-i);
        }
        b1 %= 11;
        if (b1 == 10) b1 = 0;
        b2 %= 11;
        if (b2 == 10) b2 = 0;

        cout << "CPF " << ( (b1 == cpf[10] && b2 == cpf[11]) ? "valido\n" : "invalido\n" );
    }
    
    return 0;
}
