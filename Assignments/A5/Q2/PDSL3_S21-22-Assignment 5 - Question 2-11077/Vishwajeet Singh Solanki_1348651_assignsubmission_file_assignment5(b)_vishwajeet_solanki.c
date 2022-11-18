/*
NAME: VISHWAJEET SINGH SOLANKI
ROLL NO: 21CS10079
DEPT: COMPUTER SCIENCE
PACKAGE: CODEBLOCKS
ASSIGNMENT:5(b)
*/
# include <stdio.h>
# include <stdlib.h>
# include <math.h>

void sort(int* arr,int n)
{
    int i,j,t;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                t=arr[j];
                arr[j]=arr[i];
                arr[i]=t;
            }
        }
    }

    return;
}

int main()
{
    int n,arr,bins,*bin,i,j,k,start,end; //n is size of the array

    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    arr = (int*)malloc(n*sizeof(int));

    printf("Enter the array elements in a single line:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }


    printf("Enter the number of bins:\n");
    scanf("%d",&bins);
    bin = (int*)malloc(bins*sizeof(int));

    sort(arr,n);

    start=arr[0];
    end = arr[n-1];

    int N;   //N is the size of the range of elements of array
    N=end-start+1;

    int num_range_in_each_bin, num_range_in_last_bin;
    num_range_in_each_bin = ceil(1.0*N/bins);
    num_range_in_last_bin = N - (bins-1)*num_range_in_each_bin;


}


