#include <stdio.h>

int gcd(int a, int b);
void CoPrime(int a, int b);			//function prototype defn

int main(){
	int x[5];
	printf("Input 5 numbers seperated by a space: ");
	scanf("%d%d%d%d%d", &x[0], &x[1], &x[2], &x[3], &x[4]);
	
	
	
	for (int i=0; i<4; i++) {			//Checking every pair
		for (int j=i+1; j<5; j++){
			CoPrime(x[i], x[j]);
		}
	}
	
	return 0;
}

int gcd(int a, int b){
	int c;

		while (b!=0){				//Euclidean GCD algorithm
			c=b;
			b=a%b;
			a=c;
		}
		return c;

}

void CoPrime(int a, int b){
	if (gcd(a,b)==1) printf("%d and %d are coprimes.\n", a, b); //prints result
	return;
}
