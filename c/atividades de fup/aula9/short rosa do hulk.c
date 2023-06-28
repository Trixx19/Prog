#include<stdio.h>
int main(){
    int hulk, quantidade, calca, contador=0;
    scanf("%d %d", &hulk, &quantidade);
    
    for(int i = 0; i < quantidade; i++){
        scanf("%d", &calca);
        if(calca > hulk){
            contador++;
        }
    }
    printf("%d", contador);
}