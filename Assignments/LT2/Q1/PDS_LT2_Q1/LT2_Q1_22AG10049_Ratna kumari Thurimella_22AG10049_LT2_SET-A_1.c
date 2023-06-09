#include<stdio.h>

 void printnumbers(int[],int n);
 int main()
 {
     int n;
     int arr[n];
     printnumbers(arr,n);
     return 0;

 }
 void printnumbers(int arr,int n)
 {
     for(int i=0;i<n;i++)
     {
        printf("\n%d",arr[i]);
     }
     printf("\n");
 }

