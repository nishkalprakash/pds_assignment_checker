// Program to check whether exactly 2 numbers are equal
// Code Author: Prateek Kesavarapu
// Roll No.   : 24NA10049

#include <stdio.h>

int main(){
	int a, b, c, d;
	// Inputting all 4 numbers
	printf("a = ");
	scanf("%d", &a);
	printf("b = ");
	scanf("%d", &b);
	printf("c = ");
	scanf("%d", &c);
	printf("d = ");
	scanf("%d", &d);
	// Making sure exactly 2 numbers are equal
	if(a == b || a == c || a == d || b == c || b == d || c == d){
		if((a == b && b == c) || (b == c && c == d) || (a == c && c == d) || (a == b && c == d)){
			printf("NO\n");
		}
		else if(a == b && b == c && c == d){
			printf("NO\n");
		}
		else{
			printf("YES\n");
		}
	}
	else{
		printf("NO\n");
	}
	return 0;
}
