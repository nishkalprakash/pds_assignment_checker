//C program to compute all possible number of journeys using recursive function
#include <stdio.h>
const int mod = 1000000007;
int dp[1000][1000];

//function for calculating no of ways to divide n in k groups
int myHostelChangingTrips(int p, int left, int k, int i, int m)
{
    //basic case
    if(p==k)
    {
        if(left==0)
            return 1;
        else
            return 0;
    }

    //case where n divided completely into less than k groups
    if(left==0)
        return 0;

    int ans=0;

    //putting all values possible greater than equal to previous
    for(int j=i; j<=m; j++)
    {
        if(j>left)  break;
        ans=(ans+ myHostelChangingTrips(p+1, left-j,k, i, m))% mod;
    }
    return ans;
}

//function to find no of ways of dividing n
int Count(int n, int k, int i, int m)
{
    //calling recursive function
    return myHostelChangingTrips(0,n,k,i,m);
}
int main()
{
    int n,k,m, out;
    int i=1;                       //i is starting day which is 1 initially
    //input n,k,m from user
    printf("Enter value of n");    //n is no of days
    scanf("%d\n", &n);
    printf("Enter value of k");    //k is no of items in room
    scanf("%d\n", &k);
    printf("Enter value of m");    //m is max items per trip
    scanf("%d\n",&m);

    out=Count(n,k,i,m);
    printf("All possible journeys: %d", out);
}
