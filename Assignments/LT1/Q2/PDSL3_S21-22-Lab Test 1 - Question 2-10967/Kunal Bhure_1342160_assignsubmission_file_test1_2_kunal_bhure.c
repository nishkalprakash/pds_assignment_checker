#include<stdio.h>
int main()
{
    int m,i=1;
    float x1,x0,e;
    printf("x0: ");
    scanf("%f",&x0);
    printf("e: ");
    scanf("%f",&e);
    printf("maxiteration: ");
    scanf("%d",&m);
    x1=x0-(((x0*x0*x0)-25)/(3*x0*x0)) ;
    while(x0-x1>e || i<m)
    {
        printf("iteration=%d ",i);
        printf("x0=%f ",x0);
        printf("x1=%f ",x1);
        printf("\n");
        x0=x1;
        x1=x0-(((x0*x0*x0)-25)/(3*x0*x0));
        i++;
    }
    printf("Root is %f",x0);
    return o;
}
