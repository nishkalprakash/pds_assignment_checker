/*
Section 14
Name: Nived Shah
Roll No: 22CS10049
Assignment No. : 8
Description: Finding saddle point of a 2D array
*/

#include <stdio.h>

int main()
{
	int rn, cn;
	printf("Shape of the 2D array: ");
	scanf("%d", &rn);
	scanf("%d", &cn);

	int a[rn][cn];

	for(int i=0; i<rn; i++)
		for(int j=0; j<cn; j++)
			scanf("%d", &a[i][j]);

	for(int i=0; i<rn; i++){
		printf("\n");
		for(int j=0; j<cn; j++)
			printf("%d ", a[i][j]);
	}
	printf("\n");

	int maxOfC[rn][cn], minOfC[rn][cn];

	for(int i=0; i<rn; i++)
		for(int j=0; j<cn; j++)
			maxOfC[i][j]=minOfC[i][j]=0;

	int max, min;
	
	for(int i=0; i<cn; i++){
		int t;
		max=a[0][i];
		for(int j=0; j<rn; j++){
			if(a[j][i]>max){
				max=a[j][i];
				t=j;
			}
		}
		maxOfC[t][i]=max;
	}

	for(int i=0; i<rn; i++){
		int t;
		min=a[i][0];
		for(int j=0; j<cn; j++){
			if(a[i][j]<min){
				min=a[i][j];
				t=j;
			}
		}
		minOfC[i][t]=min;
	}

	int flag=0;

	for(int i=0; i<rn; i++){
		for(int j=0; j<cn; j++){
			if(minOfC[i][j]==maxOfC[i][j] && minOfC[i][j]!=0 && maxOfC[i][j]!=0){
				printf("The saddle point is %d\n", a[i][j]);
				flag++;
			}
		}
	}
	if(flag==0)
		printf("There is no saddle point in this 2D array");

	return 0;
}