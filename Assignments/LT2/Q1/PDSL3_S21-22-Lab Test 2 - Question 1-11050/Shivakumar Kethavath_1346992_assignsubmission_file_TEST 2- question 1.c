/* kethavath shivakumar
 21MI31013 */
#include<stdio.h>

int main()
{
    int size,startIndex=0,lastIndex=0;

    printf("ENTER LENGTH OF THE ARRAY\n");
    scanf("%d",&size);// array of length entered
    int array[size];
    printf("ENTER ELEMENTS OF THE ARRAY\n");// populating array

    for(int i=0;i<size;i++)
    {
        scanf("%d",&array[i]);

    }

   int largest=array[0];// intialise variable
    for(int i=0;i<size;i++)
    {
        int sum=0;
        for(int j=i;j<size;j++)
        {
         sum=sum+array[j];
        if(sum>largest)
            {
            startIndex=i;lastIndex=j;
            largest=sum;
            }
        }
    }

    printf("\n LARGEST CONTIGOUS SUBARRAY IS");
    for(int z=startIndex;z<=lastIndex;z++)
    {
    printf(" %d ",array[z]);
    }
    printf("\n SUM OF LARGEST CONTIGOUS SUBARRAY IS");
    printf(" %d",largest);
return 0;
}
