/*
Name : Souvik Mandal
Roll No. : 21MF10036
Section : 3 
Group : 5
Department : Manufacturing Science And ENGG.
Package : VS Code
Operating System : Windows
*/


#include <stdio.h>
int main()

{
    float a,b,e,c;

    printf("Enter the valve of x0 : ");
    scanf("%f",&a);

    printf("Enter the value of e : ");
    scanf("%f",&e);

    printf("Max Iteration:");
    scanf("%f",&c);

    float d;

    int i=1;

    printf("Iteration     x0          x1          Error     \n");
    
    
    do
    {
        b=a-((a*a*a-25)/(3*a*a));
        
        d=a-b;

        printf ("   %d       %f     %f     %f\n", i,a,b,d);
        
        a=b;
        i++;
    }while (d>e && i<c);

    printf("The square root is %f",b);


    return 0;
}