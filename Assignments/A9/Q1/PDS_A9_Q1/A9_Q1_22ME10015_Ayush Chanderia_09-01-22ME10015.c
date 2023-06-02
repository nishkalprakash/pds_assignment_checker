#include <stdio.h>
#include <math.h>

void checkFibonacci(int a){
 int arr[999];
 arr[0]=0;
 arr[1]=1;
 for(int i=2;i<1000;i++){
    arr[i]=arr[i-1]+arr[i-2];
    if(arr[i]>=a){
        if(arr[i]==a){
            printf("%d is a fibonacci number",arr[i]);

        }
        else{
            if(arr[i]-a>=a-arr[i-1]){
                printf("Nearest Fibonacci number is %d",arr[i-1]);
            }
            else{
                    printf("Nearest Fibonacci number is %d",arr[i]);}

            }
            break;

        }
    }
 }


int main(){
int n;
printf("Enter a number:");
scanf("%d",&n);
printf("Value of n: %d\n",n);
if(n<0)
    printf("Please give a positive number");
else if(n==0||n==1)
    printf("%d is a Fibonacci number",n);
else checkFibonacci(n);
return 0;
}
