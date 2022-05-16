#include <stdio.h>
#include <math.h>

int main()
{
    float m,b,xavg,yavg;
    b=0.0; xavg=0.0; yavg=0.0;
    int i,sumx,sumy;
    int x[10];
    int y[10];
    printf("Enter the x coordinates\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&x[i]);
        sumx+=x[i];
    }
    printf("Enter the y coordinates\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&y[i]);
        sumy+=y[i];
    }
    xavg=sumx/10.0;
    yavg=sumy/10.0;
    for(i=0;i<10;i++)
    {
        m=((x[i]-xavg)*(y[i]-yavg)) / (pow((x[i]-xavg),2));
    }


    b=yavg-(m*xavg);

     printf("x-coordinates");
    for(i=0;i<10;i++)
    {
        printf("%d",x[i]);

    }

    printf("\n");
     printf("y-coordinates");
    for(i=0;i<10;i++)
    {
        printf("%d",y[i]);

    }
    printf("\n");
    printf("Equation of line is y = %fx + %f",m,b);
    printf("\n");
}
