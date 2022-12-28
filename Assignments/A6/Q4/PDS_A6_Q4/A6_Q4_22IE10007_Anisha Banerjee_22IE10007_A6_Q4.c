/*
Section 14
Roll no - 22IE10007
Name - Anisha Banerjee
Assignment 5
Program to merge two arrays
*/
#include <stdio.h>
#include<stdlib.h>

     int*BuildSet(int*A,int n)
        {
          int i;
          printf("Enter the size of the set\n");
          scanf("%d",&n);
          printf("Enter the elements/n");
          for(i=0;i<n;i++)
             scanf("%d",&A[i]);
         }
 
     int SearchSet(int* A, int n, int x):
         {
            int i,flag=0;
           for(i=0;i<n;i++)
              {
                if(A[i]==x)
                  flag=1;
              }
         }
    int*Union (int *A, int a, int *B, int b, int *union_size){return;}

   int* Intersection (int *A, int a, int *B, int b, int *inter_size){return;}

int* Difference (int *A, int a, int *B, int b, int *diff_size){return;}
 void Print(int *A, int n) 
      {
        for (i=0;i<n;i++)
           printf("%d",A[i]);
        return;
      }
int main()
   {
     while(1)
        {
          int c;
          printf("Enter your choice");
          scanf("%d",&c);
          if(c=1)
            SearchSet(a);
        }
      return 0;
    }
