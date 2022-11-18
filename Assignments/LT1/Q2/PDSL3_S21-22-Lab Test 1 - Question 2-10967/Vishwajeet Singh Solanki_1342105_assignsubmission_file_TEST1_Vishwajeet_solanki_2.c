/*
NAME: VISHWAJEET SINGH SOLANKI
ROLL NO: 21CS10079
DEPT: COMPUTER SCIENCE
PACKAGE: CODEBLOCKS
*/
#include <stdio.h>
#include <math.h>

int main()
{
    double x0,x1,e;
    int i=0,maxIteration;

    printf("Enter the values of x0, e, and the maxIteration respectively:\n");
    scanf("%lf%lf%d",&x0,&e,&maxIteration);

    x1 = (2*pow(x0,3)+25)/(3*pow(x0,2));

    printf("Iteration   x0         x1         Error\n");
    printf("***   *         *         ***\n");

    while((fabs(x1-x0)>=e)&&(i<20))
    {
        printf("     %d    %lf   %lf    %lf\n",i+1,x0,x1,fabs(x0-x1));

        x0 = x1;
        x1 = (2*pow(x1,3)+25)/(3*pow(x1,2));

        i++;
    }

    printf("     %d    %lf   %lf    %lf\n",i+1,x0,x1,fabs(x0-x1));

    printf("The root is %lf\n",x1);

    return 0;
}
