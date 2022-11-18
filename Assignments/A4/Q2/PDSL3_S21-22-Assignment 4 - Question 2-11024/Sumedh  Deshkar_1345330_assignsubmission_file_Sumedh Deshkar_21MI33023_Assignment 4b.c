/*
Name : Sumedh Deshkar
Roll No. : 21MI33023
sec : 3
Assignment : 4b
*/
#include<stdio.h>

int myHostelChangingTrips(int k,int d,int n,int m)  // d is num of days
{
    if(d==n)
    {
        if(k==0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    if(k==0)
    {
        return 0;
    }
    int trips=0;
    for (int i=0;i<=m;i++)
    {
        if (i>k)// when total no. of items is greater than required items exit
        {
            break;
        }
        trips=(trips+myHostelChangingTrips(k-i,d+1,n,m));//calculating number of trips
    }
    return trips;}

    int main()
{
    int n,k,m;
    //Taking required inputs
    printf(" days for shift n = ");
    scanf("%d",&n);
    printf("Total things k = ");
    scanf("%d",&k);
    printf("Max things at a time m = ");
    scanf("%d",&m);
    int p=myHostelChangingTrips(k,0,n,m);//calling recursive function
    printf("\nTrips : %d",p);
    return 0;
}
