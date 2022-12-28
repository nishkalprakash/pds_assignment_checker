/*
 Sec      :14
 Name     :A.Tejasree Sai
 Roll no  :22CS10009
 Assignment no : 6
 Description  : Printing coprimes
*/

#include<stdio.h>
#include<stdlib.h>

int* merge(int size1,int size2,int *p1,int *p2);


int main ()
{
  int* p1,*p2,*res;
 int size1,size2,k;
 int i;
 printf("Enter size of p1 :\n");
 scanf("%d",&size1);
 printf("Enter the elements of p1 :\n");
 for(i=0;i<size1;i++)
 {
  scanf("%d",&p1[i]);
 }
 printf("Enter size of p2 :\n");
 scanf("%d",&size2);
 printf("Enter the elements of p2 :\n");
 for(i=0;i<size2;i++)
 {
  scanf("%d",&p2[i]);
 }
 printf("The elements in p1 are :");
 for(i=0;i<size1;i++)
 {
  printf(" %d",p1[i]);
 }
 printf("\n The elements in p2 are :");
 for(i=0;i<size2;i++)
 {
  printf(" %d",p2[i]);
 }
 res= merge( size1, size2,p1,p2);
 printf("\nThe merged array is :");
 for(i=0;i<size1+size2;i++)
  {
    printf(" %d",*(res+i));
 }
return 0;


}

int* merge(int size1,int size2,int *p1,int *p2)
{int *p;
p =( int*) malloc(size1+size2);
 int i1=0,i2=0,i=0;
 for(i=0;i<size1+size2,i1<size1,i2<size2;i++)
{ if(p1[i1]>p2[i2])
 {
  p[i]=p2[i2];
   
   i2++;
  }
 if(p1[i1]<p2[i2])
 {
  p[i]=p1[i1];
   
   i1++;
  }
 return p;
}
}
  
 
