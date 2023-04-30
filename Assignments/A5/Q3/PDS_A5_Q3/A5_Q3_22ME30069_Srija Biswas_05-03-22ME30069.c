//Name-Srija Biswas
//Section-2
//Roll No.-22ME30069
//Problem 1
//Description-
#include<stdio.h>
void swap(int *p,int *q)
{
    int c;
    c=*p;
    *p=*q;
    *q=c;
}
void reverse(int *ar,int n)
{
   while(n>0)
    {return (&ar[n],n);

    printf("%d",ar[n-1]);
    n--;}
}
int main()
{
    int p,q,ar[100],n;
    printf("Enter two Numbers as range\n");
    scanf("%d%d",&p,&q);
    swap(&p,&q);
    printf("%d,%d\n",p,q);
    printf("Enter range of array\n");
    scanf("%d",&n);
    printf("Enter array values\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    printf("Array in reverse\n");
    reverse(ar,(n-1));
}
