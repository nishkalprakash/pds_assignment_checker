/*
PRANJAL SINGH
Roll:21EC10051
Electronics and Electrical Communication engineering
codeblocks
Assignment class:6
*/
#include<stdio.h>
#include<stdlib.h>
int main() {


   //defining the function
   int b[ 10][10], i, j, rc;
   int sm, m, max, k = 1;
   int *ptr=malloc((rc)* sizeof(int));

   printf("Enter size of matrix:");
   scanf("%d", & rc);

   printf("Enter elements:");
   for (i = 0; i < rc; i++) {
       for (j = 0; j < rc; j++) {
           scanf("%d", & b[i][j]);
       }
   }

   printf("Elements of the matrix is:");
   for (i = 0; i < rc; i++) {
       printf("\n");
       for (j = 0; j < rc; j++) {
           printf("%d ", b[i][j]);
       }
   }
 //giving the execution to find the saddle point

   for (i = 0; i < rc; i++) {
       m = 0;
       sm = b[i][0];
       for (j = 0; j < rc; j++) {
           if (sm > b[i][j]) {
               sm = b[i][j];
               m = j;
           }
       }

       max = 0;
       for (j = 0; j < rc; j++) {
           if (max < b[j][m]) {
               max = b[j][m];
           }
       }
       if (sm == max) {
           printf("\n The saddle point:%d", sm);
           k= 0;
       }
   }

   if (k > 0)
       printf("\n There is no saddle point");

   return 0;
}

