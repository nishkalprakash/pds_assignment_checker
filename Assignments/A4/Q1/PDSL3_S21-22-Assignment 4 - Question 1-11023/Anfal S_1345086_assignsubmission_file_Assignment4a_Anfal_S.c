/*
Name: Anfal S
Roll no: 21AE10003
Section: 3
Dept: AE
Package: Codeblocks
Assignment class: 4
Operating System: windows
*/
#include<stdio.h>
void sub(int A[],int l,int q)
{
    int i;
    for(i=0;i<l;i++)
    {
        printf("%d",A[i+q]);
    }
    printf("\n");
    if(q-1!=0) sub(A,l,q-1);
    if(q-1==0) return;
}

int main()
{
    int x,a[x],i,l,q;
    printf("enter the number of element you want:");
    scanf("%d",&x);
    printf("enter the elements\n");
    for(i=0;i<=x;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the length you want:");
    scanf("%d",&l);
    q=x-l;
    sub(a,l,q);
    return 0;
}
