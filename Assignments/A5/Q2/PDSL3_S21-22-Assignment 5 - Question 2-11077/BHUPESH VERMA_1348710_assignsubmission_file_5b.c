#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main()
{
    int *arr, N;
    int min = INT_MAX , max = INT_MIN;
    int c_bin, size, range;
    int *arr_bins;
    printf("enter number of array elements:");
    scanf(" %d",&N);
    arr = malloc(N*sizeof(int));
    printf("Enter array elements:");
    for(int i=0; i<N; i++){
        if(i!=N)
            scanf(" %d", &arr[i]);
        if(arr[i]>max)
        {
            max = arr[i];
        }
        if(arr[i]<min)
        {
            min = arr[i];
        }
    }

    for(int i =0; i<N; i++)
    {
        printf("%d ",arr[i]);
    }
    printf(" max = %d, min = %d\n", max, min);
    printf("Enter the number of bins:");
    scanf(" %d", &c_bin);
    printf("\nc_bin = %d\n", c_bin);
    size = (max - min + 1)/c_bin;
    range = max - min + 1;
    if((range)%size !=0)
        size++;
    arr_bins = malloc((c_bin*size)*sizeof(int));
    int bin_size[c_bin];
    printf("\nrange=%d, size=%d\n",range, size);
    for(int i =0; i<c_bin; i++)
    {
        bin_size[i] = 0;
    }

    for(int i =0; i<N; i++)
    {
        arr_bins[((arr[i]-min)/size)*size + bin_size[(arr[i]-min)/size]] =  arr[i];
        bin_size[(arr[i]-min)/size]++;
    }

    for(int i =0; i<c_bin; i++)
    {
        printf("bin%d-> ",i+1);
        for(int j = 0; j<bin_size[i]; j++)
        {
            printf(" %d,",arr_bins[(i*size)+j]);
        }
        printf("\tNumber  elements in bin%d = %d",i+1,bin_size[i]);
        printf("\n");
    }
    return 0;
}
