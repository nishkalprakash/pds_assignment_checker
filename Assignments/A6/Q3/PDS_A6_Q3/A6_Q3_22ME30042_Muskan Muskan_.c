/* Section 14

    Roll No. : 22ME30042

   Name:  # Muskan#

  Assignment No: 6*/
#include<stdio.h>
int main()
{
 int size1,size2,i;
 printf("Enter the size1 and size 2:\n");
 scanf("%d %d",&size1,&size2);
 int A[size1],B[size2];
 printf("A= ");
 for(i=0;i<size1;i++)
{
  scanf("%d",&A[i]);
 
  printf("%d\t",A[i]);
}
printf("B= ");
 for(i=0;i<size2;i++)
{
  scanf("%d",&B[i]);
  printf("%d\t",B[i]);
}

return 0;
 
}