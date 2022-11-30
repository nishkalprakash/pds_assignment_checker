#include <stdio.h>

int main(){
	int num, i;
	printf("Enter the number for which you want to find factors: ");
	scanf("%d", &num);
	if (num==0){  //Handling corner case when input is zero
		printf("0");	
	}
	else{
		if (num<0){  //Converting negative integers to positive
			num=-num;	
		}
		for (i=1; i<=num/2; i++){  //Iterating till num/2 since that is the largest possible factor other than the number itself
			if (num%i==0){
			printf("%d ", i);
			}
		}
		printf("%d", num);  //Printing the number itself as a factor as it was left out during the loop
	}
	return 0;
}
