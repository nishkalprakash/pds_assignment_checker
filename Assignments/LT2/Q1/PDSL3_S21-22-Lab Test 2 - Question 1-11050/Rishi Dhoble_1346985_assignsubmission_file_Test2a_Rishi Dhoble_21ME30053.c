/*
Name- Rishi Dhoble
Roll no- 21ME30053
Sec-3
Package- Code Blocks
Q1
*/

#include <stdio.h>

int main(){

    int n;
    int array[20];

    printf("Enter n: ");          //no of entries
    scanf("%d",&n);

    printf("Enter elements: ");

    for(int i=0; i<n; i++){                //input
        scanf("%d",&array[i]);
    }

    int sum, maxSum=0;

    int max_start, max_end;

    for(int i=0; i<n; i++){                   //outer loop

        for(int j=i; j<n; j++){               //inner loop to check sum
            sum=0;

            for(int k=i; k<=j; k++){
                sum+=array[k];
            }

            if(sum>maxSum){                  //check the greatest sum
                maxSum=sum;
                max_start=i;
                max_end=j;
            }
        }
    }

    printf("Largest sum = %d", maxSum);

    printf("\nSub-arrays = ");

    for(int i=max_start; i<=max_end; i++){
        printf("%d ",array[i]);
    }


    return 0;
}
