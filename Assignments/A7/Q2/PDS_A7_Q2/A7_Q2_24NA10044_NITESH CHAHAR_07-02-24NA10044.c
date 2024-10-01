//created by : Nitesh Chahar
//roll no. : 24NA10044
#include<stdio.h>

//function to find gcd of two numbers
int gcd(int a,int b){
	while(a==0|| b==0)
	{
		if(a>b)
		a=a%b;
		else b=b%a;
	}
	if (a==0)
	return b;
	else return a;
}
//function for CoPrime numbers
void CoPrime(int a,int b){
	if(gcd(a,b)==1)
		printf("a and b are Co-Prime");
	else {printf("No Co-Prime found");}	
}


//function to find pair of  numbers
void pair(int a[]){

}

int main()
{
	int arr[5];
	for(int i=0; i<5;i++)
	scanf("%d",&arr[i]);
}
