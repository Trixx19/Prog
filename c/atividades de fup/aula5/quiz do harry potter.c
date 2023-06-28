#include <stdio.h>
int main(){
    
    char a, b, c, d;
    int cont = 0;
    
    scanf("%c %c %c %c", &a, &b, &c, &d);
    
    if (a == 'd'){
        
        cont++;
        
    } if (b == 'a'){
        
        cont++;
        
    } if (c  == 'c'){
        
        cont++;
        
    } if(d == 'd'){
        cont++;
    }
    
    
    if(cont == 0){
        
        printf("Nunca assistiu");
        
    } else if(cont == 1){
        
        printf("Ja ouviu falar");
        
    } else if(cont == 2){
        
        printf("Interessado no assunto");
        
    } else if (cont == 3){
        
        printf("Fa");
        
    } else if(cont == 4){
        
        printf("Super fa");
        
    }
}