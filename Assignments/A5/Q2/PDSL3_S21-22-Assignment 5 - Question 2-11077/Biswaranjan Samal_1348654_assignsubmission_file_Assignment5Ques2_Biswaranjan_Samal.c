/*
Name:Biswaranjan Samal
Roll no: 21IM10011
Dept: Industrial and Systems Engineering
Package: Codeblocks
Assignment: 5 ,Question: 2
*/




#include<stdio.h>
#include<stdlib.h> //calls functions to dynamically allocate memory
#include<math.h>

void print(int **bins,int binSize)
//function calculate the number elements in each of the array in which the element are stored
{
    int i,j;
    for(i = 0; i < binSize; i++)
    {
        printf("bin%d -> ",i+1);
        int size = bins[i][0];
        for(j = 1; j <= size; j++)
            printf("%d ",bins[i][j]);
        printf("\t Number of Elements in bin%d = %d\n",i+1,size);
    }
}

void createBins(int **bins,int *array,int n,int binSize)
//function which creates bin and divides the elements into the appropiate bin stores them in matrix form
{
    int i,j;
    int left = 1000000000,right = -1000000000;
    for(i = 0; i < n; i++)
    {
        if(left > array[i])
            left = array[i];
        if(right < array[i])
            right = array[i];
    }
    for(i = 0; i < binSize; i++)
    {
        int range = (right-left+1)/(binSize-i) + left;
        int cnt = 0;
        for(j = 0; j < n; j++)
        {
            if(array[j] < range && array[j] >= left)
                cnt++;
        }
        bins[i] = (int*)malloc((cnt+1)*sizeof(int));
        bins[i][0] = cnt;
        int last = 1;
        for(j = 0; j < n; j++)
            if(array[j] < range && array[j] >= left)
                bins[i][last++] = array[j];
        left = range;
    }
}

int main()
{
    int n;
    printf("Enter the numner of array elements:");
    scanf("%d",&n);

    int *array;
    array = (int*)malloc(n*sizeof(int)); //dynamically memory is allocated
    printf("Enter the array elements:");
    int i;
    for(i = 0; i < n; i++)
        scanf("%d",&array[i]);   //array elements are entered

    int binSize;
    printf("Enter the number of bins:"); //takes number of group in which we will divide the range
    scanf("%d",&binSize);

    int** bins;

    bins = (int**)malloc(binSize*sizeof(int*)); //dynamic allocation of memeory
    createBins(bins,array,n,binSize);  //functions which creates bin
    print(bins,binSize);   //function which prints as per required outputt
}
