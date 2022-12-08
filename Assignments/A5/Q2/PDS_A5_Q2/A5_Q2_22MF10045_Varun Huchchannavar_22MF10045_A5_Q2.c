/* Varun Huchchannavar 
	Section 14
	22MF10045 */


#include<stdio.h>
#include<stdlib.h>

  void CoPrime (int a, int b)
{
	int temp;
	if(a>b)
	{
	temp=a; a=b ; b=temp;
}
	while(b%a !=0)
	{
	temp=b%a;
	b=a;
	a=temp;
	}
	if(a==1)
	printf("The numbers are co-prime");
	
	else
	printf("The numbers are not co-prime");
	}
	int main()
{
	int array[5];
	int i;
	for(i=0;i<5;i++)
	{
	printf("Enter the value of the number");
	scanf("%d",&array[i]);
	}
	
	int count;
	int j;
	for(count=0;count<5;count++)
	{
	    for(j=count+1;j<5;j++)
	{    CoPrime(array[count],array[j]); 
	}
	}
	return 0;
} 

	
		
	
	

	

