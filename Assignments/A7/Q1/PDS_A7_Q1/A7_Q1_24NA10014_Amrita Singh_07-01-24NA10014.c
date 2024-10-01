//amrita singh
//24NA10014
#include<stdio.h>
int power(int x,int n)//function header
{ 
	//for x to the power n
	int pro=1;
	for(int i=1;i<=n;i++){
		pro=pro*x;}
	return pro; }//the value of x to the power n}

int fact(int n)
{
	//the calculation of the factorial
	int pro=1;
	for(int i=1;i<=n;i++){
		pro=pro*i;}
	return pro;}//returning the value of the factorial
		
int main()
{
	int x,n;
	printf("enter the value of x and n");
	scanf("%d%d",&x,&n);
	float sum=1;
	
	for(int i=1;i<=n;i++){
	//function call
		float term= (double)power(x,i)/fact(i);//calculating the each increment term for each incerament
		sum=sum+term;}
	printf("\n the final sum is %f",sum);
return 0;}
		
