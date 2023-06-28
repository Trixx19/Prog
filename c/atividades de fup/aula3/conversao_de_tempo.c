#include<stdio.h>
int main()
{
    int tempo;
    scanf("%d", &tempo);
    
    int horas = tempo / 3600;
    printf("%d\n", horas);
    
    int minutos = tempo % 3600;
    minutos = minutos / 60;
    printf("%d\n", minutos);
    
    int segundos = tempo % 10;
    printf("%d", segundos);
    
}