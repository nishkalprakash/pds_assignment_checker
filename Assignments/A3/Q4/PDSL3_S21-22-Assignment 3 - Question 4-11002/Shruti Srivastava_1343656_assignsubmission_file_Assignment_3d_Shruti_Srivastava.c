/* Shruti Srivastava
   21EE30025
   Electrical Engg. Dual Degree
   Code Blocks
   Windows 10 */

#include<stdio.h>
int linear_search(int ar[],int x);
int bin_search(int ar[],int x,int n);
int main()
{
   int n,i,j,x,k=0,c,d,r=0,l=0;
   printf("Enter the number of elements\n");
   scanf("%d",&n);
   int A[n],B[n];
   printf("Enter the elements in sorted order\n");
   for(i=0; i<n; i++)
   {
    scanf("%d",&A[i]);
   }
   while(k<n)
   {
       B[k]=A[k];
       k++;
   }
   for(i=0; i<n; i++)
    {for(j=0; j<n-i-1; j++)
     {if(B[j]>B[j+1])
        { int t= B[j];
          B[j]= B[j+1];
          B[j+1]=t;
        }
     }
   }
   while(r<n)
   {if(A[r]!=B[r])
      {
        l++;
      }
      r++;
    }

   if(l==n)
   { printf("Not sorted.Enter again\n");
    }
    else{
   printf("Enter the key\n");
   scanf("%d",&x);
   printf("Choose the algorithm: Type 1 for linear search and 2 for binary search\n");
   scanf("%d",&d);

   if(d==1)
    { printf("Executing the linear search algrithm\n");
      c = linear_search(A,x);
      if(c!= -1)
      {
       printf("Element %d has been found at the index %d",x,c);
       }
       else{
         printf("Unsuccesful search");
         }
    }
    else{
        printf("Executing the binary search algorithm\n");
        c = bin_search(A,x,n);
        if(c!= -1)
        {
            printf("Element %d has been found at the index %d",x,c);
        }
        else{
            printf("Unsuccessful search");
        }
       }
    }
       return 0;

}
int linear_search(int ar[],int x)
{  int i;

   for(i=0; i<20 ; i++)
   { if(ar[i]== x)
      {
       return (i);
       }
   }
   return (-1);
}
int bin_search(int ar[],int x,int n)
{
    int i,low,high,middle;
    low= ar[0];
    high = ar[n-1];

    while(high>=low)
    {
        middle = (low + high)/2;
        if(x== ar[middle])
        {
            return middle;
        }
        else if(x<ar[middle])
        {
            high = middle -1;
        }
        else{
            low = middle + 1;
        }
    }
    if(x==ar[middle])
    {
        return (middle);
    }
    else {
         return -1;
    }
}
