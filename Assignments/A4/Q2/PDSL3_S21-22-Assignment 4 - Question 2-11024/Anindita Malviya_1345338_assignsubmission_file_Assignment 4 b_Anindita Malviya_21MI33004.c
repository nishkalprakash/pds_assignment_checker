/*
Name: Anindita Malviya
Dept:MI
Roll no. : 21MI33004
Package : Code Blocks
Question : Assgn 4 b
*/

#include <stdio.h>

int n,k,m;
int myHostelChangingTrips(int a,int b,int c, int d, int count);

int main()
{
    printf("No. of Days in which Hostel needs to be changed: ");    //Prompting User
    scanf("%d",&n);
    printf("No. of Items in your room: ");
    scanf("%d",&k);
    printf("Maximum no. of items that can be carried per trip: ");     // 1 day = 1 trip
    scanf("%d",&m);

    int trips = myHostelChangingTrips(0,0,0,0,0);
    printf("No. of Trips are%d",trips);
}

int myHostelChangingTrips(int a,int b,int c,int d,int count)      //Finding no. of trips
{
    if(a>m||b>m||c>m||d>m)
    {
        return count;
    }
    if(a + b + c + d == k)
    {
       /*
        if(a != 0)
        {
            printf("%d,",a);
        }
        if(b != 0)
        {
            printf("%d,",b);
        }
        if(c!=0)
        {
            printf("%d,",c);
        }
        if(d != 0)
        {
            printf("%d",d);
        }
        */

        return count + 1;
    }
int total = myHostelChangingTrips(a + 1, b, c, d, count) + myHostelChangingTrips(a, b + 1, c, d, count) + myHostelChangingTrips(a, b, c + 1, d, count) + myHostelChangingTrips(a, b, c, d + 1, count);
return total;

}


