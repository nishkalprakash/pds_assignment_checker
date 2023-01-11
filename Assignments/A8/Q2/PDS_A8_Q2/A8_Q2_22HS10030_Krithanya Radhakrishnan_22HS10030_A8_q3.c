/*
sec:14
Krithanya
22HS10030
assignment 8
desc:saddle point
*/
#include <stdio.h>
int a,maxi,mini;
int max(int arr[a][0])
{
maxi=arr[a][0];
if ((arr[a][1]>arr[a][0])&&(arr[a][1]>arr[a][2]))
	{
	maxi=arr[a][1];
	}
else if ((arr[a][2]>arr[a][0])&&(arr[a][2]>arr[a][1]))
	{
	maxi=arr[a][2];
	}
return maxi;
}

int min(int arr[0][a])
{
mini=arr[0][a];
if ((arr[1][a]<arr[0][a])&&(arr[1][a]>arr[2][a]))
	{
	mini=arr[1][a];
	}
else if ((arr[2][a]<arr[0][a])&&(arr[2][a]>arr[1][a]))
	{
	mini=arr[2][a];
	}
return mini;
}
int main()
{
int r,a,c,i,j,maxi,mini;
printf("enter no. of rows\n");
scanf("%d",&r);
printf("enter no. of columns\n");
scanf("%d",&c);
int arr[r][c];
printf("enter array elements\n");
for (i=0;i<r;i++)
   for (j=0;j<c;j++)
	scanf("%d",&arr[i][j]);

if (max(arr)==min (arr[0][0]))
{
printf("saddle point is %d",maxi);
}
else if (max(arr[1][0])==min (arr[0][1]))
{
printf("saddle point is %d",maxi);
}
else if (max(arr[2][0])==min (arr[0][2]))
{
printf("saddle point is %d",maxi);
}
else
{
printf("there is no saddle point");
}
return 0;

}

