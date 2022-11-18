/*NAME HARSH SOMANI
SECTION 3
ROLL NUMBER 21EC10031
ASSIGNMENT CLASS 6
DEPT ECE*/
#include<stdio.h>
int ls(int p[],int n, int k, int i)
{
   if(i==n) return(-1);
   if(k==p[i]) return(i);
   else ls(p,n,k,i+1);
}
int bs(int p[], int n, int k, int i)
{
    int mid;
    mid = (n-1+i)/2;
    if(k==p[mid]) return(mid);
    else if(k<p[mid]) bs(p,mid-1,k,i);
    else if(k>p[mid]) bs(p,n,k,mid+1);

}
int main()
{
    int n,i,x[100];
    int flag,k;
    int f=0;
    int q;
    char c,met;
    printf("enter the number of elements");
    scanf("%d",&n);
    printf("enter elements in sorted order");
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(int j=0;j<n-1;j++)
    {
        if(x[j]>x[j+1]) flag=1;
        else flag=0;
    }
    if (flag==1)
    {
        printf("not sorted ");
        printf("enter elements in sorted order");
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    printf("number to be found\n");
        scanf("%d",&k);
        printf("method1- linear \n");
         printf("method2- binery \n");
        scanf("%c%c",&c,&met);
        if(met=='1') {q=ls(x,n,k,f);
        if(q==(-1)) printf("not in array");
        else printf("the no. is at %d element in array",q);
        }
        if(met=='2'){q=bs(x,n,k,f);
        if(q==(-1))printf("not in array");
        else printf("the no. is at %d element in array",q);}
    }
    else
    {
        printf("number to be found\n");
        scanf("%d",&k);
        printf("method1- linear \n");
         printf("method2- binery \n");
        scanf("%c%c",&c,&met);
        if(met=='1') {q=ls(x,n,k,f);
        if(q==(-1)) printf("not in array");
        else printf("the no. is at %d element in array",q);
        }
        if(met=='2'){q=bs(x,n,k,f);
        if(q>=0)printf("the no. is at %d element in array",q);
        else printf("not in array",q);}
    }
}
