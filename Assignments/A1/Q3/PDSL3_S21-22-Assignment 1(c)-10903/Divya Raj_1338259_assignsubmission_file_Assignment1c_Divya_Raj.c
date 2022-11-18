/*
Name : Divya Raj
Roll : 21MT10017
Dept : Metallurgy
Package : Visual Studio
*/
#include<stdio.h>
int main()
{
    int m, k, day;
    float n, frac;
    printf("Enter the number of machines: ");
    scanf("%d", &m);
    printf("enter the day number (1-7): ");
    scanf("%d", &day);
    switch (day)
    {
    case 1:
        printf("Number of manufactured cars = %d", m);
        break;
    case 2:
        n = m + (float)m/2 + (float)m/4;
        printf("Number of manufactured cars = %.0f", n);
        break;
    case 3:
    case 6:
        printf("Enter no. of machines under inspection: ");
        scanf("%d", &k);
        n = m-k + (float)(m-k)/2 + (float)(m-k)/4;
        printf("Number of manufactured cars = %.0f", n);
        break;
    case 4:
    case 5:
    case 7:
        printf("Enter boosting fraction: ");
        scanf("%f", &frac);
        n = m*(1 + frac);
        printf("Number of manufactured cars = %.0f", n);
        break;
    default:
        printf("Enter a valid day number.");
        break;
    }
    return 0;
}