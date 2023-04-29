/*Name: Abhiraj Ranjan
Roll Number: 22MI10002
Section: 2
Assignment: 5
Question: 3
Description: Swapping */
#include<stdio.h>

void swap(int *p,int *q)
{
    int c=*p;
    *p=*q;
    *q=c;

}

void reverse(int *a,int n)
{
    int i;
    for(i=0; i<(n/2)+1; i++)
    {
        swap(&a[i],&a[n-i-1]);
        for(i=0; i<n; i++) printf("%d ",a[i]);
    }
}



    int main()
    {
        int a[100],dir,n,i;
        printf("Enter the size of array and direction: ");
        scanf("%d%d",&n,&dir);
        printf("Enter %d integers:\n",n);
        for(i=0; i<n; i++) scanf("%d",&a[i]);
        printf("Original array: ");
        for(i=0; i<n; i++) printf("%d ",a[i]);
        printf("\nReverse Array: ");
        reverse(a,n);
        return 0;
    }
