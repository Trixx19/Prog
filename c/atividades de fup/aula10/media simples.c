#include<stdio.h>
int main(){
    int quantidade;
    float notas, media=0;
    
    scanf("%d", &quantidade);
    
    for(int i=0; i<quantidade; i++){
        
        scanf("%f", &notas);
        
        media+= notas;
        
    }
    
    printf("%.1f", media/quantidade);
}