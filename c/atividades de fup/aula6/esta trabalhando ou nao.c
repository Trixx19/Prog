#include<stdio.h>
int main(){
    int dia, hora, min;
    scanf("%d %d %d ", &dia, &hora, &min);
    
    if(dia == 1){
        
        printf("NAO");
        
    } else if(hora< 8 || (hora >= 18 && min >=0)){
        
        printf("NAO");
        
    } else if (hora>= 12 && hora<=13){
        printf("NAO");
    } else if(dia == 7 && (hora < 8 || hora > 12)){
        
        printf("NAO");
        
    } else{
        
        printf("SIM");
        
    }
}