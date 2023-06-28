#include<stdio.h>
int main(){
    
    int a, b, c, h, l;
    
    scanf("%d %d %d %d %d", &a, &b, &c, &h, &l);
    
    if((a <= h && b <= l)||(b <= h && a <= l)||(a <= h && c <= l)||(c <= h && a <= l)||(b <= h && c <= l)||(c <= h && b <= l)){
        
        printf("S");
        
    } else 
        
        printf("N");
}