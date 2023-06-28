#include<stdio.h>
int main(){
    
    int jog1, jog2, jog3, jog4, total;
    
    scanf("%d %d %d %d", &jog1, &jog2, &jog3, &jog4);
    
    total = (jog1 + jog2 + jog3 + jog4);
    
    if(total == 0){
        
        printf("nenhum");
    
    } else if(total == 1 || total % 4 == 1){
        
        printf("jog1");
    
    } else if(total == 2 || total % 4 == 2){
        
        printf("jog2");
        
    } else if(total == 3 || total % 4 == 3){
        
        printf("jog3");
        
    } else if(total == 4 || total % 4 == 0){
        
        printf("jog4");
        
    }  
}