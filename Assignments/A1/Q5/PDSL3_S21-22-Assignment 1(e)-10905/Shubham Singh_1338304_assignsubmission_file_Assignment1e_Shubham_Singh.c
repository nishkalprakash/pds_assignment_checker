/*
Name: Shubham Singh
Roll No: 21EX10032
Department: Geology and Geophysics
Package: Codeblocks
Assignment Class: 1
*/

#include<stdio.h>

int main()
{

    float w,bp,gst,tp;      // bp:base price tp: total price

    char ch;

    printf("Enter the type wood (n for natural wood ,s for synthetic wood):");
    scanf("%c",&ch);

    printf("\nEnter the weight of wood(in kg) you want:");

    scanf("%f",&w);

    printf("\n-----------------");

if(ch=='n')
{
    printf("\nBase price=%0.2f",w*1100);
     printf("\nGST=%0.2f",w*1100*0.2);
    printf("\nTotal price =%0.2f",w*1100+w*1100*0.2);
}
if(ch=='m')
{
    printf("\nBase price=%0.2f",w*780);
    printf("\nGST=%0.2f",w*780*0.2);
    printf("\nTotal price =%0.2f",w*780+w*7800*0.2);
}
}
