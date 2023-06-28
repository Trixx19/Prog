#include<stdio.h>
int main(){
    int ocupacao=0, c, m;
    scanf("%d", &c);
    
    while (ocupacao< (2*c)){
        scanf("%d", &m);
        ocupacao += m;
        
        if(ocupacao == 0){
            printf("vazio\n");
        } else if(ocupacao < c){
            printf("ainda cabe\n");
        } else if(ocupacao< (2*c)){
            printf("lotado\n");
        } else {
            printf("hora de partir");
        }
        
    }
    

}