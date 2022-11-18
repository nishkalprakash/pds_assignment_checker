#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int k=1,a;
    float z,s;
    printf("Give value of z\n");
    scanf("%f",&z);
    printf("Give the number of iterations\n");
    scanf("%d",&a);
    while(z!=0&&k<=a)
    {
        if(z>0)
        {
            s=sqrt(z);
        }
        else{
                s=sqrt(-z);
            }
        if(z>0)
        {
          z=z-s;
          printf("(%f,%d)\n",z,k);
        }
        else
        {
          z=s-z;
          printf("(%f,%d)\n",z,k);
        }
        k++;
        if(z=z-s)
        {
          z= z-s+1/a;
        }
        else if(z=s-z)
        {
          z= s-z+1/a;
        }
    }
    return 0;
}
