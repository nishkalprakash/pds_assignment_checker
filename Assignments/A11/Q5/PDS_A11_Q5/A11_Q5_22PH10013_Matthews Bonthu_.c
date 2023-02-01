//Name BONTHU MATTHEWS
//Roll No: 22PH10013
// Assignment 11
#include <stdio.h>
#include <stdlib.h>

int main ( )
{
    int row,col;
    printf("enter the number of rows and coloums ");
    scanf("%d",&row);
    scanf("%d",&col);
    int *arr=(int *)malloc(row*col*sizeof(int));
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("element arr[%d][%d]: ",i,j);
            scanf("%d",&*(arr+i*col+j));
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",*(arr+i*col+j));
        }
        printf("\n\n");
    }
    free(arr);
    int *arr1=(int *)malloc(row*col*sizeof(int));
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&*(arr1+i*col+j));
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("element arr1[%d][%d]: ",i,j);
            printf("%d ",*(arr1+i*col+j));
        }
        printf("\n\n");
    }
     free(arr1);
     int sum=0;
     int k;
         int *arr2=(int *)malloc(row*col*sizeof(int));

     for(i=0;i<row;i++)
     {
         for(j=0;j<col;j++)
         {
             for(k=0;k<row;k++)
             {
              sum=sum+(*(arr+i*col+k))*(*(arr1+k*col+j));
             }
             *(arr2+i*col+k)=sum;
             printf("%d ",*(arr2+i*col+k));
             sum=0;
         }
     }
     return 0;
}