/*
Name : Divya Raj
Roll : 21MT10017
Dept : Metallurgy
Package : Visual Studio
*/

#include<stdio.h>
#include<math.h>

int main()
{
    float z;
    int k;
    printf("z = ");
    scanf("%f", &z);
    printf("k = ");
    scanf("%d", &k);
    float arr[k];
    arr[0] = z;
    for(int i = 1; i <= k; i++){
        arr[i] = arr[i-1] - sqrtf(arr[i-1]);
        // if the height becomes negative, multiply it by -1 to make it positive
        if(arr[i] < 0){
            arr[i] *= (-1);
        }
        // if height becomes zero, break out of the loop
        if (arr[i] == 0.0) {
        	printf("(%f, %d)", arr[i], i);
        	break;
        }
        printf("(%f, %d),  ", arr[i], i);
        // if the current height is same as previous,
        // we calculate the step using the formula given below 
        if(arr[i] == arr[i-1]){
            arr[i] = arr[i-1] - pow((sqrtf(arr[i-1]) - (1/i)), 2);
        }
    }
    return 0;
}