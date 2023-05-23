/*
Section 2
Roll No : 22CS10077
Name : Surla Navaneeth
Assignment No : 6
*/
#include<stdio.h>
int main()
{
    int a[50],n,i;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    i = 0;
    for(i>-1;i<n;i++)
    {
        printf("Enter the element: ");
        scanf("%d",&a[i]);
    }
    i = n-1;
    for(i<n;i>-1;i--)
    {
        printf("%d ",a[i]);
    }
}
