/* Name: Abhijit Kumar
Section 14
Roll no. 22IM10001
Question 1
Topic- ------------------- */
#include<stdio.h>
int*Merge(int size1,int size2,int*ptr1,int*ptr2)
{
int size3=size1+size2,i,j;
int C[size3];
if (*ptr1>*ptr2)
C[0]=*ptr1;
else C[0]=*ptr2;
}
int main()
{
int size1,size2,D;
int A[size1];
int B[size2];
int*ptr1;
int*ptr2;
printf("Enter the number of elements in array A : ");
scanf("%d",&size1);
printf("\nEnter the number of elements in array B : ");
scanf("%d",&size2);
printf("\n");
int j=size1+size2;
for(int temp1=0;temp1<size1;temp1++)
{
printf("Enter the element of the array A : ");
scanf("%d",&A[temp1]);
printf("\n");
}
for(int temp2=0;temp2<size2;temp2++)
{
printf("Enter the element of the array B : ");
scanf("%d",&B[temp2]);
printf("\n");
}
printf("array A : ");
for(int tep1=0;tep1<size1;tep1++)
{
printf("%d ",A[tep1]);
}
printf("\narray B : ");
for(int tep2=0;tep2<size2;tep2++)
{
printf("%d ",B[tep2]);
}
printf("\n");  
ptr1=&A[0];
ptr2=&B[0];
*ptr1=A[0];
*ptr2=B[0];
printf("Size of array C is : %d",j);

}


