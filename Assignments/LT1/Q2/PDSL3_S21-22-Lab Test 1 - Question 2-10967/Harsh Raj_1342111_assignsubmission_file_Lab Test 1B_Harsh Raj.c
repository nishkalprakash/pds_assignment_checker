#include<stdio.h>
/* Harsh Raj */
/* Roll: 21IE10017 */
int main()
{
    float x0,x1,e,er;
    int m,i;
    printf("x0 = ");
    scanf("%f",&x0);
    printf("e = ");
    scanf("%f",&e);
    printf("max iteration = ");
    scanf("%d",&m);
    printf("Iteration        x0         x1       Error \n");
    for(i=1;i<=m;i++)
    {
        printf("%d           ",i);
        printf("%f    ",x0);
        x1=x0-(x0*x0*x0-25)/(3*x0*x0);
        printf("%f    ",x1);
        er=x0-x1;
        printf("%f",er);
        x0=x1;
        printf(" \n");
        if(er<e)
        {
            break;
        }
    }
    printf("The square root is %f",x1);
}
/* Harsh Raj */
/* Roll: 21IE10017 */
