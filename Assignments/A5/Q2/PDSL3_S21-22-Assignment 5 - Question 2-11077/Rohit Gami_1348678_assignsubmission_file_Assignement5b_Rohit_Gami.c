#include <stdio.h>
#include <stdlib.h>

void find_range(int **a,int n,int *max,int *mini) //find the end points of range of array elements

{
    int temp_max=-9999999999,temp_mini= 999999999999;
    for(int i=0;i<n;i++)
    {
        if(a[i]>temp_max)
        {
            temp_max=a[i];
        }
        if(a[i]<temp_mini)
        {
            temp_mini=a[i];
        }
    }
    *max= temp_max;
    *mini= temp_mini;
}
void fill_bins(int *a,int n,int *max,int *mini,int k[],int bin_length,int **bins)
{
    for(int j=0;j<bin_length;j++){
        for(int i=0;i<n;i++)
        {
            if(a[i]>= mini && a[i] <= (mini+bin_length-1))
            {
                bins[j][i]= a[i];        // assign array elements to bins accordingly
            }
        }
    }
}

int main()
{

    int n,n_bins,bin_length,max= -999999999,mini=9999999999,*a, **bins;
//  n be the number of array elements
    printf("Enter the number of array elements: ");
    scanf("%d",&n);     //initialize n
    a = (int*) malloc(n * sizeof(int));
    printf("\nEnter the array elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);     //initialize the array elements
    }
    printf("\nEnter the number of bins: ");
    scanf("%d",&n_bins);
//  function call
    find_range(a,n,&max,&mini);
    if((max-mini)%n_bins==0)       // to find bin length appropriate for condition
    {
        bin_length=(max-mini)/n_bins;
    }
    else{
        bin_length=(max-mini)/n_bins +1;
    }
    int k[bin_length];      // to calculate number of elements in each bin
    for(int i=0;i<bin_length;i++)
    {
        k[i]=0;
    }
    bins = (int **) malloc (n * sizeof(int *));   //dynamic allocation of bins
        for (int i=0; i<n; ++i) {
           bins[i] = (int *) malloc (n*sizeof(int));
        }
//  function call
    fill_bins(a,n,&max,&mini,k,bin_length,bins);
    for(int i;i<bin_length;i++)
    {
        printf("bin%d-> %d   Number of elements in bin1 = %d",i,bins[i],k[i]);
    }
    return 0;
}
