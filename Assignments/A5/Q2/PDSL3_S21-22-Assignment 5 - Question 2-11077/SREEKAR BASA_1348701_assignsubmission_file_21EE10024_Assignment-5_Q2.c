/*
Name        : Basa Sreekar
Roll no.    : 21EE10024
Department : Electrical Engineering
package     : code blocks
Assignment 5
Question : 2
*/

#include <stdio.h>
#include <stdlib.h>

int max_arr(int A[],int n)  // Function to know the maximum integer in the array //
{
    int i,max;
    max = A[0];
    for(i=0;i<n;i++)
    {
        if(A[i]> max) max = A[i];
    }
    return max;
}

int dyn_size(int A[],int i,int n,int size)   // Function to know the size of each bin to allocate dynamically //
{
    int j,k=0;
    for(j=0;j<n;j++)
    {
        if( A[j]>=(1+(i*size)) && A[j]<=((i+1)*size)) k++;
    }
    return k;
}

void dyn_fill(int A[],int k[],int n,int i,int p[][n],int size)  // Function to allocate the elements in p[][] 2-d array dynamically //
{
    int j,m,t;
    for(j=0;j<k[i];j=j)
    {
        for(t=0;t<n;t++)
        {
          if( A[t]>=(1+(i*size)) || A[t]<=((i+1)*size))
          {
            p[i][j] = A[t];
            j++;
          }
        }
    }
}

int main()
{
    int n,x,i,j,b;
    int size ;
    int m;
    printf(" Enter the number of array elements : "); // Reading variables,array elements
    scanf("%d",&n);
    int A[n] ;
    printf(" Enter the array elements : \n");
    for(i=0;i<n;i++)
    {
        printf("Element-%d : ",i+1);
        scanf("%d",&A[i]);
    }

    m = max_arr(A,n);  // function call and getting value of max integer in array //
    printf(" Max int = %d \n",m);

    printf(" Enter the number of bins : "); //no.of rows //
    scanf("%d",&b);  // b = no.of bins//
    int k[b];        //array k stores no.of elements in each bin to allocate space dynamically//

    size = (m/b);         // Getting the maximum size/interval of a bin //
    if((m%b)!=0) size++;
    printf(" Range of each bin = %d \n",size);

    int **p = (int **) malloc(b*sizeof(int));
    for(i=0;i<b;i++)
    {
        k[i] = dyn_size(A,i,n,size);
        p[i] = (int *) malloc(k[i]*sizeof(int));
        dyn_fill(A,k,n,i,p,size);
    }              // Calling the function dyn_fill & filling the elements of A in 2-d array P //

    printf(" Output... ");         // Final printing statements //
    for(i=0;i<b;i++)
    {
        printf(" bin%d -> ",i+1); // Bin no. //
        for(j=0;j<k[i];j++)
        {
            printf("%d",p[i][j]);  // values //
        }
        printf("  , Number of elements in bin%d = %d",i+1,k[i]);  // No.of elements in bin //
    }
    return 0;


}
