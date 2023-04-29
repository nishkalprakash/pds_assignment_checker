#include<stdio.h>
/*Section 2
Roll No: 22HS10018
Name: Dilip Kumar Rewar
Assignment No: 5
Description: Program to arrange number in order of number line
*/
#define N 100
int main(){
    int a[100],n,i,j;
    printf("Enter limit (<100):");
    scanf("%d",&n);//How many numbers to be entered
    if(n<=100){
        printf("Enter %d number:",n);//Displaying how much number we are going to enter

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);//Entering the numbers in array
    }

    printf("Original array:");

    for(i=0;i<n;i++){
        printf(" %d ",a[i]);//Displaying the numbers
    }
    printf("\n");

    printf("Rearranged array: ");
    for(i=0;i<n;i++){
        if(a[i]<0){
            printf(" %d ",a[i]);//Arranging Negative numbers on left side of rearranged array
        }
    }
     for(i=0;i<n;i++){
        if(a[i]>=0){
            printf(" %d ",a[i]);//Arranging positive numbers on right side of rearranged array
        }
    }
    }
    else{
        printf("Error: n>100");//Case if n is greater than 100
    }

    return 0;
}
