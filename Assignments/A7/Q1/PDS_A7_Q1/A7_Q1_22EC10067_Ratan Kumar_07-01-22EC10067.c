/*  Name: Ratan Kumar
Roll no.: 22EC10067
section: 2
Problem no. 1*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
int n ;
int *a;
srand(time(0));
scanf("%d",&n);
a = (int*) malloc(n*sizeof(int));
int arr[n],sum=0;
//time_t t;
 printf("%d-random number array: ",n) ;// Range of random numbers will be in between 2 and 1000
for(int i=0;i<n;i++){
        *(a+i)= 2+rand()%1000;
}
for(int i=1;i<=n;i++){
    printf("%d ",*(a+i));
    if(arr[i]%(i)==0){
            sum+=i;
    }
}
printf("\n");
for(int i=0;i<=n;i++){
     if(sum==arr[i]){
    printf("%d is a perfect number",arr[i]);
    break;
    }
    else{
    printf("No perfect number found");
    break;
    }
}
return 0;
}







