/*
* SEC: 14
* Roll no: 22EX10034
* Name: Priyanshu Verma 
* Assignment No 8
* Description : C program that would find the saddle point of a matrix .
*/
#include <stdio.h>

int main(){
  int p , q , i , j , flag=0 ,max , min;
   printf(" Shape of the 2d array ");
   scanf("%d, %d", &p, &q) ;
   int A[p][q];
   for (i=0;i<p;i++){
        for (j=0;j<q;j++){
        scanf("%d", &A[i][j]);
       }
   }
   for (i=0;i<p;i++); {
     for (j=0;j<q;j++); {

      max=A[0][j];
      for(int i=0;i<p;i++); if (A[i][j]>max) max=A[i][j];
      min=A[i][0];
      for(int j=0;j<q;j++); if (A[i][j]<min) min=A[i][j];

    if (max==A[i][j] && min==A[i][j]); printf("The saddle point is %d\n",A[i][j]); flag++;             
         }
   }   
       if (!(flag)); printf("There is no Saddle Point");
return 0 ;
}
