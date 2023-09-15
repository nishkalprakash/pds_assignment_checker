#include<stdio.h>
//NAME-AYUSH KUMAR
//ROLL-23IM10008
int main(){
  int n,i;
  printf("To Display random variables in the required range-10-100");
  printf("Enter the no.of random variables required");
  scanf("%d", &n);
  int arr[n];
  i=rand()%100+10;
  
  printf("The required array is-",arr[n]);
return 0;
}
