// Program to find sum of the first n terms of the following series:
// Author Name: Prateek Kesavarapu
// Roll Number: 24NA10049

#include <stdio.h>

int gcd(int a, int b){ // Function for computing gcd
	while(b != 0){
		int c = b;
		b = a % b;
		a = c;
	}
	return a;
}

int CoPrime(int a, int b){ // Function for computing CoPrime
	if(gcd(a, b) == 1)
		return 1;
	else
		return 0;
}

void pair(int a[5]){ // Function for getting pair of numbers
	int count = 0;
	for(int i = 0; i < 5; i++){
		for(int j = i + 1; j < 5; j++){
			if(CoPrime(a[i], a[j])){
				printf("%d and %d are Co-Prime\n", a[i], a[j]);
				count++;
			}
		}
	}
	if(!count)
		printf("No Co-Primes Found.\n");		 
}

int main(){
	int a[5] = {0};
	for(int i = 0; i < 5; i++)
		scanf("%d", &a[i]);
	pair(a);
	return 0;
}
