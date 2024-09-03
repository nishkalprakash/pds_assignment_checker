//Code creator Shatakshi Shukla
//Program to print distinct elements of array
//Roll no. 24NA10067
#define size 100
#include <stdio.h>

int main(){
int A[size] , n , flag =1;
int p =0;
printf("Enter the no. of elements in  array : ");
scanf("%d",&n);
getchar();
printf("Enter the elements of array: \n");
for(int i = 0; i<n ;i++)
{
   scanf("%d" , &A[i]);
   }
   printf ("Duplicates : \n" );
   for(int i=0; i<n ;i++)
   {
     for(int j= i+1 ; j<n ; j++)      //to check similar terms
     {
       if(A[i] == A[j])
       {
         flag++;    //COUNTER VARIABLE TO KEEP A CHECK ON HOW MANY TIMES IT REPEATS
         A[j] = -899 ; //substituting indistinct entries to other value 
         }
         }
         if(flag > 1)
       {
        printf ("%d(%d) /n" ,A[i] ,flag);
        }
        flag = 1;
         }
         printf("Original Array: \n ");  
         for(int i = 0 ; i<n ; i++)
         {
           if(A[i] == -899)
           continue;
           printf("%d",A[i]);
       
        }
        }
     
       
          
