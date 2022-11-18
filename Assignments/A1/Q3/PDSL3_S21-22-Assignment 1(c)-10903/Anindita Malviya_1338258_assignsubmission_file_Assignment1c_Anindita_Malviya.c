/*
Name: Anindita Malviya
Dept:MI
Roll no. : 21MI33004
Package : Code Blocks
*/

#include <stdio.h>
#include <math.h>

int main()
{
    char x;
    float f,n,m,k;
    printf("Enter the number of machines: ");
    scanf("%f",&m);
    printf("Enter the day number(1-7): ");
    getchar();
    scanf("%c",&x);
    switch (x)
    {
    case '1':
        printf("Number of manufactured cars = %0.0f.\n",m);
        break;

    case '2':
        n = m + (m/2) + (m/4);
        n= round(n);
        printf("Number of manufactured cars = %0.0f.\n",n);
        break;

    case '3':
    case '6':

         printf("Enter number of machines under inspection: ");
         scanf("%f",&k);
         n = (m-k) + ((m-k)/2) + ((m-k)/4);
         n = round(n);
         printf("Number of manufactured cars = %0.0f.\n",n);
         break;

    case '4':
    case '5':
    case '7':

        printf("Enter boosting fraction: ");
        scanf ("%f",&f);
        n = m + m*f;
        n = round(n);
        printf("Number of manufactured cars = %0.0f.\n",n);
         break;

    }

}
