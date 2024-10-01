#include <stdio.h>
int fact(int); 
/*Function prototypes beacuse I have declared the functions after main*/
int power(int, int);
int main()     
{
	int x, i, n, t;
	float sum=0;
	printf("\nPlease enter the value of x:");  
	/*Taking the value of x and n*/
	scanf("%d", &x);
	printf("\nPlease enter the value of n(number of terms):");
	scanf("%d", &n);
	t=n-1; 
	/*explicitly declaring t beacuse the first term of the sum is later being added in the printf explicitly.*/
	if(n<0 || n>10) printf("The value of n should be in the domain [0,10]\n");  
	/*Making sure that the value of n<=10*/
	else {
		if(n!=1) for(i=1; i<=t; i++)  
		/*Calculating the sum of the series*/
			{
				sum = sum + (float)power(x,i)/fact(i); 
				/*Calling the functions power and factorial.*/
			}
			printf("%f", sum+1); 
			/*Printing the sum*/
	     }
	return 0;
}
int fact(int a) 
{
	int i, fact=1; 
	for(i=1; i<=a; i++)  
	/*Loop to calculate factorial. here a=i*/
	{
		fact = fact*i;
	}
	return fact; 
	/*Returning the value of !i*/
}
int power(int b, int c) 
{
	int i, ans=b;  
	/*Loop for the power of x. here b=x and c=i*/
	for(i=1; i<c; i++)  
	{
		ans = ans*b;
	}
	return ans; 
	/*Returning the value of x power i*/
}
