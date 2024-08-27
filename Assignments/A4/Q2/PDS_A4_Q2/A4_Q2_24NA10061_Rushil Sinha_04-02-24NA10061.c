//NAME: RUSHIL SINHA
//ROLL NO.: 24NA10061
//Program to display max and second max number on input
#include <stdio.h>

int main() {
	int num, max, smax=0;
	
	printf("Enter number:");
	scanf("%d", &num);
	max = num; 
	printf("Largest number: %d \n", max);
	printf("Second largest number: Value not entered yet \n");
	
	while (1){
		if (num >=0) {
			printf("Enter number:");
			scanf("%d", &num);	
			if (num > max) {
				smax = max;
				max = num;		
			}
			if((num > smax) && (num != max)){
				smax= num;
			}
		}
		printf("Largest number: %d \n", max);
		printf("Second largest number: %d \n", smax);
	
		if (num<0) {
			break;
	}
	}
return 0;
}
