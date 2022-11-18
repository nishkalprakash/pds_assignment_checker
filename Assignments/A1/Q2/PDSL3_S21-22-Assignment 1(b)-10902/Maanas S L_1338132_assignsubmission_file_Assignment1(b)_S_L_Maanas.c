/*
Name : S L Maanas
Roll No : 21CH10055
Department : Chemical Engineering
Package : VS Code
Assignment : Assignment 1(b)
*/

#include <stdio.h>
int main()
{
    int chair, lambo ;
    printf("Enter a 3-digit number : ");
    scanf("%d", &chair);
    lambo = ((chair%10)*100) + ((chair/10)%10)*10 + (chair/100) ;
    printf("Reverse Number = %d\n", lambo);
    return 0; 
}