include<stdio.h>
#include<math.h>
int main()
{ 
   float mass = 0.125,e,distance;
   int y;
   float g=9.78;
    int n;
    float v;
   scanf("%f %d %d",&e,&y,&n);
   distance=y*(1+2*pow(e,2)*(1-(pow(e,n-1))/(1-e));
   printf("distance=%f",distance);
   return 0;
}
   