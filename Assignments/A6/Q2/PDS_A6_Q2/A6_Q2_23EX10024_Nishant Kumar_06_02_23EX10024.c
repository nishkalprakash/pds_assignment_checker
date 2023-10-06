//ROLL 23EX10024
//NAME NISHANT KUMAR
#include<stdio.h>
#include<stdlib.h>
int sum(int array1[],int n){
  if(n!=0){
    int x = array1[n-1] + sum(array1,n-1);
  }
  else{
    return x;
  }
  int main()
  {
    int array1[30],n=30;
    printf("The contents of array are:\n");
    for(int i=0;i<30;i++){
      printf("%d ", array1[i] = 20 + rand()%11);
    }
    int value = sum(array1,n);
    printf("The sum of the array is %d\n", value);
    return 0;
  }
  
    
    
  
