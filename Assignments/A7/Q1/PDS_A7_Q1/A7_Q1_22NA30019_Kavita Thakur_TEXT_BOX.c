/*
* Section 2
* Roll No.: 22NA30019
* Name : Kavita Thakur
* Assignment No.: 7
* Description :
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  int n,r=0;
  printf("enter value of n : ");
  scanf("%d",&n);
  srand(time(0));
  int* ptr = (int*)malloc(n*sizeof(int));

  printf("%d-random number array:",n);

  for(int i=0;i<n;i++){  //random numbers
    ptr[i]=2+rand()%1000;
  }

  for(int i=0;i<n;i++){  //printing random numbers
    printf("%d  ",ptr[i]);
  }

  printf("\n");



  for(int i=0;i<n;i++){
    int sum=0;
    for(int j=1;j<ptr[i];j++){
       if(ptr[i]%j==0){
           sum=sum+j;

       }
    }

  if(sum==ptr[i]){
     printf("%d ",ptr[i]);
     r++;
  }

  }

  if(r==0){
    printf("No perfect number found");
  }

  if(r==1){
    printf("is a perfect number");
  }

  if(r>1){
    printf("are perfect numbers");
  }
return 0;
}