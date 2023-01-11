/*
section:14
roll no:22MI10013
name:animesh mishra
assignment no:8 
description:convert given roe into column major
*/
#include<stdio.h>
int main()
{
    int n;
    printf("enter number of elements in one row");
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
             for(int j=0;j<n;j++)
            {
                 scanf("%d" ,&arr[i][j]);
            }
    }
    for(int i=0;i<n;i++)
    {
         for(int j=0;j<n;j++)
         {
                printf("%d", arr[j][i]);
         }
    
   }
   return 0;
}
