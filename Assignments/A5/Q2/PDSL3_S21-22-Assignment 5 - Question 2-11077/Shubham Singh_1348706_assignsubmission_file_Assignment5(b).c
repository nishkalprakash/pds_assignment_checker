/*
Name: Shubham Singh
Roll No: 21EX10032
Department: Geology and Geophysics
Package: Codeblocks
Assignment Class: 5(b)
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,*arr,max=-999999,min=999999;

    printf("Enter the number of array elements : "); // taking no. of elements in array
    scanf("%d",&n);

    arr=(int *)malloc(n * sizeof(int));  //dynamically allocating an array according the to the no. of elements in array

    printf("Enter the array elements: ");  // taking elements of array from user
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        // finding range of array [min,max]
        if(arr[i]>max)
        {
            max=arr[i];
        }
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }

    int nbins;
    printf("Enter number of bins: ");  // taking no. of bins to divide array elements into desired intervals
    scanf("%d",&nbins);

    int binsize;
    if( ( (max-min) * 1.0/nbins) - (int)( (max-min) * 1.0/nbins) == 0 )  //finding intervals for the bins
    {
        binsize = (int)((max-min)*1.0/nbins);
    }
    else
    {
        binsize = (int)((max-min)*1.0/nbins) + 1;
    }


    int **bins,num[nbins];

    bins=(int** )malloc(nbins * sizeof(int *));
    for(int i=0;i<nbins;i++)
    {
        bins[i]=(int *)malloc(n * sizeof(int));
    }

    int r1=min,r2=min+binsize;
    //storing bin elements
    for(int i=0;i<nbins;i++)
    {
        num[i]=0;
        for(int j=0;j<n;j++)
        {
            if(arr[j]>=r1 && arr[j]<r2)
            {
                bins[i][num[i]]=arr[j];
                num[i]++;
            }
        }
        r1+=binsize;//increasing interval size
        r2+=binsize;
    }

    printf("\nOUTPUT:\n");
    for(int i=0;i<nbins;i++)
    {
        printf("bin%d -> ",i+1);
        for(int j=0;j<num[i];j++)
        {
            printf("%d, ",bins[i][j]);
        }
        printf(" Number of elements in bin%d = %d\n",i+1,num[i]);
    }
    //freeing up the allocated memory space
    for(int i=0;i<nbins;i++)
        free(bins[i]);
    free(bins);
    return 0;
}
