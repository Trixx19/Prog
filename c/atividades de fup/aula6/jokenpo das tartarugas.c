#include<stdio.h>
int main(){
    char a, b;
    scanf("%c %c", &a, &b);
   
   /* p s = s
    p r =p
    s r= r
    */
    
    if (a == b){
        
        printf("empate");
        
    } else if(a == 'P' && b == 'R'){
        
        printf("jog1");
        
    } else if(a == 'R' && b == 'S'){
        
        printf("jog1");
        
    } else if(a == 'S' && b == 'P'){
        
        printf("jog1");
    
    } else{
        printf("jog2");
    } 


    
}