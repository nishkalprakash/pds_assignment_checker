
#include<stdio.h>
int ans=0;
//Recursive function
int rec(int k,int i,int n,int m)
{
    //If the number of elements taken is greater than n then return 0.
    if(i>n)
        return 0;
    //If exact k is not taken then return 0.
    if(k<0)
        return 0;

    for(int j=1;j<=m;j++)
    ans+=rec(k-j,i+1,n,m);
     return 1;
}
int main()
{
    int n,k,m;
    printf("Enter n: ");
    scanf("%d",&n);
        printf("\nEnter m: ");
    scanf("%d",&m);
        printf("\nEnter k: ");
    scanf("%d",&k);
    //Recursive function is called.
    rec(k,1,n,m);
    printf("\nTrips: %d",ans);
}
