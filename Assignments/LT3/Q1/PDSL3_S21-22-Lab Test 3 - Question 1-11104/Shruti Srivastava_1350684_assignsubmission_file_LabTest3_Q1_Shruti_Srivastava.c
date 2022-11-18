/* Shruti Srivastava
   21EE30025
   Electrical Engg Dual Degree
   Codeblocks
   Windows 10 */

#include<stdio.h>
int main()
{
   int r,c;
   int **ar;
   printf("Enter the number of rows\n");
   scanf("%d",&r);

   ar = (int**)malloc(r*sizeof(int));
   int i,j;

   printf("Enter the coloumn size");
   scanf("%d",&c);

   for(i=0; i<r; i++)
    {
       ar[i]= (int*)malloc(c*sizeof(int));
    }

    printf("Enter the image matix");

   for(i=0; i<r; i++)
    { for(j=0; j<c; j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }


   }
