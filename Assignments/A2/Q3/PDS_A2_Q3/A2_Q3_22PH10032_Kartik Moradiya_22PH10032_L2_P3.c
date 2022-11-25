#include<stdio.h>
#include<math.h> 
  int main()
   {
     int a,b,c;
     scanf("%d %d %d",&a,&b,&c);
     float y;
     y=b*b - 4*a*c;
     float x1= -b/2*a + sqrt(y)/2*a;
   printf("first root is %f " ,x1);
     float x2= b/2*a + sqrt(y)/2*a;
     printf("second root is %f" ,x2
   return 0;
   
   }
