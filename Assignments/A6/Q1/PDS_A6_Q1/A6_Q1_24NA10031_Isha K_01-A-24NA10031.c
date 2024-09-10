#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#define N 10
#define A 20
#define B 20

int main()
{
	int y,k,c,n,s,i,p,j,r,m,Bin_A[A],Bin_B[B],sum=0;
	float Filter[N];
	// Random number generator to compute y
	srand(42);
	int x = rand() % 100 + 1;
	printf("Random Number: %d\n", x);
	
	//Computing y for random value of x//
	for(int k=1;k<=x;k++)
	{
		s= pow(-1,k+1)*k*k/(2*k+1);
		sum+=s;
		}
	y = sum+ cos((x/2)*M_PI/180);
	printf("y= %d\n",y);
	//Values of Filter array
	for(c=0;c<N;c++)
	{	int p = rand() % 100 + 1;
		Filter[c]= p;}
	//Display Filter array
	printf("Filter: ");
	for(c=0;c<N;c++)
	{
		Filter[c]=x;
		printf("%f ",Filter[c]);}
	//Entering values in BIN_A.
	for(int i=0,sumf=0;i<A; i++)
	{
		for(c=0;c<N;c++){
		 for(int r=1;r<=c;r++){
		n= pow(-1,r+1)*r*r/(2*r+1);
		sumf+=n;
		}
		m = sumf + cos((x/2)*M_PI/180);
		
		if(y>m){
		Bin_A[i]=Filter[c];}}}
	//Entering values in BIN_B.
	for(int j=0,sumf=0;j<B; j++)
	{
		for(c=0;c<N;c++){
		 for(int r=1;r<=c;r++){
		n= pow(-1,r+1)*r*r/(2*r+1);
		sumf+=n;
		}
		m = sumf + cos((x/2)*M_PI/180);
		
		if(y<n){
		Bin_B[j]=Filter[c];}}}
	
	//Display Bin_A
	printf("\nBin_A: ");
	for(i=0;i<A;i++)
	{printf("%d\t",Bin_A[i]);}
	//Display Bin_B
	printf("\nBin_B: ");
	for(j=0;j<B;j++)
	{printf("%d\t",Bin_B[j]);}
	
	return 0;
	}
	
