/*
Name : S L Maanas
Roll No : 21CH10055
Department : Chemical Engineering
Package : VS Code
Assignment : Assignment 1(c)
*/

#include <stdio.h>
#include <math.h>
int main()
{
    float mkc,kutt,fan;
    int don,nest;
    printf("Enter the number of machines:");
    scanf("%f",&mkc);
    printf("Enter the day number (1-7):");
    scanf("%d",&don);
    switch(don)
    {
        case 1:
            nest=mkc;
            break;
        case 2:
            nest=round(mkc+mkc/2+mkc/4);
            break;
        case 3:
            printf("Enter number of machines under inspection:");
            scanf("%f",&kutt);
            nest=round((mkc-kutt)+(mkc-kutt)/2+(mkc-kutt)/4);
            break;
        case 6:
            printf("Enter number of machines under inspection:");
            scanf("%f",&kutt);
            nest=round((mkc-kutt)+(mkc-kutt)/2+(mkc-kutt)/4);
            break;
        case 4:
            printf("Enter a boosting fraction(<1):");
            scanf("%f",&fan);
            nest=round(mkc+ (fan*mkc));
            break;
        case 5:
            printf("Enter a boosting fraction(<1):");
            scanf("%f",&fan);
            nest=round(mkc+ (fan*mkc));
            break;
        case 7:
            printf("Enter a boosting fraction(<1):");
            scanf("%f",&fan);
            nest=round(mkc+ (fan*mkc));
            break;
         
    }
    printf("The number of manufactured cars are: %d",nest);
    return 0;
}