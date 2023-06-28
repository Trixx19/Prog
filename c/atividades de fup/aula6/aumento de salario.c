#include<stdio.h>
int main(){
    float salario, aumento;
    
    scanf("%f ", &salario);
    
    if(salario <= 1000){
        
        aumento = (salario*20)/100;
        salario+= aumento;
        printf("%.2f", salario);
   
    } else if(salario > 1000 && salario<= 1500){
      
        aumento = (salario*15)/100;
        salario+= aumento;
        printf("%.2f", salario);
        
    } else if(salario > 1500 && salario <= 2000){
        
        aumento = (salario*10)/100;
        salario+= aumento;
        printf("%.2f", salario);
         
    } else if(salario > 2000){
        
        aumento = (salario*5)/100;
        salario+= aumento;
        printf("%.2f", salario);
        
    }
}