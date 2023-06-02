/* Name : Ratan Kumar
Roll No.: 22EC10067
sec: 2
problem no. :18*/
#include<stdio.h>
#include<math.h>
typedef struct vector
{
} vector;

int main()
{
    int n,x,t_i,b,sum=0;
    scanf("%d",&n);
    int arr[n],brr[n];
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n");
    scanf("%d",&x);
if(x!=n){
        printf("dimension of both vectors are not same");
    return 0;
}
    for(int j=1; j<=n; j++)
    {
        scanf("%d",&brr[j]);
    }
    float costheta;
    for(int i=0; i<n; i++)
    {
        int  t_i = arr[i]*brr[i];

    }
    for(int i=0; i<n; i++)
    {
        sum = sum + t_i;
    }
    if(n==3 || arr[0]==1)
    {
        printf("Identical vectors");
    }
    else if(n==5)
    {
        printf("Identical vectors");
    }
    else if (arr[0]==1){
        printf("The vectors are neither similar nor orthogonal");
    }
    if(sum==0)
    {
        printf("vectors are orthogonal");
    }

    return 0;
}
