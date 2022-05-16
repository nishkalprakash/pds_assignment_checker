#include <stdio.h>
#include <math.h>

int main()
{
    int chk=0;
    int k,i;
    double z;
    printf("x= ");
    scanf("%lf",&z);
    printf("k= ");
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        if(chk>=1)
        {
            z=z-pow(sqrt(z)-1/(i+1),2);
            chk=0;
        }
        else
        {
            z=z-sqrt(z);
        }
        if(z<0)
        {
            z=-z;
        }
        printf("(%lf,%d)\n", z, i+1);
        if(z==0)
        break;
        if(z==sqrt(z)/2)
        {
            chk++;
        }
    }
    printf("\n");
    
    return 0;
}