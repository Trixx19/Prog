#include<stdio.h>
int main(){
    
    int cesta, ban, goi, man;
    int frutas=0, idas=0;
    
    scanf("%d %d %d %d ", &cesta, &ban, &goi, &man);
    
    frutas= ban + goi + man;
    
    if(frutas == cesta || frutas < cesta){
       
        printf("1");
   
    } else if(frutas > cesta){
        
        idas = (frutas / cesta);
       
        if(frutas % cesta != 0){
          idas++;
   }       
    printf("%d", idas);
   
    }
}