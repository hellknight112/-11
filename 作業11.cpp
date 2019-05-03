#include <stdio.h> 
#include <stdlib.h> 

int main(){
 
    int x,y,z; 
    int max,med,min; 

    printf("叫块璶ゑ耕3计\n"); 
    printf("计x="); scanf("%d",&x); 
    printf("计y="); scanf("%d",&y); 
    printf("计z="); scanf("%d",&z); 

    x > y ? (max = x, min = y) : (max = y, min = x); 
    z > max ? (med = max, max = z) : 
    z > min ? med = z : (med = min, min = z); 

    printf("min:%d med:%d max:%d\n", min, med, max); 

    system("PAUSE"); 
    return 0; 
}
