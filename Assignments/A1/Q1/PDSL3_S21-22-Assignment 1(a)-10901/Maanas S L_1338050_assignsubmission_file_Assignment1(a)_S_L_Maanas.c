/*
Name : S L Maanas
Roll No : 21CH10055
Department : Chemical Engineering
Package : VS Code
Assignment : Assignment 1(a)
*/

#include <stdio.h>
int main()
{
    float start, temp, flag, relative, car ;
    printf("Enter the vaues of a, u, alpha in order: \n");
    scanf("%f %f %f",&start, &temp, &flag);
    printf("Enter the time: \n");
    scanf("%f", &relative);
    car = start + temp*relative + (flag*relative*relative)/2 ;
    printf("Distance = %f", car);
    return 0;
}