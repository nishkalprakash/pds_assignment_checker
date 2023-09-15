//Roll no: 23EE10036
//Name: Kushagra Poonia

#include <stdio.h>
#include <stdlib.h>

int main(){
  int arr[50];
  int ans[50];
  int ans_i[50];
  int num = 0;
  int trplt = 0;

  printf("Enter the number of random numbers to be filled into the array:\n");
  scanf("%d", &num);

  while(num > 50 || num <= 0){
    printf("Enter something greater than 0 and less than 51:\n");
    scanf("%d", &num);
  }

  printf("Array = {");
  for(int i = 0; i < num; i++){ // Defines the the array and prints it
    arr[i] = (rand()%41)+10;
    printf(" %d,", arr[i]);
  }
  printf("\b}\n");

  for(int i = 0; i < num; i++){
    if((arr[i]+arr[i+1]+arr[i+2]) == 60 && i+2 < num){
      trplt++;
      
      printf("The triplets that are adding upto 60 = {");
      for(int j = 0; j < 3; j++){
	printf("arr[%d] = %d,",i+j, arr[i+j]);
      }
      printf("\b}\n\n");
    }
  }
}
