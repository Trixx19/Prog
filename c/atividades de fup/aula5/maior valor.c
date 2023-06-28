#include <stdio.h>
int main(){
    
    int a, b, c, d, maior;
    
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    maior = a;
    
    if(a<b){
        maior = b;
    }if (b<c){
        maior = c;
    } if (c<d){
        maior =d;
    } if(maior< a){
        maior = a;
    }
    
    printf("%d", maior);
}