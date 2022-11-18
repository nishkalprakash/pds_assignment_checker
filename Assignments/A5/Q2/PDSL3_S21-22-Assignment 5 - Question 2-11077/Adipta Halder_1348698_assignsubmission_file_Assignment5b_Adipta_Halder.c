/*
Name: Adipta Halder
Roll Number: 21EC30003
Department: EC
Package: CODEBLOCKS
O.S: Windows 10
Assignment Class: 3
Assignment number: 5b
*/
#include<stdio.h>
#include<math.h>
int main(){
    /*n no. of elements, bin is no. of bins, arr stores elements,max and min are bounds of arr,in is interval length,p is 2d array storing bins*/
    int n,bin,i,j,*arr,max,min,in,**p;
    float d;//dummy variable
    printf("Enter number of elements: ");
    scanf("%d",&n);
    arr=(int *)malloc(n*sizeof(int));//dyanamic allocation of arr
    printf("Enter the elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    min=arr[0];
    printf("Enter number of bins: ");
    scanf("%d",&bin);
    int count[bin];//to contain no. of elements in each bin
    int dummy[bin];//it will contain counters for allocating elements to each bin, both initialised to 0
    for(i=0;i<bin;i++){
        count[i]=0;
        dummy[i]=0;
    }
    //finding max and min
    for(i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    //modifying in because max always maynot be divisible by bin
    d=(float)max/bin;
    in=ceil(d);
    for(i=0;i<n;i++){
        for(j=1;j<=max;j=j+in){
            if(arr[i]>=j&&arr[i]<=j+in-1){//checking range by running loop and using j
                count[((j-1)/in)]++;
            }
        }
    }
    p=(int **)malloc(bin*sizeof(int *));//allocating p
    for(i=0;i<bin;i++){
        p[i]=(int *)malloc(count[i]*sizeof(int));
    }
    for(i=0;i<n;i++){
        for(j=1;j<=max;j=j+in){
            if(arr[i]>=j&&arr[i]<=j+in-1){
                p[((j-1)/in)][dummy[((j-1)/in)]]=arr[i];//important step as i enter elements in bins
                dummy[((j-1)/in)]++;
            }
        }
    }
    for(i=0;i<bin;i++){
        printf("\nbin %d (%d,%d) ->",i+1,(i*in+1),((i+1)*in));
        for(j=0;j<count[i];j++){
            printf("%d ",p[i][j]);
        }
        printf("  Number of elements is %d",count[i]);
    }
 return 0;
}


