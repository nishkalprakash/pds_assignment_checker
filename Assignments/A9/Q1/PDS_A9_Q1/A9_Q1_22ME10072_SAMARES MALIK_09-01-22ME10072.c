/*name-samares malik
  roll no-22ME10072
  assignment9 q1*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void is_fibonacci(long int n){
    int arr[n];
    int flag = 0;
    int nearest,diff;
    diff=n;
    arr[0]=0;
    arr[1]=1;
    for(int i=2;i<n;i++){
        arr[i]=arr[i-1]+arr[i-2];
    }
    for(int i=0;i<n;i++){
        if(n==arr[i]){
            printf("%d is a Fibonacci Number\n",n);
            flag=1;
            break;
        }
    }
    if(flag==0){
        for(int i=0;i<n;i++){
            if((arr[i]>n)&&(arr[i]-n<diff)){
                diff = arr[i]-n;
                nearest = arr[i];
            }
            else if((n-arr[i]<diff)&&(n>arr[i])){
                diff = n-arr[i];
                nearest = arr[i];


            }
        }
        printf("Nearest Fibonacci Number:%d\n",nearest);
    }
    //free(arr);
    //printf("Nearest Fibonacci Number:%d\n",nearest);

}
int main(){
    long int n;
    scanf("%d",&n);
    if(n<0){
        printf("Please give positive number\n");
    }
    else{
        printf("value of n:%d",n);
        is_fibonacci(n);

    }


    return 0;

}
