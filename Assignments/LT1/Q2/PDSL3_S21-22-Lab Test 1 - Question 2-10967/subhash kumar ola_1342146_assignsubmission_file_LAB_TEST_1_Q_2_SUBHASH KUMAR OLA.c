#include<stdio.h>
int main()
{
    float x,x1,E,error;
    int maxIteration,i;
    printf("x0= ");
    scanf("%f",&x);
    printf("E= ");
    scanf("%f",&E);
    printf("maxIteration= ");
    scanf("%d",&maxIteration);
    printf("Iteration\tx0\tx1\tError\n");
    for(i=0;i<maxIteration;i++){
        x1=x-(((x*x*x) - 25)/(3*x*x));
        error=x-x1;
        if(error<0)error=error*(-1);
        if(error<E)break;
        printf("%d\t%f\t%f\t%f\n",i,x,x1,error);
        x=x1;
    }
    printf("The square root is %f",x1);

    return 0;
}
