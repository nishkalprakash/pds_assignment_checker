/* Name   : Pasupulety Chethan Krishna Venkat
   Dept   : Computer science
   Roll no: 21CS30036
   Package: Code blocks
   Os     : windows
*/



#include<stdio.h>

int main(){
    int n;
    //Taking input
    printf("Enter n: ");
    scanf("%d", &n);
     //prefix sum at ith position holds the value of sum of all elements arrays upto index i
    int arr[n], prefix_sum[n];
    printf("Enter elements: \n");

    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
        prefix_sum[i] = arr[i];
        if(i){
            prefix_sum[i] += prefix_sum[i-1];
        }
    }

    //Here max will store the max sum, present max stores the max including the present element being iterated through
    //Start and end store indices of a subarray with maximum sum
    int max = -100000, present_max = 0;
    for(int i=0; i<n; i++){
        present_max = present_max + arr[i];

        //If including the current number makes sum greater than previous max then we update max
        if (max < present_max){
            max = present_max;
        }
        //If including the current number makes sum negative we dont include it and reset present max to 0
        if (present_max < 0){
            present_max = 0;
        }
    }

    //Printing the max sum and subarray corresponding to it
    printf("Largest sum = %d\n", max);
    printf("Sub-arrays = ");
    int flag = 0;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            if(prefix_sum[j] - prefix_sum[i] == max){
                if(flag != 0){
                    printf("OR ");
                }
                for(int k=i+1; k<=j; k++){
                    printf("%d ", arr[k]);
                }
                flag++;
            }
            if(i == 0 && prefix_sum[j] == max){
                if(flag != 0){
                    printf("OR ");
                }
                for(int k=0; k<=j; k++){
                    printf("%d ", arr[k]);
                }
                flag++;
            }
        }
    }
    return 0;
}



