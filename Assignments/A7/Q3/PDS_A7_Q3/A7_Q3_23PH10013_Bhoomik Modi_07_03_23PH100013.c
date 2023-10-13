// Name : Bhoomik Modi
// Roll : 23PH10013
#include <stdio.h>
#include<string.h>
#include <math.h>
#include<stdlib.h>
int DistThr1city(int dist[5][5]);
int dist2city (int dist[5][5]);
int main()
{
	int dist[5][5];
	// Entering the data
	for (int i=0;i<5;i++)
	{
		for (int j=i;j<5;j++)
			{
				if (i==j)
					dist[i][j]=0;
				else	
					{
						dist[i][j]=(rand()%980)+20;
						dist[j][i]=dist[i][j];
					}
				
				
			}
	}
	//printing the array
	for (int i=0;i<5;i++)
	{
		for (int j=0;j<5;j++)
			{
				printf("%d\t",dist[i][j]);
				if (dist[i][j]>150)
				dist[i][j]=-1;
			}
		printf("\n");
	}
	// printing the formatted array
	for (int i=0;i<5;i++)
	{
		for (int j=0;j<5;j++)
			{
				printf("%d\t",dist[i][j]);
			}
		printf("\n");
	}
	dist2city(dist);
	DistThr1city(dist);
	return 0;
}
int dist2city (int dist[5][5])
{	
	char s,t;
	printf("Enter the two cities(With out leaving space) :  \n");
	scanf("%c %c",&s,&t);
	if(dist[s-65][t-65]!=-1)
	printf("\nThe distance between %c and %c  is : %d \n",s,t,dist[s-65][t-65]);
	else
	printf("\nThe cities are not joined\n");
}
int DistThr1city(int dist[5][5])
{	
	char s,r;
	printf("Enter the two cities(With out leaving space) :  \n");
	char k;
	scanf("%c",&k);// To neutralize the line entered
	scanf("%c %c",&r,&s);
	int min=100000;
	char mi;
	for (int i=0;i<5;i++)
	{
		if(dist[r - 65][i]>0&&dist[i][s - 65]>0)// mins 65 to get the index position
			{
				printf("From %c to %c via %c  %d\n",r,s,65+i,dist[r-65][i]+dist[s-65][i]);
				if(dist[r-65][i]+dist[s-65][i]<min)
					{
					 min=dist[r-65][i]+dist[s-65][i];
					 mi=65+i;
					 }
			}
		else if((dist[r - 65][i]==-1||dist[i][s - 65]==-1)&&(dist[r - 65][i]!=0)&&(dist[i][s - 65]!=0))
			printf("From %c to %c via %c  is unrechable\n",r,s,65+i);
	}
	if(min==0|| min==100000)
	printf("From %c to %c via has no min\n",r,s);
	else
	printf("From %c to %c via %c the minimum distance is  %d\n",r,s,mi,min);
}

