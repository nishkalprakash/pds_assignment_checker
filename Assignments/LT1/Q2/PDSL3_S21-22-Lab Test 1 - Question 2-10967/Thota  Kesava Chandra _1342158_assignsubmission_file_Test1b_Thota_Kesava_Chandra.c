/*
Thota Kesava Chandra
Computer Science Department
21CS30056
Code Blocks
Windows
*/

#include <stdio.h>

int main()
{
    double x0,x1,error,e;
    int maxi;
    printf("Enter x0 : ");
    scanf("%lf",&x0);
    printf("\nEnter e : ");
    scanf("%lf",&e);
    printf("\nEnter max iteration : ");
    scanf("%d",&maxi);
    printf("\nIteration    x0        x1       Error\n");
    for (int i=1;i<maxi;i++)
    {
        //printf("%d\n",i);
        error = (x0*x0*x0-25)/(3*x0*x0);
        //printf("Error is %f\n",error);
        x1 = x0 - error ;
        printf("   %d      %lf  %lf   %lf\n",i,x0,x1,error);
        x0 = x1 ;
        if (error<e)
        {
            break;
        }
    }
    printf("\nThe square root is %lf\n",x1);

    return 0;
}
