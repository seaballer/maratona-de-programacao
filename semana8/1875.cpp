#include <bits/stdc++.h>

using namespace std;

typedef struct Time {
    string nome;
    int gols;
    struct Time *prox;
    struct Time *prev;
} Time;

int main()
{
    map<char, Time*> mp;
    map<char, Time*>::iterator it;
    int c, p, maior, igualdades, igual;
    char marcou, sofreu;
    Time red, green, blue;
    string resultado;

    red.nome = "red";
    red.prox = &green;
    red.prev = &blue;

    green.nome = "green";
    green.prox = &blue;
    green.prev = &red;

    blue.nome = "blue";
    blue.prox = &red;
    blue.prev = &green;

    mp.insert( make_pair('R', &red) );
    mp.insert( make_pair('G', &green) );
    mp.insert( make_pair('B', &blue) );

    cin >> c;

    while (c--)
    {
        cin >> p;
        
        mp['R']->gols = 0;
        mp['G']->gols = 0;
        mp['B']->gols = 0;
        
        while (p--)
        {
            
            cin >> marcou >> sofreu;
            
            if (mp[marcou]->prev == mp[sofreu])
            {
                mp[marcou]->gols++;
            }
            else
            {
                mp[marcou]->gols += 2;
            }        
        }
        
        maior = max({mp['R']->gols, mp['G']->gols, mp['B']->gols});
        resultado = "red";
        igualdades = 0;
        igual = 0;
        for (it = mp.begin(); it != prev(mp.end()); it++)
        {
            if (it->second->gols == (next(it))->second->gols)
            {
                igualdades++;
                igual = it->second->gols;
            }
            if (it->second->gols == maior)
            {
                resultado = it->second->nome;
            }
        }
        if (igualdades != 0)
        {
            if (igualdades == 2) 
                resultado = "trempate";
            else if (maior == igual)
                resultado = "empate";
        }
        cout << resultado << endl;
    }

    return 0;
}