/*
Name        : Basa Sreekar
Roll no.    : 21EE10024
Department : Electrical Engineering
package     : code blocks
Assignment 4
Question : 2
*/
#include <stdio.h>

int myHostelChangingTrips(int k,int i,int n,int m)
{
    int j,p;
    if((k/m)>n) printf(" Error, no trips possible !!"); //case where no trips possible even with max. items in each trip//
    else if((k/m)==n) i++ ;
    int day[i]; //sum of items per day = k , with limit m ,max days = n//


    for(j=0;j<n;j++)
    {
       myHostelChangingTrips(k,i,n,m-1); //not completed !! //
    }
}

int main()
{
    int n,m,k,i=1,p;
    printf(" Enter the no.of days : "); //taking inputs //
    scanf("%d",&n);
    printf(" Enter total no.of items : ");
    scanf("%d",&k);
    printf(" Enter the maximum items carried per trip :");
    scanf("%d",&m);

    p = myHostelChangingTrips(k,i,n,m); // calling function and getting i output //
    printf(" Total no,of trips = %d",p);
    return 0;

}

