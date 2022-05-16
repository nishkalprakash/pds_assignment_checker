/*
PRANJAL SINGH
Roll:21EC10051
Electronics and Electrical Communication engineering
codeblocks
Assignment class:6
*/
#include<stdio.h>
int main()
{
    int a;

    printf("Enter a three digit number:- ");
    scanf("%d",&a);
    printf("\n");
    int b = a%10;
    a = a/10;
    int c= a%10;
    a = a/10;
    int d = a%10;
     printf("Reversed number is :- %d%d%d",b,c,d);
}
