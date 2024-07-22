#include<stdio.h>
int main(){
    int x, n, cont=0, seq;
    scanf("%d %d\n", &x, &n);
    for(int i=1; i<=n; i++){
      scanf("%d", &seq);  
      
      if(seq == x){
          cont++;
      }
      
    }
    
    printf("%d", cont);
}
