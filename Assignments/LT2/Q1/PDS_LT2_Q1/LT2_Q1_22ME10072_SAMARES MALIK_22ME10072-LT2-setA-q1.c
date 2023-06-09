/*name - samares malik
  lab test 2 q1
  roll no-22ME10072*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
float mean(int *a,int n){
    float sum=0;
    if(n==1){
        sum+=a[n-1];
        return sum;
    }
    sum += mean(a,n-1) + a[n-1];
    return sum;

}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("List = [");
    for(int i=0;i<n;i++){
        if(i!=n-1){
            printf("%d, ",arr[i]);
        }
        if(i==n-1){
            printf("%d]",arr[i]);
        }
    }
    printf("\nMean = %0.2f",mean(arr,n)/n);//sum is being calculated using recursion


    return 0;

}
