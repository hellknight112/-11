#include <stdio.h> 
#include <stdlib.h> 

int main(){
 
    int x,y,z; 
    int max,med,min; 

    printf("請輸入要比較的3個數值\n"); 
    printf("數值x="); scanf("%d",&x); 
    printf("數值y="); scanf("%d",&y); 
    printf("數值z="); scanf("%d",&z); 

    x > y ? (max = x, min = y) : (max = y, min = x); 
    z > max ? (med = max, max = z) : 
    z > min ? med = z : (med = min, min = z); 

    printf("min:%d med:%d max:%d\n", min, med, max); 

    system("PAUSE"); 
    return 0; 
}
