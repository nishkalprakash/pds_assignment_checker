/* Shruti Srivastava
   21EE30025
   Electrical Engg Dual Degree
   CodeBlocks
   Windows 10
   Section 03 */

#include<stdio.h>
#include<stdlib.h>
#define COL 100

int main()
{
  int row,col,i,j;
  printf("\nEnter the number of rows\n"); // Taking row as input
  scanf("%d",&row);

  printf("\nEnter the number of coloumns\n"); // Taking coloumn number as input
  scanf("%d",&col);

  int **ar = (int **)malloc(row*sizeof(int *)); // Allocating the array

  for(i=0; i<row; i++)
   {
     ar[i]= (int *)malloc(col*sizeof(int));
  }

  printf("\nEnter the Array Elements\n"); // Taking input in the array
  for(i=0; i<row; i++)
   { for(j=0; j<col; j++)
      {
         scanf("%d",&ar[i][j]);
      }
   }


 int p = Saddle(ar,row,col); // Calling the Saddle function
  if(p == 0) //Condition for Saddle point
   {
     printf("\nThe above array do not contain any saddle point\n");
    }
  else
  {
     printf("\nThe Saddle point is %d",p);
  }

}

int Saddle(int A[][COL],int r,int c)
{
   int r_max, colpos,rowpos,r_min;
   int i,j;

   for(i=0; i<r; i++) // Checking for condition if a number is maximum in row but minimum in coloumn
   { r_max = A[i][0];
     colpos= 0;
     rowpos= i;
     for(j=1; j<c; j++)
       {
          if(A[i][j]>r_max)
            {
               r_max = A[i][j];
               colpos = j;
               rowpos = i;
            }

        }
        int p=0;

        for(p=0 ; p<r ; p++)
         {
           if(r_max > A[p][colpos])
             {
               break;

             }
         else if(p==r)
           {
            return (A[i][colpos]);
            }
         else
         {
            { r_min = A[i][0]; // checking for condition if a number is minimum in row but maximum in coloumn
              colpos= 0;
              rowpos= i;
              for(j=1; j<c; j++)
                {
                   if(r_min > A[i][j])
                      {
                        r_min = A[i][j];
                        colpos = j;
                        rowpos = i;
                      }

              }
          int k=0;
        for(k=0 ; k<r ; k++)
         {
           if(r_min < A[k][colpos])
             {
               break;
             }
         else if(k==r)
           {
             return (A[i][colpos]);
            }
         else
          {
            return (0);
          }
         } // end of for loop


           }
         }
      }
    } // end of for loop
}
