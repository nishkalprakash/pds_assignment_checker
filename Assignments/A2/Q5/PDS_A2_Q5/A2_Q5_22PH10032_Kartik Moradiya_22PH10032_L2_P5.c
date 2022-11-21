#include<stdio.h>
#include<math.h>
 int main()
 {
    float g=9.78;
    int Y;
    float total_distance;
    int n;
    scanf("enter value of %d %d",&Y,&n);
    
    total_distance=2*Y*(1 - pow(0.5,n));
    printf("the value of total distance is %f",total_distance);
    return 0;
    
    
 }
