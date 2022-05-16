/* Shramitha Boligarla
   Roll no: 21ME10024
   Section 3
   Q2 */

#include<stdio.h>
int main()
{
    float x,error, E;
    int it=0,i;

    printf("x0= ");
    scanf("%f",&x);

    printf("E= ");
    scanf("%f",&E);

    printf("maxIterations= ");
    scanf("%d",&it);

    i=0;
    error=E;

    printf("Iteration  x0               x1               ERROR\n");
    while (i<it && error>=E){
                              printf("     %d     %f",i++,x);
                              error=x;
                              x=x - (((pow(x,3)-25)/pow(x,2)))/3.0;
                              error=error - x;
                              printf("     %f     %f\n",x,error);
                            }
    printf("The square root is %f",x);

}
