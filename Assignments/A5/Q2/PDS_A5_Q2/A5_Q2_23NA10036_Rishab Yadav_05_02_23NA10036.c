//Roll number - 23NA10036
// Rishab Yadav

#include <stdio.h>
#include <stdlib.h>

int main(){

  int n;
  int ranNum[50];
  int a, b, c;
  
  printf("Enter the number of random numbers to be generated:\n");
  scanf("%d", &n);

  for(int i = 0; i < n; i++){
    ranNum[i] = rand()%40 + 10;//wrong
    printf("%d\n", ranNum[i]);
  }

  for(int i = 0; i < n; i++){
    printf("Your input is: %d\n", ranNum[i]);
  }

  /* while(ranNum[a] + ranNum[b] + ranNum[c] == 60){
    printf("ranNum[%d] ranNum[%d] and ranNum[%d] are the array indices that add upto 60.\n", a, b, c);
    printf("%d, %d and %d adds upto 60.\n", ranNum[a], ranNum[b] , ranNum[c]);
  }*/

  for(int i = 0; i < n; i++){
    for(int j = i + 1; j < n; j++){
      for(int k = j + 1; k < n; k++){
	if(ranNum[i] + ranNum[j] + ranNum[k] == 60){
	  printf("Array indices that add upto 60 are: ranNum[%d], ranNum[%d] and ranNum[%d]\n", i, j, k);
	  printf("Arrays that add upto 60 are: %d, %d and %d\n", ranNum[i], ranNum[j], ranNum[k]);
	}
      }
    }
  }

  return 0;

}
