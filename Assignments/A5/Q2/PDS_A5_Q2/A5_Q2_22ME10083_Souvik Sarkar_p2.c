/*roll no. 22ME10083
Assignment 5
sec 14*/
#include<stdio.h> 
#include<math.h>
// Creating Coprime funcn
void Coprime(int a, int b){
	int f1=0;
	for(int i=2;j<=sqrt(a);j++){
		if(a%j==0)
			f1++;
	}
	if(f1==0)
		printf("a is prime");

}
	
	

// Creating GCD funcn 
int gcd(int a,int b){
	int  A, B, temp;
	scanf (“%d %d”, &A, &B);
	if  (A > B)  { temp = A;  A = B;  B = temp; }
		while ((B % A) != 0) 
				{temp = B % A;B = A;A = temp;}
		printf (“The GCD is %d”, A);

}	

