/***************************
 * Name : Aryan Kubal
 * Roll number : 21MT30012
 * Section : 3
***************************/

#include<stdio.h>

int main()
{
    int c,d,i,j,a[5],s=0,e,r,p;

    printf("\nEnter c and d : "); // taking the input for the two numbers (digits)
    scanf("%d%d",&c,&d);
    e=c+d;
    printf("Numbers : \n"); // printing the output of all 5 digit numbers made using the 2 input digits
    for(i=10000;i<=99999;i++)
    {   
        p=1; 
        for(j=i;j>0;j=j/10)
        {   
            r=j%10;
            if(r==c||r==d)
            p=1;
            else
            {
                p=0;
                break;
            }
            
        }
        if(p==1&&i%e!=0)
        printf("%d  ",i);
    }
    return 0;
}