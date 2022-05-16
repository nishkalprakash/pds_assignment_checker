/* NAME- SATYAJIT BEHERA
   ROLL NO-21AG10034
   DEPT- AGRICULTURE AND FOOD ENGINEERING
   SECTION-03
   SOFTWARE- CODEBLOCK
   question no 4*/
#include <stdio.h>
#include<math.h>

int main()
{
    int x[10], y[10];
    int sum_of_x=0, sum_of_y=0;
    float mean_of_x, mean_of_y,m, b, de=0, nu=0;

    printf("enter the cordinates of x: ");
    for (int k = 0; k < 10; k++)
    {
        scanf("%d",&x[k]);
        sum_of_x+=x[k];
    }

    printf("enter the  cordinates of y: ");
    for (int j = 0; j < 10; j++)
    {
        scanf("%d",&y[j]);
        sum_of_y+=y[j];
    }

    mean_of_x=sum_of_x/10;
    mean_of_y=sum_of_y/10;

    for (int i = 0; i < 10; i++)
    {
        nu+=(x[i]-mean_of_x)*(y[i]-mean_of_y);
        de+=(x[i]-mean_of_x)*(x[i]-mean_of_x);
    }

    m=nu/de;


    b=mean_of_y-(m*mean_of_x);

    printf("m = %.1f, b = %.1f, line equation y = %.1fx + %.1f",m,round(b),m,round(b));

    return 0;
}
