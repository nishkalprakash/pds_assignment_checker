// Name : Bhoomik Modi
// Roll_no. :23PH10013
#include<stdio.h>
#include<stdlib.h>
int main(){
	int range;
	float sum=0;
	int temp_cgpa[10];
	printf("Enter range : ");
	scanf("%d",&range);
	unsigned int roll[10];
	float cgpa[10];
	printf("Enter the roll and cgpa(please a leave a blank between two )\n");
	for (int i=0;i<range;i++)
	{
	 scanf("%d%f",&roll[i],&cgpa[i]);
	}
	printf("Roll_No.\t\tCGPA\n");
	for (int i=0;i<range;i++)
	{
		sum+=cgpa[i];
		printf("%d\t\t0.2%f\n",roll[i],cgpa[i]);
	}
	for (int i=0;i<range;i++)
	{
        	temp_cgpa[i]=cgpa[i]*100;
	}
	int f=0;
	printf("Average CGPA = %.2f)",sum/range);
	printf("\nStudents with same Cgpa\n");
	printf("Roll_No.\t\tCGPA\n");
	int z=0;
	for (int i=0;i<range;i++)
	{z= f=0;
		if(i!=0){
			for(int k=i-1;k>=0;k--){
				if (temp_cgpa[k]==cgpa[i])
				f++;}
			}
		if (f==0){
		for (int j=i+1;j<range;j++)
		{
			if(temp_cgpa[i]==temp_cgpa[j])
			{
				if(z==0)
				printf(" %d\t%0.2f\n",roll[i],cgpa[i]);
				printf(" %d\t%0.2f\n",roll[j],cgpa[j]);
				++z;
			}
		}
	}
}}
