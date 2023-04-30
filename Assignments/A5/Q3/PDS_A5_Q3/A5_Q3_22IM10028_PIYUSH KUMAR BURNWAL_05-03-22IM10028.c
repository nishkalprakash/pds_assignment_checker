#include <stdio.h>
void swap(int *p,int *q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}
void reverse(int *a,int i,int n)
{
    int temp;
    if (i==n/2)
    {
        return ;
    }
    else
    {
        temp=*(a+i);
        *(a+i)=*(a+n-i-1);
        *(a+n-i-1)=temp;
        reverse(&a,(i+1),n);

    }



}
int main()
{
    int n,d;
    printf("Enter the size of the array and direction");
    scanf("%d%d",&n,&d);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Original array: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("Array after reverse: ");
    reverse(&a,0,n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }





}
