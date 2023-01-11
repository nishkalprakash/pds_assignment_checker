/*
Section 14 
Roll No. : 22NA30030
Name : Siddhant Chasta 
Assignment No. : 8
Description :A program to fid the saddle point of a matrix.
*/

#include<stdio.h>

int main()
{
   int n,i,j; // n is number of elements in one row 
    printf("Enter the number of elements in one row: ");// in square array elements of row=column
    scanf("%d",&n);
    int column[n][n];
    printf("Shape of 2D array : %d,%d",n,n);
    for(i=0;i<n;i++)
       for(j=0;j<n;j++)
    {
        scanf("%d",&column[i][j]);
    }
    int M[n],m[n];
     int max=0,min=100;
    
      for(i=0;i<n;i++)
        {for(j=0;j<n;j++)
           {if(column[i][j]>max)
              max = column[i][j];
           }
	M[j]=max;
	}
    for(i=0;i<n;i++)
        {for(j=0;j<n;j++)
           {if(column[i][j]<min)
              min = column[i][j];
           }
	m[i]=min;}
int check=0,saddle;
 for(i=0;i<n;i++)
        {for(j=0;j<n;j++)
{if(M[j]==m[i])
check=1;
saddle=M[j];}}
if(check==1)
printf("Saddle point is %d",saddle);
else printf("There is no saddle point in this 2D array");
     
     
    


return 0;
} 










    
