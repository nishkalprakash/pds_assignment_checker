//Roll no. 23MA10036
//Name: Nayandeep Deb

#include <stdio.h>
#include <stdlib.h>

int main() {
  int arr[50], n;
  printf("Enter number(Max 50): ");
  scanf("%d", &n);
  if (n > 50) {printf("Invalid value"); return 0;}
  
  for (int i = 0; i < n; i++){ //generating random numbers
    arr[i] = (rand()%41) + 10;
  }

  printf("Initial Array: ["); //displaying initial array
  for (int i = 0; i < n-1; i++){
    printf("%d, ", arr[i]);
  }
  printf("%d", arr[n-1]);
  printf("]\n");

  for(int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++){
      for (int k = j + 1;k < n; k++){ //three loops to perform all possible additions in array
	int sum = 0;
	sum += arr[i] + arr[j] + arr[k];
	if(sum == 60) { //displaying valid cases
	  printf("Array indices: (%2d, %2d, %2d)    Value in Indices: (%2d, %2d, %2d)\n", i, j, k, arr[i], arr[j], arr[k]);
	}
      }
    }
  }
  return 0;
}
