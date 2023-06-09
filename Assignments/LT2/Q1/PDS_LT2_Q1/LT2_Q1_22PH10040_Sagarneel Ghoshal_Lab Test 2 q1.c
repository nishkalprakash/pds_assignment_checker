/*
*Section 2
*Name: Sagarneel Ghoshal
*Roll No.:22PH10040
*Lab Test 2
*Description- Question 1
*/

#include<stdio.h>
#include<stdlib.h>

float mean(int *a,int n){                               //defining the function

    int sum;
    if(n==1) return a[0];
    else {
            return (a[n-1]+mean(a,n-1));
}
}


int main(){
    int *ptr,n;                              //declaring the variables
    printf("Enter the no. of integers: ");             //taking in the number of integers
    scanf("%d",&n);

    ptr=(int *)malloc(n*sizeof(int));              //allocating the memory

    int i;
    for(i=0;i<n;i++){
        printf("\nEnter integer: ");
        scanf("%d",&ptr[i]);
    }

    printf("List= [");                            //printing the original list
    printf("%d",ptr[0]);
    for(i=1;i<n;i++){
        printf(",   %d ",ptr[i]);
    }
    printf("]");

    float meannum=mean(ptr,n);                          //calling the function
    printf("\nMean = %f",meannum/n);                       //printing the mean

    return 0;

}
