#include<stdio.h>
#include<stdlib.h>
#include<math.h>

// Sumanta Kumar Behera
// 22IM10039, Sec-14
//first question of test
 void f(int *p,int x,int n)
  {
     if(x==0)
       for(int j=n-1; j>=0; j--)
       {
          printf("%d ", *(p+ (n*x+j)));
       } 
 
     if(x != 0)
      {
       for(int j=n-1; j>=0; j--)
       {
          printf("%d ", *(p+ (n*x+j)));
       }
          printf("\n");

        f(p, (x-1), n);
      }
  }

int main()
{
   int m, n;
   printf("Enter M : ");
   scanf("%d", &m);
   printf("Enter N : ");
   scanf("%d", &n);
   int A[m][n];
   printf("Enter %d elements : ", m*n);
   for(int i=0; i<m; i++)
   {
    for(int j=0; j<n; j++)
   {
   scanf("%d", &A[i][j]);
   }
   }


    int * p;
    p = &A[0][0];
   f(p, m-1, n);
   return 0;
}
