/*
* Section 2
* Roll no : 22GG10052
* Name : Vedant Thakare
* Assignment : 9
* Description : Vectors
*/
#include<stdio.h>
#include<math.h>
typedef struct compl{
int *arr;}compl;
void input(compl A,compl B)
{
   int n1,n2,i;
   printf("Enter the value of dimension for vector 1:\n");
    scanf("%d",&n1);
    A.arr=(int*)malloc(n1*sizeof(int));
    printf("Enter the vectors\n");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&A.arr[i]);
    }
    printf("Enter the value of dimension for vector 2:\n");
    scanf("%d",&n2);
    B.arr=(int*)malloc(n2*sizeof(int));
    printf("Enter the vectors\n");
    for(i=0;i<n2;i++)
    {
       scanf("%d",&B.arr[i]);
    }
    check(A,B,n1,n2);
}
void check(compl A,compl B,int n1,int n2)
{
    int i;
 float modA=0;
 for(i=0;i<n1;i++)
 {
     modA+=A.arr[i]*A.arr[i];
 }
 modA=sqrt(modA);
    float modB=0;
 for(i=0;i<n1;i++)
 {
     modB+=B.arr[i]*B.arr[i];
 }
 modB=sqrt(modB);
 float mult=0;
 for(i=0;i<n1;i++)
 {
     mult+=A.arr[i]*B.arr[i];
 }
 float t=mult/(modA*modB);
 if(t==0)
    printf("the two vectors are identical");
 else if(t==1)
    printf("The two vectors are orthogonal");
 else
 {
    printf("The two vectors are neither orthogonal nor identical\n");
 }
}
int main()
{
    compl X,Y;
    input(X,Y);
    return 0;

}
