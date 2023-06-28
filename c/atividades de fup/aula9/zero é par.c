#include<stdio.h>
int main(){
    int a, b, soma=0;
    
    scanf("%d %d ", &a, &b);
    
    if(a > b){
        printf("invalido");
    } else {
        for(int i=a; i<=b; i++){
        if(i%2 == 0){
            soma+=i;
        }
    }
    printf("%d", soma);
    }
}