#include<stdio.h>
#include<math.h>
/* (a) */
void swap (int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
   int p,q;
   printf("Enter two integers:\np= ");
   scanf("%d",&p);
   printf("q= ");
   scanf("%d",&q);
   swap(&p,&q);
   printf("Now after swaping p=%d q=%d",p,q);
   return 0;

}
/* (b) */
void array()
{
    int n,i;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter integers: ");
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
}
/* (c) */
int reverse()
{
    int n,i;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("Original array: ");
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    printf("Array after reverse: ");
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
