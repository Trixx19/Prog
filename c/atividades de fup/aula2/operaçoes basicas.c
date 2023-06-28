#include<stdio.h>
int main(){
    int a;
    int b;
    
    scanf("%d %d", &a, &b);
    
    int soma= a+b;
    int sub = a-b;
    int mult= a * b;
    float divisao = (float)a/b;
    int resto= a%b;
    
    printf("%d\n%d\n%d\n%.2f\n%d", soma, sub, mult, divisao, resto);
    
    
    
}