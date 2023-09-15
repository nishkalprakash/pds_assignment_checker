//Roll no: 23EE10036
//Name: Kushagra Poonia

#include <stdio.h>
#include <stdlib.h>

int main(){
  int arr[50];
  int num = 0;
  int intchg = 0;

  printf("Enter the number of random numbers to be filled into the array:\n");
  scanf("%d", &num);

  while(num > 50 || num <= 0){
    printf("Enter something greater than 0 and less than 51:\n");
    scanf("%d", &num);
  }

  printf("Array = {");

  for(int i = 0; i < num; i++){ // Defines the the array and prints it
    arr[i] = (rand()%91)+10;
    printf(" %d,", arr[i]);
  }
  printf("\b}\n");

  for(int cnt = 0; cnt < num; cnt++){
    int temp = 0;
    if(arr[cnt] > arr[cnt+2] && cnt+2 < num){
      temp = arr[cnt];
      arr[cnt] = arr[cnt+2];
      arr[cnt+2] = temp;
      intchg++;
    }
  }
  printf("Array = {");
  for(int pcnt = 0; pcnt < num; pcnt++){
    printf(" %d,", arr[pcnt]);
  }
  printf("\b}\n");
  printf("The number of interchanges are = %d\n", intchg);
}
