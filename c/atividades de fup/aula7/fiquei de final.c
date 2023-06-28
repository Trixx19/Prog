#include<stdio.h>
int main(){
    int nota1, nota2, media, media_final;
    
    scanf("%d %d", &nota1, &nota2);
    
    media = (nota1 + nota2)/2;
    
    if(media >= 7){
        printf("aprovado");
    } else if(media < 4){
        printf("reprovado");
    } else if(media >= 4 && media < 7){
        
        scanf("%d", &media_final);
        
        if(media_final >= 5){
        
            printf("aprovado na final");
        
        } else {
           
            printf("reprovado na final");
       
        }
    }
}