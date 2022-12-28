/*Name- KRISHNA GUPTA
  Roll n0. - 22GG10024
  Section - 14
  Assignment - 6
  Question - MERGING AND SORTING THE ARRAYS
*/
#include <stdio.h>
int Merge(int size1, int size2, int *ptr1,int *ptr2);
int main()
{
  int n1,n2,i;

  printf("Enter the size of 1st array :");
  scanf("%d",&n1);
  int A[n1];
  printf("Enter values :");                                  // TAKING FIRST ARRAY
   for (i=0;i<n1;i++)
      {  
        scanf("%d",&A[i]);
      }

       printf("Enter the size of 2nd array :");              // TAKING SECOND ARRAY
      scanf("%d",&n2);
       int B[n2];
      printf("Enter values :");
       for (i=0;i<n2;i++)
         {
           scanf("%d",&B[i]);
         }
  
        printf("A = ");
  
        for (i=0;i<n1;i++)                          
         {
          printf("%d ",A[i]);                       //// PRINING FIRST ARRAY
          }
         printf("\n");

          printf("B = ");

        for (i=0;i<n2;i++)              
         {
          printf("%d ",B[i]);                       // PRINING SECOND ARRAY
          }
          printf("\n");
  
   Merge (n1,n2,A,B);
return 0;
}
      int Merge(int size1, int size2, int *ptr1,int *ptr2)          // MERGING THE ARRAYS 
        {

        int C[100];
        int i;
         for (i=0;i<size1;i++)
           {
             C[i] = *(ptr1+i);
           }  
        for (i=size1;i<size1+size2;i++)
           {
             C[i] = *(ptr2+(i-size1));
           }
            printf("C = ");
        for (i=0;i<size1+size2;i++)
          {
          printf("%d ",C[i]);
           }

}
