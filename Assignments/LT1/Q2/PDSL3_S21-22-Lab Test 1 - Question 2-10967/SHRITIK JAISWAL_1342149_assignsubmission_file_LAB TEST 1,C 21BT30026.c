//Mac-OS
//shritik jaiswal
//ROLL-21BT30026
//Sec- 3
#include <stdio.h>
int main()
{
    double x1,x0,E,mi,i,temp,ERROR;
    printf("enter x0 = ");
    scanf("%lf",&x0);
    printf("enter E = ");
    scanf("%lf",&E);
    printf("enter Max-Iteration = ");
    scanf("%lf",&mi);
    x1=x0-((x0*x0*x0-25)/(3*x0*x0));
    //adjusting the |X1-X0|<E
    if (x0-x1<0)
    x0=-1*x0;
    x1=-1*x1;
    while(x0-x1>E)
    {
        for (i=1;i<=mi;i++)
        {
        x0=x1;
        x1=x0-((x0*x0*x0-25)/(3*x0*x0));
        ERROR=x0-x1;
        printf("x0 is %lf\n",x0);
        printf("x1 is %lf\n",x1);
        printf("error = %lf\n",ERROR);
        }
    }
    printf("The square root is %lf\n",x1);
}
