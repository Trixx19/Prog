#include<stdio.h>
int main(){
    int a, b, inteira, resto;
    float quebrada;
    
    scanf("%d %d", &a, &b);
    
    inteira= a/b;
    quebrada= (float)a/b;
    resto= a%b;
    printf("%d\n%d\n%.2f", inteira, resto, quebrada);
}