/* Name : Ratan kumar
Roll: 22EC10067
Section: 2
Problem No.: 1
Lab test 2*/
#include<stdio.h>
float mean(int *a,int n)
{
    if(n==0)
    {
        return a[0];
    }
    float sum1,sum2,sum3=0;
    sum1 = a[n-1] + mean(a,n-2);
    for(int i=0; i<n; i++)
    {
        sum3= sum3 + a[i];
    }
    float ans = (sum3)/n;
    return ans;

}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("List = ");
    for(int i=0; i<n; i++)
    {
        printf("%d ,",arr[i]);
    }
    printf("\n");
    float finalanswer = mean(&arr,n);
    printf("Mean = %0.2f",finalanswer);
    return 0;
}
