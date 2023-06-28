#include <stdio.h>
int main(){
    int numero, aux = 31;
    
    for(int i = 0; i <=5; i++){
        scanf("%d", &numero);
        if(numero<=aux)
            aux = numero;
    }
        printf("%d", aux);
}