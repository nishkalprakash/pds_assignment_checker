#include <stdio.h>

int main(){
	int n, sum=0;
	printf("Enter any number: ");
	scanf("%d", &n);
	while (n!=0){  //Condition fails if all digits are extracted from n
	sum+=n%10;  //Extracting the last digit from n and adding to sum
	n=n/10;	 //Truncating last digit from n
	}
	printf("%d", sum);
	return 0;
}
