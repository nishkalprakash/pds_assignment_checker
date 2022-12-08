#include<stdio.h>
void coprime(int a, int b){
	int p=a, q=b;
	int temp;
	if (a>b){
		temp=a; a=b; b= temp;
	}
	while((b%a)!=0){
		temp=b%a;
		b=a;
		a=temp;
	}
if(a==1)
	printf("%d and %d are Co-prime\n", p, q);
}



int gcd(int a, int b){
	int p=a, q=b;
	int t;
	if (a>b){
		t=a; a=b; b= t;
	}
	while((b%a)!=0){
		t=b%a;
		b=a;
		a=t;
	}
return(a);
}

int main(){
	printf("Enter the numbers of the array");
	int i, j;
	int A[5];
	for (i=0; i<5; i++)
		{
			scanf("%d", &A[i]);
		}
	int p;
	for(i=0; i<5; i++){
		for(j=(i+1); j<5; j++){
			coprime(A[i], A[j]);
			if (gcd(A[i], A[j])>1){
				p++;
			}
		}

	}
	if (p==10){
		printf("No Co-Prime found");
	}

	return 0;
}