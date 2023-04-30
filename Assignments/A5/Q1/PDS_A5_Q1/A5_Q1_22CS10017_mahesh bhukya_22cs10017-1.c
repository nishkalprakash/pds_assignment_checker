/*
section :
roll no :
name :
assignment no :
*/
#include<stdio.h>
#define N 100
int main()
{
   int a[N],i,n,p1,n1;

   printf("enter limit(<=100) : ");
   scanf("%d", &n);
   printf("enter elements : ");
   for(i=0;i<n;i++)
   {
       scanf("%d", &a[i]);
   }
    for(i=0;i<n;i++)
    {
        printf("the value of a[%d]=%d\n", i,a[i]);
    }
    if(a[i]>0)
    {
        p1=a[i];
        i++;

    }
    if(a[i]<0)
    {
        n1=a[i];
        i++;

    }
    printf("n1=%d , p1=%d ,",n1,p1);

    return 0;
}
