#include<stdio.h>

int main()
{
    int size,a=0,b=0;

    printf("length of the array\n");
    scanf("%d",&size);
    int array[size];
    printf("elements of the array\n");

    for(int i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
   }
    int largest=array[0];
    for(int i=0;i<size;i++)
    {
        int sum=0;
        for(int j=i;j<size;j++)
        {
            sum=sum+array[j];
            if(sum>largest)
            {
                a=i;b=j;
                largest=sum;
            }
        }
    }

    printf("\n The largest contigous subarray is");
    for(int x=a;x<=b;x++)
    {
        printf(" %d ",array[x]);
    }
    printf("\n The sum of the largest contigous subarray is");
    printf(" %d",largest);
    return 0;
}
