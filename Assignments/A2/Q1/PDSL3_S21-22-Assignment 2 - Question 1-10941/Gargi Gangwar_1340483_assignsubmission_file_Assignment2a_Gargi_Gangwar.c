#include <stdio.h>
#include <math.h>

int main()
{
 int k,j;
 float z, zl,s;

 printf("Enter number of loops : ");  //inputing number of loops
 scanf("%d", &j);
 printf("Enter starting value of z : ");    //entering initial value
 scanf("%f", &z);
 for(k=1; k<=j; k++)
    {
      printf("(%f,%d)", z, k);
      zl=z;
      s = sqrt(fabs(z));
      z = z - s;
     if(zl==z)          //in trapped situation
     {
       s = s - (1/k);
       z = z - pow(s, 2);
     }
    }
}

