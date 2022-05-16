/***************************
 * Name : Aryan Kubal
 * Roll number : 21MT30012
 * Section : 3
***************************/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int x[10],y[10],i,j;        // Data set is fixed to 10 , so n=10.
    float xm=0,ym=0,m,s1=0,s2=0,b;

// taking the input of x-coordinates
    printf("\nEnter the x-coordinates : ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&x[i]);
        xm+=x[i];
    }  
    xm=xm/10; 
 
// taking the input of y-coordinates
    printf("\nEnter the y-coordiatnes : ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&y[i]);
        ym+=y[i];
    }    
    ym/=10;

    for(i=0;i<10;i++)
    {
        s1+=(x[i]-xm)*(y[i]-ym);
        s2+=(x[i]-xm)*(x[i]-xm);
    }

    m=s1/s2;
    b=ym-m*xm;

// printing the slope, b and equation of line
    printf("\nm = %0.1f , b = %0.1f , Line Equation y = %0.1fx ",m,b,m);
    if(b>0)
    printf("+ %0.1f\n",b);
    else if(b<0)
    printf("%0.1f\n",b);

    return 0;

}