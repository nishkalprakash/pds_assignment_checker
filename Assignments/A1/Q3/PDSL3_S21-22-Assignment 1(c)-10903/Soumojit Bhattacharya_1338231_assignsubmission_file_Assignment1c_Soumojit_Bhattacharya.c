#include <stdio.h>
#include <math.h>

int main()
{
    int d,mc;
    double m,mi,bf;
    printf("enter the number of machines: ");
    scanf("%lf", &m);
    printf("enter the day number: ");
    scanf("%d", &d);
    switch(d)
    {
        case 1:
            mc=m;
            break;
        case 2:
            mc=round(m+m/2+m/4);
            break;
        case 3:
        case 6:
            printf("enter the number of machines under inspection: ");
            scanf("%lf", &mi);
            m=m-mi;
            mc=round(m+m/2+m/4);
            break;
        case 4:
        case 5:
        case 7:
            printf("enter the boosting fraction: ");
            scanf("%lf", &bf);
            mc=round(m*(1+bf));
            break;
        default:
            printf("please enter appropriate day number");
            break;
    }
    printf("Number of manufactured cars = %d", mc);
return 0;
 }