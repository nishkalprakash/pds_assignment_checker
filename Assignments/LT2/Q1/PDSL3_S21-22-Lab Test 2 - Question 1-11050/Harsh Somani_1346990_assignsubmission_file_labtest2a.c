/*NAME HARSH SOMANI
SECTION 3
ROLL NUMBER 21EC10031
ASSIGNMENT CLASS 6
DEPT ECE*/
#include<stdio.h>
void prt(int x[], int start, int end)
{
    int k;
    for(k=start;k<=end;k++) printf("%d ",x[k]);
    printf("\n");

}
int main()
{
    int n,a[100],max=1;
    int i,j,k,sum;
    printf("enter n\n");/*assume n is between 1 and 20*/
    scanf("%d",&n);
    printf("enter elements\n");
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            sum=0;
            for(k=i;k<=j;k++)
              {
                  sum=sum+a[k];
              }
              if(sum>max) max=sum;
        }
    }
    printf("largest sum %d\n",max);
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            sum=0;
            for(k=i;k<=j;k++)
              {
                  sum=sum+a[k];
              }
              if(sum==max) prt(a,i,j);
        }
    }
}
