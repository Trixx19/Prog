#include<stdio.h>
int main(){
    int l1, l2, somap, somai;
    scanf("%d %d", &l1, &l2);
    
    for(int i=l1; i<l2; i++){
        if(i%2 == 0){
            somap+= i;
        } else if((i%2) != 0){
            somai+= i;
        }
    }
        if(somap < somai){
            printf("soldados");
        } else {
            printf("rebeldes");
        }
}