#include<stdio.h>
int main(){
    float c1, valor;
    char c2;
    scanf("%f %c %f", &c1, &c2, &valor);
    
    if(c1 > valor && c2 == 'm'){
        printf("segundo"); 
    }
    else if(c1 < valor && c2 == 'M'){
        printf("segundo");
    }
    else{
        printf("primeiro");
    }
    
    return 0;
}