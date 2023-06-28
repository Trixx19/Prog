#include <stdio.h>
int main(){
    int numero;
    scanf("%d", &numero);
    
    int resultado = numero / 1000;
    printf("%d\n", resultado);
    
    int resultado2 = numero % 1000;
    resultado2 = resultado2 / 100;
    printf("%d\n", resultado2);
    
    int resultado3 = numero % 100;
    resultado3 = resultado3 / 10;
    printf("%d\n", resultado3);
    
    int resultado4 = numero % 10;
    printf("%d", resultado4);
    
    return 0;
}