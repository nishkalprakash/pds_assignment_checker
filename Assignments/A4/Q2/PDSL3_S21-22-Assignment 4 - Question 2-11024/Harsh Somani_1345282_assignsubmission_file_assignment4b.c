/*NAME HARSH SOMANI
SECTION 3
ROLL NUMBER 21EC10031
ASSIGNMENT CLASS 6
DEPT ECE*/
#include<stdio.h>
void c(int k, int i, int n,int m, int x, int sum, int j)
{

if(x==0&&i==1)
{
    return;
    printf("%d",j);
}

    sum = sum +x;
    if (sum==k&&i==n)
    {
        return;
       j++;
    c(k,i,n,m,m--,0,j);
    }
    if (sum<k) c(k,i++,n,m,m,sum,j);
    if (sum>k) c(k,i,n,m,m--,sum,j);

}
void myhostelchangingtrips(int k, int i, int n,int m)
{

}
int main()
{
    int n,m,k,i=1,sum=0;
    printf("no. of days");
    scanf("%d",&n);
    printf("no. of items");
    scanf("%d",&k);/*k>n is assumed*/
    printf("max item for a day");
    scanf("%d",&m);
    c(k,i,n,m,m,sum,0);
}
