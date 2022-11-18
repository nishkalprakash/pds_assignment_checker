/*
Name: R S Thiruvignesh
Roll no.:21BT10022
Department: Biotechnology 4yr
Package: Code blocks
Operating system: Windows 10 */


#include <stdio.h>
#include <math.h>

void main(){

    int a,m,k;
    float n,f;

    printf("enter the number of manufactured cars:");
    scanf("%d",&m);
    printf("enter the day number(1-7):");
    scanf("%d",&a);

    switch(a){
        case 1:
            n=m;
            printf("Number of manufactured cars on Monday: %f",n);
            break;

        case 2:
            n=round(m+m/2.0+m/4.0);
            printf("Number of manufactured cars on Tuesday: %f",n);
            break;

        case 3:
            printf("Number of cars under inspection:");
            scanf("%d",&k);
            n=round((m-k)+(m-k)/2.0+(m-k)/4.0);
            printf("Number of manufactured cars on Wednesday: %f",n);
            break;

        case 4:
            printf("enter the boosted fraction(0-1):");
            scanf("%f",&f);
            n=round(m+m*f);
            printf("Number of manufactured cars on Thursday: %f",n);
            break;

        case 5:
            printf("enter the boosted fraction(0-1):");
            scanf("%f",&f);
            n=round(m+m*f);
            printf("Number of manufactured cars on Friday: %f",n);
            break;

        case 6:
            printf("Number of cars under inspection:");
            scanf("%d",&k);
            n=round((m-k)+(m-k)/2.0+(m-k)/4.0);
            printf("Number of manufactured cars on Saturday: %f",n);
            break;

        case 7:
            printf("enter the boosted fraction(0-1):");
            scanf("%f",&f);
            n=round(m+m*f);
            printf("Number of manufactured cars on Sunday: %f",n);
            break;

    }


}
