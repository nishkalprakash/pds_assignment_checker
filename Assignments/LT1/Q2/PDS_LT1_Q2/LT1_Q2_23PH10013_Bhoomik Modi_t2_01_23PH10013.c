// Name : Bhoomik Modi
// Roll No.:23PH10013
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int a1[10],a2[10],a3[10],a4[10],a5[20],a6[20],a7[40];
	for (int i=0;i<10;i++)
	{
		a1[i]=rand()%21+10;
	}
	for (int i=0;i<10;i++)
			printf("%d\n",a1[i]);
	printf("\n");
	for (int i=0;i<10;i++)
			
       printf("\n");
	for (int i=0;i<10;i++)
	{
		a2[i]=rand()%31+30;
	}
	for (int i=0;i<10;i++)
	printf("%d\n",a2[i]);
	for (int i=0;i<10;i++)
	{
		a3[i]=rand()%31+60;
	}
	for (int i=0;i<10;i++)
	printf("%d\n",a3[i]);
	for (int i=0;i<10;i++)
	{
		a4[i]=rand()%31+90;
	}
	for (int i=0;i<10;i++)
	printf("%d\n",a4[i]);

	for (int i=0;i<10;i++)
	{
		a5[2*i+1]=a2[i];
		a5[i*2]=a1[i];
	}
	
	for (int i=9,j=0,k=0;i>=0;i--,j+=2,k++)
	{
	a6[j]=a3[i];
	a6[j+1]=a4[k];
	}
	printf("\n");
	for (int i=0;i<20;i++)
	{
	printf("%d",a5[i]);
	}
	printf("\n");
	for (int i=0;i<20;i++)
	{
	printf("%d",a6[i]);
	}
	printf("\n");
	for(int j=0,k=19;j<=3;j+=2,k-=2)
	{
		a7[j]=a5[k];
		a7[39-j]=a6[k];
	}
	for (int i=0;i<40;i++)
	{
	printf("%d\n",a7[i]);
	}
	}
	
	
