/*
Name            : Banisetty Hema Sai Sagar
Roll            : 21EC10011
Dept            : E&ECE
Package         : Code Blocks
Assignment Class: 6
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int k,i;
    float z,s;
    scanf("%f",&z);
    scanf("%d",&k);

    for(i=1;i<=k;i++)
    {
        s=pow(z,0.5);
        z=z-s;
        if(z<0)
            break;
        else
        {
            printf("(%f,%d),",z,i);
        }
    }
}
