// Name ; Bhoomik Modi
// Roll_No. : 23PH10013
#include<stdio.h>
#include<stdlib.h>
int main(){
	int range;
	int temp_age[26];
	int temp_mark[101];
	for (int i=0;i<26;i++)
	{
		temp_age[i]=0;
	}
	for (int i=0;i<101;i++)
	{
		temp_mark[i]=0;
	}
	printf("Enter the no. of data enteries to be done(<=20) : ");
	scanf("%d",&range);
	int roll[range-1];
	int age[range-1];
	int mark[range-1];
	for (int i=0;i<range;++i)
	{
		roll[i]=(rand()%1001)+1000;
		age[i]=(rand()%11)+15;
		mark[i]=(rand()%101);
	}
	
	// On the basis of Age
	printf("\nSorted on the basis of same age:\n");
	for (int i=0;i<range;i++)
	{
	if (temp_age[age[i]]==0)
	{
		for (int j=i+1;j<range;j++)
		{
			if (age[j]==age[i])
			{
			if (temp_age[age[i]]==0){
			printf("Roll : %d  Age : %d  Mark: %d\n",roll[i],age[i],mark[i]);}
			printf("Roll : %d  Age : %d  Mark: %d\n",roll[j],age[j],mark[j]);
			++temp_age[age[i]];
			}
		}
		
	}
	}	
	// On the basis of Marks
	printf("\nSorted on the basis of same Marks :\n");
	for (int i=0;i<range;i++)
	{
	if (temp_mark[mark[i]]==0)
	{
		for (int j=i+1;j<range;j++)
		{
			if (mark[j]==mark[i])
			{
			if (temp_mark[mark[i]]==0){
			printf("Roll : %d  Age : %d  Mark: %d\n",roll[i],age[i],mark[i]);}
			printf("Roll : %d  Age : %d  Mark: %d\n",roll[j],age[j],mark[j]);
			++temp_mark[mark[i]];
			}
		}
		
	}
	}	
	// On the basis of roll_no.
	printf("\nSorted on the basis of roll_no.:\n");
	for (int i=1000;i<=2000;++i)
	{
		for(int j=0;j<range;j++)
		{
			if (roll[j]==i)
			{
			printf("Roll : %d  Age : %d  Mark: %d\n",roll[j],age[j],mark[j]);
			}
		}
	}
	return(0);
	printf("\n");
}
	
	
