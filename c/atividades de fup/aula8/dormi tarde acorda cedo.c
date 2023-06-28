#include <stdio.h>
int main(){
    int a, b, c, hora, min, seg, hora1, min1, seg1;
    
    scanf("%d %d %d\n%d %d %d ", &a, &b, &c, &hora, &min, &seg);
    
    
    if(hora >= a && min >= b && seg >= c){
        hora1 = hora - a;
        min1 = min - b;
        seg1 = seg - c;
        printf("%d %d %d", hora1, min1, seg1);
    }
    else if(hora >= a && min >= b && seg <= c){
        seg += 60;
        min -= 1;
        hora1 = hora - a;
        min1 = min - b;
        seg1 = seg - c;
        printf("%d %d %d", hora1, min1, seg1);
    }
    else if(hora >= a && min <= b && seg <= c){
        seg += 60;
        min -= 1;
        min += 60;
        hora -= 1;
        hora1 = hora - a;
        min1 = min - b;
        seg1 = seg - c;
        printf("%d %d %d", hora1, min1, seg1);
    }
    else if(hora <= a && min <= b && seg <= c){
        hora -= 1;
        hora += 25;
        hora1 = hora - a;
        min1 = min - b;
        seg1 = seg - c;
        printf("%d %d %d", hora1, min1, seg1);
    }
    else if(hora <= a && min >= b && seg <= c){
        min -= 1;
        seg += 60;
        hora += 24;
        hora1 = hora - a;
        min1 = min - b;
        seg1 = seg - c;
        printf("%d %d %d", hora1, min1, seg1);
    }
}