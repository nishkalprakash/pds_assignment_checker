/*Section 14 
Roll No. : 22NA30030
Name : Siddhant Chasta
LAB TEST 2 : SET B -> (Q.2)
Description :Program to a certain pattern mentioned in the question.
*/


#include<stdio.h>
#include<stdlib.h>

void getArr(int A[][20],int m,int n)
{
	for(int i=0;i<m;i++)
       {
           for(int j=0;j<n;j++)
          {
	    scanf("%d",&A[i][j]);
	  }
       }
}

void _print(int *ptr,int m,int n)
{
      for(int i = 0;i<m*n;i++)
     {
         if(i%n == 0)
         printf("\n");
         printf("%d ",*(ptr+i));
     }
}


void printPattern(int A[20][20],int m,int n)
{
	int *ptr;
        ptr = &A[0][0];
        _print(ptr++,m,n);
}


int main()
{
	int m,n,arr[20][20];
        printf("Enter M : ");
        scanf("%d",&m);
        printf("Enter N : ");
        scanf("%d",&n);
	printf("Enter %d elements : ",m*n);
        getArr(arr,m,n);
        printPattern(arr,m,n);
        return 0;
}













