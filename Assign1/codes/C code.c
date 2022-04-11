//To find the height of the tower
#include <stdio.h>
#include <math.h>
#define PI 3.142
int main() {
 float h,d,x,tanA,tanB;   
   
    tanA=tan(45*(PI/180));
    tanB=tan(60*(PI/180));
    
    d =20+x;
    d = h/tanA;
    x = h/tanB;
    
   h = tanA*((tanB*20)/(tanB-1));
    printf("Height of the tower is %.2fm",h);
 
    
   
    return 0;
}