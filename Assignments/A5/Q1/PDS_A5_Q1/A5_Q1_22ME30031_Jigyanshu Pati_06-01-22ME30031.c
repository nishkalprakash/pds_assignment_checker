//Section 2
//RollNo:22ME30031
//Name:Jigyanshu Pati
// LAB TEST:1
//description:
#include<stdio.h>
#define N 100
int main()
{
   int A[N],i,a,B[N],j=0,C[N],h=0,count=0,count1=0;
   scanf("%d",&a);
   if (a>N)
   {
       printf ("Error: n > 100");
       goto a;
   }
   for (i=0;i<a;i++)
   {
       scanf("%d",&A[i]);
   }
   printf("Original array: ");
   for (i=0;i<a;i++)
   {
       printf("%d ",A[i]);
   }
   printf("\n");
   printf("Rearranged array: ");
   for (i=0;i<a;i++)
   {
       if (A[i]<0)
       {
           B[j]=A[i];
           j=j+1;
           count++;
       }
       if (A[i]>=0)
       {
           C[h]=A[i];
           h=h+1;
           count1++;
       }
   }
   for (j=0;j<count;j++)
   {
       printf("%d ",B[j]);
   }
   for (h=0;h<count1;h++)
   {
       printf("%d ",C[h]);
   }





   a:return 0;

}
