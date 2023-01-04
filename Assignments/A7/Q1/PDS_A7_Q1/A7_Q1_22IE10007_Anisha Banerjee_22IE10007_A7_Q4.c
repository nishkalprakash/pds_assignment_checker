/*
Section 14
Roll no - 22IE10007
Name - Anisha Banerjee
Assignment 7
Program to insert an element in the array
*/
#include<stdio.h>
int main()
   {
     int a[100];
     int b[100];
     int i,x,pos,n;
     printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("Enter the array elements\n");
    for(i=0;i<n;i++)
       scanf("%d",&a[i]);
    printf("Enter the number to be inserted\n");
       scanf("%d",&x);
    if(x<a[0])
      pos=0;
    if(x>a[n-1])
      pos=n-1;
    for(i=1;i<n;i++)
      {
        if((x>a[i-1])&&(x<a[i]))
          pos=i;
       }
    if((pos!=0)&&(pos!=(n-1)))
      {
    for(i=0;i<pos;i++)
       b[i]=a[i];
    b[pos]=x;
    for(i=pos+1;i<n+1;i++)
       b[i]=a[i-1];
    printf("Output Array: ");
    for(i=0;i<n+1;i++)
          printf("%d ",b[i]);
       }
    if(pos==0)
      {
      printf("Output Array: ");
      printf("%d ",x);
      for(i=0;i<n;i++)
       printf("%d ",a[i]);
      }
    if(pos==(n-1))
      {
        printf("Output Array: ");
      
      for(i=0;i<n;i++)
       printf("%d ",a[i]);
      printf("%d ",x);
      }
    return 0;
   }
