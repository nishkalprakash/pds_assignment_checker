/*
Name : Souvik Mandal
Roll No : 21MF10036
Section : 3
Group : 5
Department: Manufacturing Science
Package : Code Blocks
Operating System : Windows
*/

#include <stdio.h>
int main()
{
    int a , u , alpha , t;
    float d;
    printf("Enter the value of a : ");
    scanf("%d",&a);

    printf("Enter the value of u : ");
    scanf("%d",&u);

    printf("Enter the value of alpha : ");
    scanf("%d",&alpha);

    printf("Enter time : ");
    scanf("%d",&t);

    d = a + (u*t) + (0.5*alpha*t*t);
    printf("Distance = %f",d);




}
