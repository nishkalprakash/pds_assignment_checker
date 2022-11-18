/*Name- Krish Agarwal
Roll No.- 21NA10018
Department- Ocean Engineering and Naval Architecture
Section- 3
IDE-VS Code
*/
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main()
{
    int n,*array, no_of_bins, binsize;
    int maximum=INT_MIN;
    int minimum=INT_MAX;
    //Taking required inputs.
    printf("Enter the number of array elements : ");
    scanf("%d",&n);
    array=(int *)malloc(n * sizeof(int));
    printf("Enter the array elements: ");
    for(int i=0;i<n;i++)
    {//also finding range of array [min,max]
        scanf("%d",&array[i]);
        if(array[i]>maximum)
            maximum=array[i];
        if(array[i]<minimum)
            minimum=array[i];
    }
    printf("Enter number of bins required : ");
    scanf("%d",&no_of_bins);
    //calculating interval for the bins
    if(((maximum-minimum)/(no_of_bins*1.0))-(int)((maximum-minimum)/(no_of_bins*1.0)) == 0 )
        binsize=(int)((maximum-minimum)/(no_of_bins*1.0));
    else
        binsize = (int)((maximum-minimum)*1.0/no_of_bins) + 1;
    int **bin_container,num[no_of_bins];
    bin_container=(int** )malloc(no_of_bins * sizeof(int *));//dynamic allocation of 2d array
    for(int i=0;i<no_of_bins;i++)
    {
        bin_container[i]=(int *)malloc(n * sizeof(int));
    }
    if(bin_container==NULL)
    {
        printf("Insufficient Memory !");
        return 0;
    }
    //inputting number in the bins
    int x=minimum;
    int y=minimum+binsize;
    for(int i=0;i<no_of_bins;i++)
    {
        num[i]=0;
        for(int j=0;j<n;j++)
        {
            if(array[j]>=x && array[j]<y)//selecting according to range
            {
                bin_container[i][num[i]]=array[j];
                num[i]++;
            }
        }
        //incrementing interval
        x+=binsize;
        y+=binsize;
    }
    //displaying the bins
    printf("\nOUTPUT:\n");
    for(int i=0;i<no_of_bins;i++)
    {
        printf("bin%d ------- ",i+1);
        for(int j=0;j<num[i];j++)
        {
            printf("%d, ",bin_container[i][j]);
        }
        printf(" Number of elements in bin%d = %d\n",i+1,num[i]);
    }
    //freeing the memory
    for(int i=0;i<no_of_bins;i++)
    free(bin_container[i]);
    free(bin_container);
    return 0;
}