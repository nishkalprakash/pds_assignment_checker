#include<stdio.h>

int main()
{
	int m,n,i,j,num1,num2,num3,num4,num5,num6;
	int a[m][n];
	printf("Enter the number of rows");
	scanf("%d",&m);
	printf("Enter the number of columns ");
	scanf("%d",&n);
  printf("Shape of 2-D Array is %d,%d",m,n);
printf("Enter the elements of 2-d array\n");

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

for(i=0;i<m-1;i++)
{   
     
for(j=0;j<n-1;j++)
{
if(a[i][j]>a[i+1][j]){
		num1=a[i];
		a[i][j]=a[i+1][j];
        a[i+1][j]=num1;
	}
 
}

}  
   

for(j=0;j<n-1;j++)
{
	if(a[0][j]<a[0][j+1]){
		num2=a[0][j];
		a[0][j]=a[0][j+1];
        a[0][j+1]=num2;
	}
}

if (a[i+1][0]== a[0][j+1]){
	printf("The saddle point is %d",a[i+1][0]);
}

 for(i=0;i<m;i++)
{
	if(a[i][1]>a[i+1][1]){
		num3=a[i][1];
		a[i][1]=a[i+1][1];
        a[i+1][1]=num3;
	}
}

for(j=0;j<n;j++)
{
	if(a[1][j]<a[1][j+1]){
		num4=a[1][j];
		a[1][j]=a[1][j+1];
        a[1][j+1]=num4;
	}
}

if (a[i+1][1]== a[1][j+1]){
	printf("The saddle point is %d",a[i+1][1]);
}

for(i=0;i<m;i++)
{
	if(a[i][2]>a[i+1][2]){
		num5=a[i][2];
		a[i][2]=a[i+1][2];
        a[i+1][2]=num5;
	}
}

for(j=0;j<n;j++)
{
	if(a[2][j]<a[2][j+1]){
		num6=a[2][j];
		a[2][j]=a[2][j+1];
        a[2][j+1]=num6;
	}
}

if (a[i+1][2]== a[2][j+1]){
	printf("The saddle point is %d",a[i+1][2]);
}


return 0;

}