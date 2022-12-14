/* 
Section 14
Roll No:22CE10045
Name : Aayush Ujwal Mohata
Question No:2
Discription :To find maximum and second maximum in set of positive numbers

*/

#include<stdio.h>
int main()
{
	int max_1,max_2,a[30],i,flag=1,t=1;
	printf("Enter the numbers");
	for(i=0;i<30;i++)
		{
		scanf("%d",&a[i]);
		if(a[i]=='\n')
			t=1;
		if(a[i]<0)
			{
			flag=0;
			}
		}
	if(t==1)
	{
	if(flag==0)
		{
		printf("<program terminates>");
		}
	else
		{
		max_1=a[0];
		for(i=1;i<30;i++)
			{
			
			if(a[i]>max_1)	
				{
				max_2=max_1;
				max_1=a[i];
				}
			else
				{
				if(a[i]>max_2)
					max_2=a[i];
				}
			}
		}
	}	
	printf("%d",max_1);
	printf("%d",max_2);
	return 0;
}
		
			
						
		
	
	
