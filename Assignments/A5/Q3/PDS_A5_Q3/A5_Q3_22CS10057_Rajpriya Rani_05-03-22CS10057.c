/* NAME-RAJPRIYA RANI
ROLL NUMBER-22CS10057
SECTION-2
DEPT-CSE
*/
#include <stdio.h>
void reverse(int *, int);
void cyclicShift(int *, int,int);

void swap(int p,int q)
{
    int c;
    c=p;
    p=q;
    q=c;
}

int main()
{
    int a[100],i,d,n;
    printf("enter array size: ");
    scanf("%d",&n);

    printf("enter direction: ");
    scanf("%d",&d);

    printf("enter elements: ");
    for(i=0;i<n;i++);
        scanf("%d",&a[i]);

    reverse(a,n);
    cyclicShift(a,d,n);

    return 0;

}
void reverse(int *a,int n)
{
    int i,j,t;
    for(i=0;i<n;i++)
    {

        for(j=n-1;j>0;j--)
        {
            t=a[j];         //swapping consecutive elements
            a[j]=a[j-1];
            a[j-1]=t;
        }
    }
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}
void cyclicShift(int *a,int direction,int n)
{
    int i,x;
    if(direction=1)
    {
        x=a[0];
        for(i=0;i<n-1;i++)      //loop to shift elements
        {
            a[i]=a[i+1];
        }
        a[n-1]=x;
        for(i=0;i<n;i++)
            printf("%d ",a[i]);     //loop to shift elements
    }
    else
    {
        x=a[n-1];
        for(i=n-1;i>0;i--)
        {
            a[i]=a[i-1];
        }
        a[0]=x;
        for(i=0;i<n;i++)
            printf("%d ",a[i]);
    }

}

