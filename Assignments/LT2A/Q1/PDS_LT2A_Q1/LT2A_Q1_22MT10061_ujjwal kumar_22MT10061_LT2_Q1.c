#include<stdio.h>
#include<stdlib.h>













 int main()
{
  int m,n;
  printf("Enter the no. of rows: ");
  scanf("%d",&m);
  printf("Enter the no. of column: ");
  scanf("%d",&n);
   
  int a[m][n];



 for(int i=0;i<m;i++)
   
  {      
      
       for(int j=0;j<n;j++)
       {
          printf("enter the value of (%d,%d): ",i,j) ;
         scanf("%d",&a[i][j]);
        }
   }

  printf("printing the 2d array before change : \n");
 for(int i=0;i<m;i++)
  {
       for(int j=0;j<m;j++)
       { 
         printf("%d",a[i][j]);
        }
     printf("\n");
   }

  printf("printing the 2d array after change : \n");

 for(int i=m-1;i>=0;i--)
  {
       for(int j=n-1;j>=0;j--)
       { 
         printf("%d",a[i][j]);
        }
     printf("\n");
   }

   
  


   return 0;
}
