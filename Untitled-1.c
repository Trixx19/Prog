#include<stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    int vetor[a];
    printf("preencha o vetor:");
    for(int i=0; i<a; i++){
        scanf("%d ", &vetor[i]);
        
    } 
    
    for(int i=a-1; i>=0; i--){
        printf("%d ", vetor[i]);
    }



}