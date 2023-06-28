#include<stdio.h>
int main(){
    int a, b;
    char sinal;
    
    scanf("%d %d %c", &a, &b, &sinal);
    
    if (sinal == '+'){
        
        a= a+b;
        
        printf("%d", a);
        
    } else if (sinal == '-'){
        a=a-b;
        
        printf("%d", a);
        
    } else if (sinal == '/' && b != 0){
        
        a= a/b;
        
        printf("%d", a);
        
    } else if (sinal =='*'){
        
        a= a*b;
        
        printf("%d", a);
    } else{
        
        printf("invalida");
    }
    
}