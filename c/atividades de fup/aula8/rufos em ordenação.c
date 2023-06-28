#include<stdio.h>
int main(){
    int a, b, c;
    
    scanf("%d %d %d", &a, &b, &c);
    
    if((a <= b) && (b<= c)) {
        printf("P M G");
    } else if((c <= b) && (b <= a)){
        
        printf("G M P");
        
    } else if((b< a) && (a < c)) {
      
        printf("M P G");
   
    } else if((c < a) && (a < b)){
        
        printf("M G P");
        
    } else if((a < c) && (c < b)){
        
        printf("P G M");
        
    } else if ((b < c) && (c < a)){
        
        printf("G P M");
        
    }
}