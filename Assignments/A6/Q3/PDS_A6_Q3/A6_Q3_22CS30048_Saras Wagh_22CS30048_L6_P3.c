#include<stdio.h>
#include<stdlib.h>
void Merge(int x,int y,int *ptr1,int *ptr2)
 {
  int i=0,j=0;
  while(i<x&&j<y)
  {
	   if(*(ptr1+i)<=*(ptr2+j))
	   {
	    printf("%d ",*(ptr1+i));
	    i++;
	   }
	   if(*(ptr2+j)<=*(ptr1+i))
	   {
	    printf("%d ",*(ptr2+j));
	    j++;
  	    }
  }
   if(i==x)
   {
	    while(j<y)
	     {
	      printf("%d ",*(ptr2+j));
	      j++;
	     }
   }
 if(j==y)
   {
	    while(i<x)
	     {
	      printf("%d ",*(ptr1+i));
	      i++;
	     }
   }
}     
int main()
{
 
 int size1,size2;
 
 printf("Enter size:\n");
 scanf("%d",&size1);
 int arr1[size1];
 for(int i=0;i<size1;i++)
 {
  printf("Enter the element no.%d",i+1);
  scanf("%d",&arr1[i]);
 }
 printf("Enter size:\n");
 scanf("%d",&size2);
 int arr2[size2];
 
 
 for(int i=0;i<size2;i++)
 {
  printf("Enter the element no.%d",i+1);
  scanf("%d",&arr2[i]);
 }
 printf("A="); 
 for(int i=0;i<size1;i++)
 {
  printf("%d ",arr1[i]);
 }
 printf("\nB=");
 for(int i=0;i<size2;i++)
 {
  printf("%d ",arr2[i]);
 }
  printf("\n");
 printf("C=");
 Merge(size1,size2,arr1,arr2);
return 0;
}  
   

