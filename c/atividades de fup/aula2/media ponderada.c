#include<stdio.h>
int main(){
    float a, b, c;
    
    scanf("%f %f %f", &a, &b, &c);
    
    float media = (5*a + 3*b + 2*c) / 10;
    
    printf("%f", media);
}