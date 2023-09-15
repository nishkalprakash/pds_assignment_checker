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
    arr[i] = (rand()%91) + 10;
  }
  
  printf("Initial Array: ["); //displaying initial array
  for (int i = 0; i < n-1; i++){
    printf("%d, ", arr[i]);
  }
  printf("%d", arr[n-1]);
  printf("]\n");
  
  int ch = 0;
  for (int j = 0; j < n; j += 2) { //swapping code
    int k;
    if ( arr[j] > arr[j+2] && arr[j+2] != 0){
      k = arr[j +2];
      arr[j+2] = arr[j];
      arr[j] = k;
      ch++;
    }
  }
  
  printf("Final Array: ["); //displaying updated array
  for (int i = 0; i < n-1; i++){
    printf("%d, ", arr[i]);
  }
  printf("%d", arr[n-1]);
  printf("]\n");
  printf("Number of Interchanges: %d\n", ch);
  return 0;
}
