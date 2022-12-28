#include<stdio.h>
#include<stdlib.h>
void SearchSet(int *A,int x,int a)
{
for(int i=0;i<a;i++)
{
if(*(A+i)==x)
{
printf("%d is present in Set A",x);
exit(0);
}
}
void SearchSet(int *B,int y,int b)
{
for(int i=0;i<b;i++)
{
if(*(B+i)==y)
{
printf("%d is present in Set B",y);
exit(0);
}
}
if(i==b)
printf("%d is not present in set B",y);
}
int main()
{
printf("Enter size of array A:\n);
scanf("%d",a);
int A[a];
for(int i=0;i<a;i++)
{
printf("Enter the element:\n");
scanf("%d",&A[i]);
}
printf("Enter size of array B:\n");
scanf("%d",b);
int B[b];
for(int i=0;i<b;i++)
{
printf("Enter the element:\n");
scanf("%d",&B[i]);
}
do{
printf("Press ‘1’ to perform search in Set A\n
         Press ‘2’ to perform search in Set B\n
         Press ‘3’ to perform Union of Set A and Set B\n
         Press ‘4’ to perform Intersection of Set A and Set B\n
         Press ‘5’ to perform Difference of Set A and Set B\n
         Press any other key to quit");
printf("Enter the number:\n");
scanf("%d",&n);
if(n==1)
{
printf("Enter the element that you want to search in set A:\n);
scanf("%d",&x);
SearchSet(A,x,a);
}
if(n==2)
{
printf("Enter the element that you want to search in set B:\n);
scanf("%d",&y);
SearchSet(B,y,b);
}

