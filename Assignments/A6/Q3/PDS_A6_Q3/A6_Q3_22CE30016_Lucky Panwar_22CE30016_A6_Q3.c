/* NAME - LUCKY PANWAR
   ROLL NO. - 22CE30016
   DATE - 28 DECEMBER , 2022
   ASSIGNMENT - 6 
   QUESTION NO. - 3
   DECRIPTION -   */


#include<stdio.h>


int * Merge(int a, int b, int *X, int *Y)
  {
    




                }


int main()
{
  int n1,n2;
  int array1[n1];
  int array2[n2];

  printf("Enter the size of array1\n");
  scanf("%d",&n1);
  int i = 0;
	  while(i<=n1){
	  printf("Enter the values of array1 variables\n");
	  scanf("%d",&array1[i]);
	  i++;
	    }

  printf("Enter the size of array1\n");
  scanf("%d",&n1);
  int j = 0;
	  while(j<=n2){
	  printf("Enter the values of array2 variables\n");
	  scanf("%d",&array2[j]);
	  j++;
	   }
  
  int * A, * B, * C;
 
  A = array1[n1] ;
  B = array2[n2] ; 
 
  printf("%d\n", A);
  printf("%d\n", B);
 
  C =  * Merge(n1, n2,A,B);

	printf("%d\n", C);	

	return ;
}
