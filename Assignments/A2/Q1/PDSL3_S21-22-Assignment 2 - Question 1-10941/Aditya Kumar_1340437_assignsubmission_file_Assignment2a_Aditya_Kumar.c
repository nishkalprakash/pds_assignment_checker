/*
Name:- Aditya Kumar
Roll no.:- 21ME10005
Dept:- Mechanical Engg
Sec-3
Group-4
Assignment- 2a
Package- stdio.h,math.h
*/
#include <stdio.h>
#include <math.h>

int main()
{ 
    float z; int k; int c=0;
    printf("Input the initial height and no. of iterations\n");
    scanf("%f%d",&z,&k);
    for(int i=1;i<=k;i++)
    {
        if((sqrt(z)==2*z)&&(c==2))
        {
            z-=(sqrt(z)-1/k)*(sqrt(z)-1/k);
            c=0;
        }
        else
        {
            z-=sqrt(z);
            if(z<0)
            {
                z=0-z;
            }
            
        }
        printf("(%f,%d),  ",z,i);
            if(z==0)
            {
                break;
            }
            if(sqrt(z)==2*z)
            {
                c++;
            }
    }

    return 0;
}

