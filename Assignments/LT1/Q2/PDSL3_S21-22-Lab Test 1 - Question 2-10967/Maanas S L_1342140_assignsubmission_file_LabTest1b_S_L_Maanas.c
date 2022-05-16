/*
Name : S L Maanas
Roll No : 21CH10055
Department : Chemical Engineering
Package : VS Code
Assignment : Lab Test 1(b)
*/

#include <stdio.h>
int main()
{
    float mkc, faltu, kitnajaana, fan, fand, temp ;
    printf ("x0 = ");
    scanf("%f",&mkc);
    printf ("e = ");
    scanf("%f",&faltu);
    printf ("MaxIterations = ");
    scanf("%f",&kitnajaana);
    printf("Iteration     x0          x1          Error\n");
    for (int i=1 ; i<=kitnajaana ; i++)
    {
        temp = mkc ;
        fan = (mkc*mkc*mkc) - 25 ;
        fand = 3*mkc*mkc ;
        mkc = mkc - (fan/fand) ;
        printf("    %d      %f    %f     %f",i,temp,mkc,temp-mkc);
        if (temp > mkc && temp - mkc < faltu)
        {
            printf("\nThe square root is %f\n",mkc);
            break;
        }
        if (mkc > temp && mkc - temp < faltu)
        {
            printf("\nThe square root is %f \n",mkc);
            break;
        }
        printf("\n");
    }
    return 0;
}