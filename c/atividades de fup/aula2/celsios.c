#include<stdio.h>
int main(){
    float Celsius;
    
    scanf("%f", &Celsius);
    
    float Fahrenheit = Celsius * 9 / 5 + 32;
    
    printf("%f", Fahrenheit);
}