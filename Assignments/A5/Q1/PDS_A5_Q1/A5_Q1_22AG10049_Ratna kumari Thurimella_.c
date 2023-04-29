#include<stdio.h>

void printNumbers(int arr[],int n);

int main()
{

    int n,i,N=100;
    scanf("%d",&n);

    int arr[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }

    printNumber(arr,n);




    return 0;
}
void printNumber(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");


}