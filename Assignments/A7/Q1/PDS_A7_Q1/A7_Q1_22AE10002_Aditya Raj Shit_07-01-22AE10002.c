/*
*Name-Aditya Raj Shit
*Roll no- 22AE10002
*Section- 2
*Assignment no.- 1
*/

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int isPerfect(int n)            //function to check if a number is perfect or not.
{
    int sum=0;                  //sum is the variable which takes the sum of all the factors of the given number.
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==n){
        return 1;           //program returns 1 if the number is a perfect number else it returns 0.
    }
    else{
        return 0;
    }
}

int main()
{
    srand(time(0));

    int n;
    printf("Enter size of the array you want: ");
    scanf("%d",&n);                                 //taking array size from the user.

    //int arr[100];
    int *arr;
    arr=(int*)malloc(n*sizeof(int));            //creating dynamic array of size given by user.

    printf("%d-random number array : ",n);
    for(int i=0;i<n;i++){
        arr[i]=2+rand()%1000;                   //filling the array with random numbers.
        printf("%d ",arr[i]);
    }

    int count=0;                        //count variable simply stores the number of perfect numbers in the array.
    printf("\n");
    for(int i=0;i<n;i++){
        if(isPerfect(arr[i])){          //checking if the element of the array is perfect or not.
            count++;
            printf("%d, ",arr[i]);
        }
    }

    if(count==0){
        printf("No perfect number found.");
    }
    else if(count==1){
        printf("is a perfect number.");
    }
    else{
        printf("are perfect numbers.");
    }

    free(arr);
}
