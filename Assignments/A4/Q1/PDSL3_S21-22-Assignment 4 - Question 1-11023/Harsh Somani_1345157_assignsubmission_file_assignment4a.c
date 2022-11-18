/*NAME HARSH SOMANI
SECTION 3
ROLL NUMBER 21EC10031
ASSIGNMENT CLASS 6
DEPT ECE*/
#include<stdio.h>
void c(int x[], int y[],int n,int a, int l)
{
    /*a is the current ittration in the arrey y*/
     if(a==l)
 {
        for(int j=0;j<l;j++)
        printf("%d ", y[j]);
        printf("\n");
        return;
        }

        for(int i=0;i<=n-1&&n>=l-a;i++)
        {
            y[a]=x[i];
            c(x,y,n,a+1,l);
        }


}
void pc(int x[], int n, int l)
{
    int y[l];/*temp arrey to store comb*/
    c(x,y,n,0,l);

}
int main()
{
    int n,l,x[100];
    printf("enter no. of elemwnts");
    scanf("%d",&n);
    printf("enter elemwnts");
    for ( int j=0;j<n;j++)
    {
        scanf("%d",&x[j]);
    }
     printf("enter l");/*size of combination*/
    scanf("%d",&l);
    pc(x,n,l);

}
