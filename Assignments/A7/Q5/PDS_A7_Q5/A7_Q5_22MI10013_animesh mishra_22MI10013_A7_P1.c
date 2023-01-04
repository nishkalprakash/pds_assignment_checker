/*
name: animesh mishra
roll no:22mi10013 
topic:find elements out of order
*/
#include<stdio.h>
int main()
{
      int i=0,j,n,k=0,flag=0;
      printf("type the size of array.\n");
      scanf("%d",&n);
      int a[n];
      printf("type %d integers for the array.\n",n);
      for(i=0;i<n;i++)
        scanf("%d" ,&a[i]);
      for(i=0;i<n;i++){
         int m=0;
         for(j=0;j<n;j++){
               if(j>i){
                        if(a[j]<a[i])
                         m=1;
                } 
               else  if (j<i){
                   if(a[j]>a[i])
                  m=1;
               }
               if(m==1){
                     k++;
                     break;
             }
      }
  }
       printf("out of the order:%d\n" , k);
       return 0;
 }
