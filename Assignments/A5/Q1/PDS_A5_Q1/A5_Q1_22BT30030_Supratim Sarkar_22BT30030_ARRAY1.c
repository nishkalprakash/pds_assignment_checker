#include<stdio.h>
//#include<conio.h>
 #define N 100
 #include <stdlib.h>

int main()
{
    int n;
    printf("enter the no of elements");
    scanf("%d",&n);
    int arr[n];
    printf("input all the array elements");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }
    printf("original array:");
    for( int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
printf("\n");
//rearrange_alternate_positions(arr,n);
printf("rearranged array:");
for ( int i=0;i<n;i++)
{
    printf("%d ",arr[i]);
}
printf("\n");
//rearrange_alternate_positions(arr,n);
printf(" rearranged array :");
for ( int i=0;i<n;i++)
{
    printf("%d",arr[i]);
}




return 0;
}
