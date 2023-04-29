#include<stdio.h>
void swap(int *p,int *q)
{
    int r;
    r=*p;
    *p=*q;
    *q=r;
}
int main()
{
    int i,a,b,n,p[i];
    printf("Enter values of a and b:");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("a=%d,b=%d\n",a,b);
    printf("Enter no of elements in array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
      {
        scanf("%d",&p[i]);
      }
    printf("\nelements of array");
    for(i=0;i<n;i++)
      {
        printf("%d",p[i]);
      }

}
