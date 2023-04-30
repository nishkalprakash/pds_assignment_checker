/*
* Section- 02
* Name - Rahul kumar
* Roll no. - 22GG10032
* Assignment - 05
* Question Number - 01
* Description - Array of intrger of size 100
*/
#include<stdio.h>
#define N 100
int main()
{
    int n;
    printf("Enter the number of elements :");
    scanf("%d",&n);
    if(n>100){
        printf("Error : n>100");
    }
    else{
    int arr[n],i;
    for(i=0;i<n;i++){
       printf("Enter the element %d ",i+1);
       scanf("%d",&arr[i]);
    }
    printf("Original Array : ");
    for(i=0;i<n;i++){
          printf("%d ",arr[i]);
    }
    printf("\nRearranged Array : ");
    for(i=0;i<n;i++) {
        if(arr[i]<0){
        printf("%d ",arr[i]);
     }
     }
     for(i=0;i<n;i++){
       if(arr[i]>=0){
        printf("%d ",arr[i]);
       }
     }
    }
    return 0;
}
