/*
Name: Shashwata Roy
Roll: 21MA10055
Dept: Maths and Computing
Package: Codeblocks
Assignment class: 4
*/
#include<stdio.h>

static int l1; //Required to store a non changing value of l

void comb(int a[],int n,int l)
{
    if(n==0)
        printf("\n");
    else if(l==0)
    {
        printf("\n");
        comb(a,n-1,l1);
    }
    else
    {
        printf("%d ",a[n-1]);
        comb(a,n,l-1);
    }
}

int main()
{
    int i,n;
    const int l;
    printf("Enter the length of the give array: "); //Length is required first as array can't be initialized without it
    scanf("%d",&n);
    int a[n];
    printf("Enter the array elements:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter l: ");  //l is the length of each sub-array chosen
    scanf("%d",&l);
    l1=l;
    comb(a,n,l); //Calling function
    return 0;
}
