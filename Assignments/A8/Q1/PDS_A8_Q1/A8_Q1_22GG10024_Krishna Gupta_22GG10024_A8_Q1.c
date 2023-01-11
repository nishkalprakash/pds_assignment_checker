/*Name - Krishna Gupta
  Section - 14
  Roll no. - 22GG10024
  Assignment - taking row wise elements and printing them column wise */
#include <stdio.h>
int main()
{
  int n,ARR[100][100],c=0;
  printf("Number of elements in one row");   // taking elements as input row wise
  scanf("%d",&n);
  printf("Enter the elements :");
  for (int i=0;i<n;i++)
    {
       for (int j=0;j<n;j++)
         {
           scanf("%d",&ARR[i][j]);     
           c ++;
          }
    }
     

   for (int j=0;j<n;j++)     // printing the elements column wise
     {
      for (int i=0;i<n;i++)
      {
       printf("\n %d",ARR[i][j]);
      }
     }

 }
