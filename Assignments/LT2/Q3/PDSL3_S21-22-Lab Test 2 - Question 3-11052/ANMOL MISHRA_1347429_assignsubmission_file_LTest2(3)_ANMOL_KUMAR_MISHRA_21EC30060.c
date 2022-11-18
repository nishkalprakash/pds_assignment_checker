#include<stdio.h>
//NAME- ANMOL KUMAR MISHRA
// ROLL NO.- 21EC30060
// SECTION-03
// PDS LAB TEST 2 
// QUESTION 3
int rec(int arr[],int n,int m,int i,int t[]) // DEFINING THE INT TYPE FUNCTION
{
    if(i==n)
    {
        int s[m];
        for(int i=0;i<m;i++)
        s[i]=0;
        for(int i=0;i<n;i++)
        s[t[i]]+=arr[i];
        int mn=s[0],mx=s[0];
        for(int i=0;i<m;i++)
        {
            if(mn>s[i])
            mn=s[i];
            if(mx<s[i])
            mx=s[i];
        }
        return mx-mn;
    }
    int ans=1000;
    for(int j=0;j<m;j++)
    {
        t[i]=j;
        if(ans>rec(arr,n,m,i+1,t))
        ans=rec(arr,n,m,i+1,t);
    }
    return ans;
}
int main()
{
    int n,arr[100],t[100],m;
    printf("Enter N = ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("Enter M = ");
    scanf("%d",&m);
    int mn=1000;
    for(int i=0;i<m;i++)
    {
        t[0]=i;
        if(mn>rec(arr,n,m,0,t))
        mn=rec(arr,n,m,0,t);
    }
    printf("minimum difference = %d",mn); // GIVE DIFFERNECE
    printf("THANK YOU");
}
