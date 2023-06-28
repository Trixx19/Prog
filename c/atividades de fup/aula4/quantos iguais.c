#include<stdio.h>
int main(){
    int a, b, c;
    int cont = 0;
    
    scanf("%d %d %d", &a, &b, &c);
    
   if(a == b && b == c){
        printf("3");
}  else if((a == b && c!=a) || (a == b && c!= b) || (b == c && b!=a) || (a == c && a!= b)){
        printf("2");
}  else 
    printf("0");
}