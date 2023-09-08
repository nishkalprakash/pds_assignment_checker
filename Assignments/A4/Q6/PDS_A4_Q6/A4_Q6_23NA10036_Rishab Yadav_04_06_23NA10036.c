// Roll no - 23NA10036
// Rishab Yadav

#include <stdio.h>
#include <stdlib.h>

int main(){


  printf("20 Random Integers between 5000 and 6000:\n");

  int min = 32;

  for(int i = 1; i<= 20; i++){

    int var;
    int sum = 0;

    var = rand()%1000 + 5000; //generates random 3 digit number between 5000 and 6000;

    printf("%d\n", var);

    while(var>0){
		sum = sum + var%10;
		var = var/10;
    }
    printf("Sum of digits of this number is: %d\n", sum);

    if(sum < min){
       min = sum;
    }
  }

	printf("Minimum of all the sum is: %d", min);

  return 0;
}
