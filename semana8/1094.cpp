#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, quantia, total[84] = {0};
    char tipo;


    cin >> n;

    while (n--)
    {
        cin >> quantia >> tipo;
        
        total[0] += quantia;
        total[tipo] += quantia;
    }

    printf("Total: %d cobaias\n", total[0]);
    printf("Total de coelhos: %d\n", total['C']);
    printf("Total de ratos: %d\n", total['R']);
    printf("Total de sapos: %d\n", total['S']);
    printf("Percentual de coelhos: %.2lf %%\n", ((double)total['C'])*100.0/total[0]);
    printf("Percentual de ratos: %.2lf %%\n", ((double)total['R'])*100.0/total[0]);
    printf("Percentual de sapos: %.2lf %%\n", ((double)total['S'])*100.0/total[0]);
    
    return 0;
}