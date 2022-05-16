/*
Name:Lohitava Ghosh
Roll no.:21AE10023
Department:Aerospace Engg Btech.
Package:code blocks
Operating system: Windows
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int d;
    float n,m,f,k;
    printf("Enter the number of machines: ");
    scanf("%f",&m);
    printf("Enter the day number(1-7): ");
    scanf("%d",&d);
    switch(d)
    {
        case 1:
            n=m;
            printf("Number of manufactured cars = %f",n);
            break;
        case 2:
            n=m+(m/2.0)+(m/4.0);
            printf("Number of manufactured cars = %0.0f",n);
            break;
        case 3:
            printf("Enter no. of machines under inspection: ");
            scanf("%f",&k);
            n=m-k+(m-k)/2.0+(m-k)/4.0;
            printf("Number of manufactured cars = %0.0f",round(n));
            break;
        case 4:
            printf("Enter  boosting fraction: ");
            scanf("%f",&f);
            n=m+m*f;
            printf("Number of manufactured cars = %0.0f",n);
            break;
        case 5:
            printf("Enter  boosting fraction: ");
            scanf("%f",&f);
            n=m+m*f;
            printf("Number of manufactured cars = %0.0f",n);
            break;
        case 6:
            printf("Enter no. of machines under inspection: ");
            scanf("%f",&k);
            n=m-k+(m-k)/2.0+(m-k)/4.0;
            printf("Number of manufactured cars = %0.0f",round(n));
            break;
        case 7:
            printf("Enter  boosting fraction: ");
            scanf("%f",&f);
            n=m+m*f;
            printf("Number of manufactured cars = %0.0f",n);
            break;
        default :
            printf("Enter a valid day of the week");
            break;
    }

    return 0;
}
