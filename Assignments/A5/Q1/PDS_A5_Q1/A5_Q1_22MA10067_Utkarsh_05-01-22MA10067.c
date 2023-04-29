
/*
* Section 2
* Roll No : 22MA10067
* Name : Utkarsh
* Assignment No : 5
* Description : Program to
*/
#include <stdio.h>
#include <math.h>

#define N 100


int main()
{
    int arr[N],n,k=0,temp;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter %d integers to be stored: ",n);
    if (n>100) {printf("Error: n>100");}

    for (int j=0;j<n;j++){
            scanf("%d",&arr[j]);}
    printf("Original Array: ");
    for (int i=0;i<n;i++) {printf("%d ",arr[i]);}


    for (int i=0;i<n;i++) {
            if (arr[i]<0) {
                temp=arr[i];
                for (int j=(i);j>=(k+1);j--) {
                    arr[j]=arr[j-1];
                    //printf("**%d,%d**",j,j-1);}
                arr[k]=negative;
                k++;
            }
    }
    printf("\nRearranged Array: ");
    for (int i=0;i<n;i++) {printf("%d ",arr[i]);}


    return 0;

}
