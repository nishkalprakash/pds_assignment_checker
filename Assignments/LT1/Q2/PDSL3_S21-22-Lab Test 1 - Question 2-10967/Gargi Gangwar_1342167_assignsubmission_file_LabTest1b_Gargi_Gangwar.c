#include <stdio.h>
int main()
{
    printf("Enter x0, error value, and max iterations.");
    float X0,E;
    int maxiter;
    float X1;
    int FLAG=0;
    scanf("%f %f %d",&X0,&E,&maxiter);
    for(int i=1;i<=maxiter;i++)
    {
        float a=X0*X0*X0-25;
        a=a/(3*X0*X0);
        X1=X0-a;
        printf("%f %f\n",X0,X1);
        float e;
        if(X0>X1)
            e=X0-X1;
        else
            e=X1-X0;
        printf("Iteration : %d  x0 : %f  x1 : %f  Error : %f\n",i,X0,X1,e);
        if(e<=E)
        {
           FLAG=1;
            break;
        }
        X0=X1;
    }
    if(FLAG==1)
        printf("Final square root : %f",X1);
    else
        printf("Desired accuracy not achieved within given iterations.");
}
