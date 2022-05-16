/***************************
 * Name : Aryan Kubal
 * Roll number : 21MT30012
 * Section : 3
***************************/

#include <stdio.h>
#include <math.h>
int main()
{
    float error,e;
    float xo,x1;
    int i=1;
    int maxIteration;
    printf("enter the value of maximum error allowed\n");  

    scanf("%f",&e); // getting the value of maximum error allowed
    printf("enter the value of x0\n");
    scanf("%f",&xo); // getting the value of x0
    printf("enter the value of maxIteration\n");
    scanf("%d",&maxIteration); // getting the value of maximum iteration
    printf("Iteration       x0      x1      Error\n");
    while(i<=maxIteration)
    {
        x1=xo-(xo*xo*xo-25)/(3*xo*xo);
        error=(xo>x1)?(xo-x1):(x1-xo);
        printf("%d      %f      %f      %f\n",i,xo,x1,error);
        xo=x1;
        if(error<e)
        {
            break;
        }
        i++;
    }
    printf("the square root is %f",x1); // printing the final output
}
