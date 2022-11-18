#include <stdio.h>
int minf(int a[],int n)//find min vaue in array
{
    int i,min,m;
    min=0;
    for(i=1;i<m;i++)
    {
        if(a[min]>a[i])
        min=i;
    }
    return min;
}
int maxf(int a[],int n)//find max in array
{
    int i,max,m;
    max=0;
    for(i=1;i<m;i++)
    {
        if(a[max]<a[i])
        max=i;
    }
    return max;
}
int minTotalIqDiff(int m, int a[],int b[], int pos,int n) //start with m sized array and check with a[pos]
{                                                          //using recursion we go thru all positions in a
    int min,minval;                                         // essentiallyfind 2 min values in array of b and a[pos] combined
    min=minf(b,m);                                          //then store sum of two min values in b returning size of supposed array to m
    minval=b[min];
    b[min]=a[pos];
    min=minf(b,m);
    b[min]=b[min]+minval;
    if(pos>=n-1)
    {
        return (maxf(b,m)-minf(b,m));  //finally find difference
    }
    else
    minTotalIqDiff(m,a,b,pos+1,n);    //increase position
}

int main()
{
    int n;
    printf("Enter size of array");
    scanf("%d",&n);
    int a[n],i,m;
    printf("Enter array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter m:");
    scanf("%d",&m);
    int b[m];
    for(i=0;i<m;i++)
    b[i]=a[i];
    int s=minTotalIqDiff(m,a,b,m,n);
    printf("\n%d\n", s);
    return 0;
}