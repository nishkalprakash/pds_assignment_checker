/* Roll no. 22ME10083
   NAME - SOUVIK SARKAR
   LABTEST 1(SET B)
   Q.1
   */
// Programme to check the armstrong number in the interval [1,N]
#include<stdio.h>
#include<math.h>// for using powers
//Creating a function arm
void arm( int m)
{	//varriables declaration
	int d=0,q,rem,sum=0,i,j;
	q=m;//assigining value 
	//logic
	for(i=1;q!=0;i++)
	{
		q=q/10;
		d++;//d is the total digit of the number
	}
	q=m;// again assigning the value

	for(j=1;q!=0;j++)
	{
		rem=q%10;
		sum = sum + pow(rem,d);
		q=q/10;
	}
	//result
	if(sum==m)
		printf("%d ",m);		
}

int main()
{
	//Varriables declaration within main function
	int k,N;
	// Taking inputs
	printf("Enter your number:\n");
	scanf("%d",&N);
	if(N<=0)
		printf("Invalid Input\n");
	//logic
	for(k=1;k<=N;k++)
	{
		arm(k);//Output
	}
	return 0;
}
