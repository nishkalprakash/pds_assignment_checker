#include<stdio.h>
# define COL 10
# define ROW 10
//funtion for saddle point
void sadpoint(int num , int tum, int a[COL][ROW], int i, int j )
{  int sm, p, large, f = 1;

  printf("Elements of the 2D array is:");
   for (i = 0; i < num; i++) {
       printf("\n");
       for (j = 0; j < tum; j++) {
           printf("%d ", a[i][j]);
       }
   }


   for (i = 0; i < num; i++) {
       p = 0;
       sm = a[i][0];
       for (j = 0; j < tum; j++) {
           if (sm > a[i][j]) {
               sm = a[i][j];
               p = j;
           }
       }

       large = 0;
       for (j = 0; j < tum; j++) {
           if (large < a[j][p]) {
               large = a[j][p];
           }
       }
       if (sm == large) {
           printf("\nValue of saddle point:%d", sm);
           f = 0;
       }
   }

   if (f > 0)
       printf("\nNo saddle point");

   return 0;
}
int main(){int a[COL][ROW];
    int i, j, num, tum;
//getting the 2 d array
    printf("Enter size of column:");
   scanf("%d", & num);
   printf("enter size of row");
   scanf("%d",&tum);


   printf("Enter 2D array elements:");
   for (i = 0; i < num; i++) {
       for (j = 0; j < tum; j++) {
           scanf("%d", & a[i][j]);
           //calling the function
        sadpoint(num, tum,a[COL][ROW],i,j);
}
   }
}
