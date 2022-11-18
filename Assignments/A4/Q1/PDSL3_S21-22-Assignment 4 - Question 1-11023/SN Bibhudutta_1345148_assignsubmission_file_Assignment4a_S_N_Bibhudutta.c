// S N Bibhudutta
// 21EC30043
// E&ECE Department 
// Package: Codeblocks
// Assignment 4

#include<stdio.h>

void recursion(int a[],int n,int l,int output[],int k)
{
    //BASE CASE
    if(k==l)
    {
        printf("\n");
        for (int i = 0; i <l; i++)
        {
            printf("%d ",output[i]);
        }
        return ;
        
    }

    //RECURSSION CALL FOR INCLUDING
     for (int i = 0; i < n; i++)
     {
         output[k]=a[i];
         recursion(a,n,l,output,k+1);
     }
     
    return ;

}


int main()
{
    int a[1000],o[10000];
    int l;
    int i;
    int n;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &l);

    recursion(a,n,l,o,0);

    return 0;
}
