#include<stdio.h>
int main(){
    int produto, chute1, chute2, div1, div2;
    
    scanf("%d %d %d", &produto, &chute1, &chute2);
    
    div1= produto - chute1;
    div2= produto - chute2;
    
    if(div1 < 0){
        
        div1 = div1 * -1;
    }
    
    if(div2<0){
        
        div2= div2 * -1;
    }
    
    if(div1 < div2){
        
        printf("primeiro");
        
    } else if(div2 < div1){
        
        printf("segundo");
        
    }   else if(div1 == div2){
        
        printf("empate");
    }
    
}