#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
int A[5], a[9],i;
int gcd(int a, int b){
	int x, y;
	x= a%b;
	y = a%x;
	return(y);
}

void pair(int a[]){
int i,x , y,o;
for (i = 1;i<5; i++){
	x= a[i];
	for (o = 1;o<5; o++) {
	y= a[o];

	}
}
	return(x,y);
	

}

void coprime(int a , int b){
	int x = gcd(a,b);
	if (x==0) printf("The numbers %d and %d are co-prime", a,b);
	else printf("The numbers %d and %d are not co-prime", a,b);
}


for(i=0;i<5;i++){
	printf("Enter the number: ");
	scanf("%d", &A[i]);
}

a[]= pair(A[]);
for(i=0;i<9;i++)
{
printf("%d ", a[i]);
}
printf("\n");
return 0;
}
