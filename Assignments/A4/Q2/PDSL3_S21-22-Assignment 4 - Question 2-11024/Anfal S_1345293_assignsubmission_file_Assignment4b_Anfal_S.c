/*
Name: Anfal S
Roll no: 21AE10003
Section: 3
Dept: AE
Package: Codeblocks
Assignment class: 4
Operating System: windows
*/
#include<stdio.h>
void myHostelChangingTrips(int n,int k,int m,int i)
{
    int a,b,c,d;
    for(c=1;c<=m-1;c++)
    {
        for(b=1;b<=m-1;b++)
        {
            a=k-m-b-c;
            printf("(%d,%d,%d,%d)\n",m,c,b,a);
        }

    }
    if(m-1>0)myHostelChangingTrips(n,k,m-1,i+1);
    else return;
}
int main()
{
    int n,k,m,i;
    printf("enter the max no of days, total no of items,max no of items per day:");
    scanf("%d%d%d",&n,&k,&m);
    myHostelChangingTrips(n,k,m,i);
}
