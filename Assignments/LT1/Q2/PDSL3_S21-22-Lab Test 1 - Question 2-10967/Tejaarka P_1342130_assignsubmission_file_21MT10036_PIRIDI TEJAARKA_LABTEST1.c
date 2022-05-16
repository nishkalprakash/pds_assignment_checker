/*Tejaarka piridi 21mt10036 question 2*/

#include <stdio.h>

int main()
{
    float x0, tolerance, iter_value, fi, fd_value, x2;



    printf("x0 = ");


    scanf("%f",&x0);


    printf("tolerance = ");


    scanf("%f",&tolerance);


    printf("iter_value = ");


    scanf("%f",&iter_value);



    for (int i = 1; i <=iter_value; i++)
    {
        fi=(x0*x0*x0)-25;


        fd_value=3*x0*x0;


        x2=x0-(fi/fd_value);


        if (x0-x2!=0)

        {
            printf("%f %f %f\n",x0,x2,x0-x2);

        }
        x0=x2;

    }


    return 0;
}
