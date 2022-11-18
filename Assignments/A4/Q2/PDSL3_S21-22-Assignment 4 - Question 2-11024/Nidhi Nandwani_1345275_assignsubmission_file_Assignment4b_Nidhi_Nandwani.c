/*
Name: Nidhi Nandwani
Roll no. : 21MA10036
Section: 3
Package: Visual Studio Code
*/
#include <stdio.h>

int fun(int pos, int left, int n, int m)
{
    if(pos == n)//checking when the no. of days are equal to the value we are checking
    {
        if(left == 0)//if nothing is left we add 1 to the a
         return 1;
        else
         return 0;
    }

    if(left == 0)
     return 0;
    int a=0;//no. of journeys
    for(int i=1; i<=m; i++)
    {
        if(i>left)
         break;
        a += fun(pos+1, left-i, n, m);//calculating the no. of journeys
    }
    return a;
}

int main()
{
    int n,k,m;
    printf("Enter the no. of days= ");
    scanf("%d", &n);
    printf("Enter the total no.of items: ");
    scanf("%d", &k);
    printf("Enter the number of items per trip: ");
    scanf("%d", &m);
    printf("All possible journeys: %d", fun(0, k, n, m));
}