/*Name:- Shubhrashayak Sarkar;
Roll No:- 21NA30029
Package:- Visual Studio Code
Assignment class:- 6
*/
#include <stdio.h>
#include <math.h>

int main()
{
    int maxiteration;
    printf("Enter the number of max iteration\n");
    scanf("%d", &maxiteration);
    float fx[maxiteration],diffx[maxiteration], x[maxiteration], tolarance, error;
    printf("Enter the value of x0\n");
    scanf("%f", &x[0]);
    printf("Enter the tolarance\n");
    scanf("%f", &tolarance);
    fx[0] = pow(x[0], 3) - 25;
    diffx[0]=3*pow(x[0], 2);
    for (int i = 1; i < maxiteration; i++)
    {
        x[i]=x[i-1]-(fx[i-1]/diffx[i-1]);
        fx[i]=pow(x[i], 3)-25;
        diffx[i]=3*pow(x[i], 2);
        error= (x[i]-x[i-1]);
        if (error<0)
        {
            error*=(-1);
        }        
        printf("Iteration number:- %d, x(n-1)= %f, xn= %f, error= %f\n", i, x[i-1], x[i], error);
        if (error<tolarance)
        {
            printf("The square root is %f", x[i]);
            break;
        }
    }
    return 0;
}