/*
   Section 14 
   Roll No : 22CE10085
   Name : Tiyas Roy Choudhury
   Lab Test 1
   Description : Program  to print the number of armstrong numbers
*/
#include<stdio.h>
#include<math.h>

int main()

{
	long int N;int d; long int s=0;int c=0; long int i;int d1;
	printf("Input an integer less than  1000000");//Takes Input from user
	scanf("%ld",&N);
	long int k=N;
	if(N>=1000000||N<=0)
	{
		printf("Invalid Input");
	}
else if (0<N && N<1000000)
{
	
	
	for(i=1;i<=N;i++)
{
   long int q =i;
 long int j=i;
		while(q!=0)//Calculates no of digits
{

		d=q%10;
		q=q/10;
		c++;
}

		while(j!=0)
{
			d1=j%10;
			s=s+pow(d1,c);//prints sum;
			j=j/10;
		}
		if(s==i)
{
			printf("%ld",i);
		}
		else
{
			continue;
		}
	}
}
		return 0;
	}


        
		


	


