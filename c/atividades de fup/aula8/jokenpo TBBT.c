#include <stdio.h>
int main(){
    char jog1, jog2;
    scanf("%c %c", &jog1, &jog2);
    
    if(jog1 == jog2){
        printf("empate");
    } else if((jog1 == 'R' && jog2 == 'L') || (jog1 == 'R' && jog2 == 'S') || (jog1 == 'P' && jog2 == 'R') || (jog1 == 'P' && jog2 == 'K')|| (jog1 == 'S' && jog2 == 'P') || (jog1 == 'S' && jog2 == 'L')|| (jog1 == 'L' && jog2 == 'K') || (jog1 == 'L' && jog2 == 'P')|| (jog1 == 'K' && jog2 == 'S') || (jog1 == 'K' && jog2 == 'R')){
    printf("jog1");
    }
    else
        printf("jog2");
}