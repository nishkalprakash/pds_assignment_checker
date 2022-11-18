/*
Name        : Basa Sreekar
Roll no.    : 21EE10024
Department  : Electrical Engineering
package     : code blocks
Assignment 1(c)
*/
#include <stdio.h>
#include <math.h>
int main()
{
    int m,k,day ;
    float n,f;
    printf("Enter the number of machines :");
    scanf("%d",&m);
    printf("Enter the day number (1-7) : ");
    scanf("%d",&day);
    switch (day)
    {
    case 1: n = m;
            printf("Number of manufactured cars : %.0f",round(n));
            break;
    case 2: n = (m +(m/2.0)+(m/4.0))*1.0;
            printf("Number of manufactured cars : %.0f",round(n));
            break;

    case 3: printf("Enter no.of machines under inspection : ");
            scanf("%d",&k);
            n = (m-k)+((m-k)/2.0)+((m-k)/4.0) ;
            printf("Number of manufactured cars : %.0f",round(n));
            break ;
    case 4: printf("Enter boosting fraction :");
            scanf("%f",&f);
            n = m + (m*f) ;
            printf("Number of manufactured cars :%.0f",round(n));
            break;
    case 5: printf("Enter boosting fraction :");
            scanf("%f",&f);
            n = m + (m*f) ;
            printf("Number of manufactured cars :%.0f",round(n));
            break;
    case 6: printf("Enter no.of machines under inspection : ");
            scanf("%d",&k);
            n = (m-k)*1.0+((m-k)/2.0)+((m-k)/4.0) ;
            printf("Number of manufactured cars : %.0f",round(n));
            break ;

    case 7: printf("Enter boosting fraction :");
            scanf("%f",&f);
            n = m + (m*f) ;
            printf("Number of manufactured cars :%.0f",round(n));
            break;
    default : printf("Error!!");
              break;
    }
    return 0;
}
