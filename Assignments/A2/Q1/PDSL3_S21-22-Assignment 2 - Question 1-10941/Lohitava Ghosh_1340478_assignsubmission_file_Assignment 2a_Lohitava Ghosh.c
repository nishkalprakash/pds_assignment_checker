/*
Name:Lohitava Ghosh
Roll no.:21AE10023
Department:Aerospace Engg Btech.
Package:code blocks
Operating system: Windows
*/

#include <stdio.h>
#include <math.h>

int main()
{
    float s,c,z;
    int k,i;
    printf("z = ");
    scanf("%f",&z);
    printf("k = ");
    scanf("%d",&k);
    i=1;
    while (i<=k)
    {
        s=sqrt(z);
        z=fabs(z-s);
        if(c==z)
        {
            s=s-1/k;
            z=z-(s*s);
        }
        if(z<0.0)
        {
            z=-z;
            printf("(%f,%d),  ",z,i);
        }
        else
        {
            printf("(%f,%d),  ",z,i);
        }
        if(z==0.0)
        {
            break;
        }
        c=z;
        i=i+1;
    }

    return 0;
}
