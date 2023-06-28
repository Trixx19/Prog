#include<stdio.h>
int main(){
    int a, b, soma=0;
    
    scanf("%d %d", &a, &b);
    
    if(a > b){
        printf("invalido");
    }
    else {

    for(int i=a; i<=b; i++){
        
        soma+= i;
        
    }
    
    printf("%d", soma);

        
    }
    
}