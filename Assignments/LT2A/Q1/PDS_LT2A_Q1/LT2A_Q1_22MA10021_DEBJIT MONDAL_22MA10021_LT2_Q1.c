#include <stdio.h>
#include <stdlib.h>
void input1(int *p,int*q)
{
scanf("%d",p);
scanf("%d",q);
}
void create(int *a[],int m,int n)
{
int i,j;
for(i=0;i<n;i++)
    {
         a[i]=(int *)malloc(n*sizeof(int));
    }
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
}
int output(int *a[],int m,int n)
{
    if(n==-1&&m==-1) return 0;
    else
    {
         output(a,m--,n--);
    }
}
int main()
{
int m,n;
input1(&m,&n);
int *arr[m];
create(arr,m,n);
output(arr,m,n);

	return 0;
}
