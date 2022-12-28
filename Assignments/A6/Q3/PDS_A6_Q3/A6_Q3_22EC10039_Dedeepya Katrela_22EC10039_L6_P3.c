//SEC:14
//ROLL NUMBER:22EC10039
//NAME:DEDEEPYA
//ASSIGNMENT:6
//DESCRIPTION:PROGRAM TO CHECK POINTS
#include <stdio.h>
#include <stdlib.h>
int *Merge(int size1,int size2,int *ptr1,int *ptr2,int size3)
{ int i,p[size3];
  //Merge=(int*)malloc((size3)*sizeof(int));
  for(i=0;i<size3;i++)
  {if(i<size2)
    {p[i]=ptr2[i];}
   if(i>=size2)
    {p[i]=ptr1[i-size2];}
  }     
  for(i=0;i<size3;i++)
  {printf("%d ",p[i]);}
}




int main()
{ int *ptr1,*ptr2,size1,size2,i,j;
  printf("enter size1:");
  scanf("%d",&size1);
  ptr1=(int*)malloc(size1*sizeof(int));
  printf("enter values:");
  for(i=0;i<size1;i++)
  {scanf("%d",&ptr1[i]);}
  printf("enter size2:");
  scanf("%d",&size2);
  ptr2=(int*)malloc(size2*sizeof(int));
  printf("enter values:");
  for(j=0;j<size2;j++)
  {scanf("%d",&ptr2[j]);}
 
  Merge(size1,size2,ptr1,ptr2,size1+size2);
 return 0; 
}
  

