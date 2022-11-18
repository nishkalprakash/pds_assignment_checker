/*
name: JANAK PATEL
roll: 21AG30027
dept: agricultural and food engineering
package: code blocks
Test 2: question 1
*/


#include <stdio.h>

int kadane(int Array[],int n){


    printf("enter the value of n :\n");
    scanf("%d",&n);
    while(n<1 || n>20){
       scanf("%d",&n);
    }
    int a[5];             // i assume the size of array is 5.
    int k = 0;
    while(k<n){
        scanf("%d",a[k]);
        k++;
    }
    int l = 1;
    int sum=a[0];
    while(l<n){
        int t = 1 ;
        int sum_cpy = a[0];
        while(t<l){
            sum_cpy = sum_cpy + a[t] ;
        }
        if(sum < sum_cpy){
            sum = sum_cpy;
        }
    }
    printf("%d",sum);


}

// testing of code

int main(){


    int arr[]= {12,-15,9,-2,5};     // i take array value as given in example
    int n = sizeof(arr) / sizeof(arr[0]) ;
    printf("the value of SubArray is :%i",kadane(arr,n));
    return 0;
}
