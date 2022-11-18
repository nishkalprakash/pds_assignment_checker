// S N Bibhudutta
// 21EC30043
// E&ECE Department 
// Package: Codeblocks
// Assignment 4

#include<stdio.h>

int myHostelChangingTrips(int k,int i,int n,int m)
{
    //BASE CASE
    if(i>n)
    {
        return 0;
    }
    if(k<=m&&i==n&&k>=0)
    {
        return 1;
    }
   
    
    
    //RECURSION CALL
    int countf=0;
   
    for (int j = 1; j <=m; j++)
    {
         int count=0;
        count=myHostelChangingTrips(k-j,i+1,n,m);
        countf+=count;
    }
    return countf;


}

int main()
{
    int n,k,m;
    printf("\nENTER THE VALUE OF n,k,m");
    scanf("%d%d%d",&n,&k,&m);

    printf("\nTrips: %d",myHostelChangingTrips(k,1,n,m));
    return 0;
}