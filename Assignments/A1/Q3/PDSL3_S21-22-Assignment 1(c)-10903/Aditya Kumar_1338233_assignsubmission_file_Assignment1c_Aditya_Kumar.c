/*
Name:- Aditya Kumar
Roll no.:- 21ME10005
Dept:- Mechanical Engg
Sec-3
Group-4
Assignment- 1c
Package- stdio.h, math.h
*/
#include <stdio.h>
#include <math.h>
int main()
{   int n,m,d,k;
float f;
int a = 0;
    printf("Enter the no. of machines:\n");
    scanf("%d",&m);
    printf("Enter the day number(1-7):\n");
    scanf("%d",&d);
    switch(d)
    {
        case 1: n = m;
                break;

        case 2: n = round(m*1.75);
        break;

        case 3: printf("Enter no. of machines under inspection:\n");
        scanf("%d",&k);
        n = round(1.75*(m-k));
        break;

        case 4: printf("Enter boosting fraction:\n");
                scanf("%f",&f);
                n = round((1+f)*m);
                break;

        case 5:  printf("Enter boosting fraction:\n");
                scanf("%f",&f);
                n = round((1+f)*m);
                break;

        case 6: printf("Enter no. of machines under inspection:\n");
        scanf("%d",&k);
        n = round(1.75*(m-k));
        break;

        case 7:  printf("Enter boosting fraction:\n");
                scanf("%f",&f);
                n = round((1+f)*m);
                break;

        default: printf("Invalid number\n");
        a=1;
        break;
        
    }
    if(a==0)
    {
    printf("Number of manufactured cars = %d",n);
    }
    return 0;
}

