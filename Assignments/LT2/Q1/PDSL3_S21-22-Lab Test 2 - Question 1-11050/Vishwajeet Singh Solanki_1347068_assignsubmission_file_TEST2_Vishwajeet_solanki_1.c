/*
NAME: VISHWAJEET SINGH SOLANKI
ROLL NO: 21CS10079
DEPT: COMPUTER SCIENCE
PACKAGE: CODEBLOCKS
Question : 1
*/
#include<stdio.h>

int main()
{
    int n,start=0,end=0;

    printf("Enter n :\n");
    scanf("%d",&n);
    int array[n];
    printf("Enter elements:\n");

    for(int i=0;i<n;i++)              //Input elements
    {
        scanf("%d",&array[i]);
    }

    int largest=array[0];
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=i;j<n;j++)
        {
            sum=sum+array[j];
            if(sum>largest)
            {
                start=i;end=j;         //Declaring starting and ending indices
                largest=sum;
            }
        }
    }

    printf("\n");
    printf("Largest sum = ");            //Outputs
    printf(" %d \n",largest);

    printf("Sub-array=");
    for(int x=start;x<=end;x++)
    {
        printf(" %d ",array[x]);
    }
    return 0;
}
