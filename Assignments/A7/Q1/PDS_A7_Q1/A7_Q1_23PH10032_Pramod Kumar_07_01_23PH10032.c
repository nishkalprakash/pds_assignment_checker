//name :pramod kumar
//roll no:23PH10032

#include<stdio.h>
#include<stdlib.h>
void findmax(int A[][20],int m,int n)
   {
     
     
int main()
 {
   int data[20][20],m,n;
   printf("enter the value of m in 2<m<20 and n in 2<n<20:\n");
   scanf("%d%d",&m,&n);
   for(int i=0;i<m;i++)
     {
       for(int j=0;j<n;j++)
	 {
	   data[i][j]=rand()%11;
	 }
     }
   printf("matrix is:\n");
   for(int i=0;i<m;i++)
     {
       for(int j=0;j<n;j++)
	 printf("%d ",data[i][j]);
       printf("\n");
     }

 }
