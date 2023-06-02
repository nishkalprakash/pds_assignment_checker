
/*
* Section 2
* Roll No : 22MA10067
* Name : Utkarsh
* Assignment No : 9
* Description : Program to read number and check whether it is fibonacci number or not.
*/
#include <stdio.h>

void isFibonacci(int f){
    int arr[500];
    arr[0]=0,arr[1]=1;
    for (int i=2;i != 0 ;i++){
        arr[i]=arr[i-1]+arr[i-2];
        if (arr[i]>=f){
                if (arr[i]==f) {printf("%d is a fibonacci number",arr[i]);}
                else {
                    if (arr[i]-f >= f-arr[i-1]) {printf("Nearest Fibonacci number is %d",arr[i-1]);}
                    else {printf("Nearest Fibonacci number is %d",arr[i]);}
                }
                break;
        }


    }


}



int main()
{
     int n;
     printf("Enter a number:");
     scanf("%d",&n);
     printf("Value of n: %d\n",n);
     if (n<0) printf("Please give positive number");
     else if (n==0 || n==1) printf("%d is a fibonacci number",n);
     else isFibonacci(n);
}
