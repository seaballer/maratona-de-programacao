#include <stdio.h>
 
int main() {
 
    int horai, horaf, mini, minf;
    int hora, min;
    
    scanf("%d %d %d %d", &horai, &mini, &horaf, &minf);
    
    if (horaf <= horai)
    {
        horaf += 12;
        horai -= 12;
    }
    
    if (minf < mini)
    {
        horaf--;
        minf += 60;
    }
    
    hora = horaf - horai;
    min = minf - mini;
    
    if (hora == 24 && min > 0)
    {
        hora = 0;
    }
    
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hora, min);
    
    return 0;
}
