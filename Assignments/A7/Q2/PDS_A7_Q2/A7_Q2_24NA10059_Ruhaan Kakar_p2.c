#include<stdio.h>

/*function for printing the final result*/
void coprime(int a,int b)
	{
	int n = 4;
 	printf("%d and %d are Co-Prime\n",a,b);
 
 }

/*function for finding out gcd and checking for coprime numbers*/
int gcd(int a,int b,int n)
{
	int x = a, y = b;
	int temp;
	while(b != 0){
			  temp =b;
			  b = a%b;
			  a = temp;
			  }
			  if(a == 1)
			  	coprime(x,y);
	return a;
}

/*function for making pairs of a & b and sending the same to gcd for checking*/
void pair(int A[],int n)
{
	int a,b,p,q;
	for (p=0;p<4;p++){
		for(q=p+1;q<=4;q++){
				a = A[p];
				b = A[q];
				gcd(a,b,n);		
			}
		}		
}

int main()
{
int n = 5,i;
int A[n];
for(i=0;i<5;i++)
	scanf("%d",&A[i]);
pair(A, n);
return 0;}

