/*Name-Ankit Kumar
Roll no. 21MI10010
Department:Mininig Engineering*/


#include<stdio.h>
 
int main()
{
    int size,k=0,t=0;
 
    printf("the length of the array\n");
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
        for(int s=i;s<size;s++)
        {
            sum=sum+array[s];
            if(sum>largest)
            {
                k=i;t=s;
                largest=sum;
            }
        }
    }
 
    printf("\n largest contigous subarray");
    for(int p=k;p<=t;p++)
    {
        printf(" %d ",array[p]);
    }
    printf("\n sum of the largest contigous subarray");
    printf(" %d",largest);
    return 0;
}
