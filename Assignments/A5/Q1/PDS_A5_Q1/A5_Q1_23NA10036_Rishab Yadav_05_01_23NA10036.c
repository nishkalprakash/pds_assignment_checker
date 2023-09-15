// Roll no - 23NA10036
// Rishab Yadav

#include <stdio.h>
#include <stdlib.h>

int main(){

  int n;
  int ranNum[50];
  int i;

  printf("Enter the number of random numbers to be generated:\n");
  scanf("%d", &n);

  for(i = 0; i < n; i++){
    ranNum[i] = rand()%90 + 10;//wrong
    printf("%d\n", ranNum[i]);
  }

  for(i = 0; i < n; i++){
    printf("Your input is: %d\n", ranNum[i]);
  }

    for(int j = 0; j < n - 2; j = j + 2){
      if(ranNum[j] > ranNum[j + 2]){
	int temp = ranNum[j];
	ranNum[j] = ranNum[j + 2];
	ranNum[j + 2] = temp;
      }
    }

  printf("Your desired output is:\n");

  for(int i = 0; i < n ; i++){
    printf("%d\n", ranNum[i]);
    }
  
  return 0;
}
