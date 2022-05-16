/*
Name: Sadique Amin
Roll Number: 21CE30027
Department: Civil Engineering
Package used: <math.h>, <stdio.h>
Assignment Class: 6
*/



#include <stdio.h>
#include <math.h>

int main()
{
    float z,s;
    int k,c=0;
    printf("Input: ");
    scanf("z=%f, k=%d",&z,&k);

    for(int i=1;i<=k;i++)
    {
        s=sqrt(z);
        if(z==0.25)
        {
            c=c+1;
            if (c==2)
            {
                s=pow(s-(1/k),2);
            }
        }
        z=fabs(z-s);
        if (z==0 || i==k)
        {
            printf("(%f,%d)",z,i);
            break;
        }
        printf("(%f,%d), ",z,i);
    }
    return 0;
}