#include<stdio.h>
int n;

int take(int A[])
{
    printf("Enter %d Integers : \n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
}
int largest(int A[])
{
    int temp,i;
    i=0;
    temp=A[0];
    for(i=0;i<n;i++)
    {
        if(temp<A[i])
            temp=A[i];
    }
    printf("Largest integer in this array is %d \n",temp);
}
int main()
{
    printf("Enter the no. between 1 to 20 \n");
    scanf("%d",&n);
    int A[n];
    take(A);
    largest(A);
}
