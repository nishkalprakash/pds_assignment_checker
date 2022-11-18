/*
Name: Shashwata Roy
Roll: 21MA10055
Dept: Maths and Computing
Package: Codeblocks
Assignment class: 4
Test: 2
*/

#include<stdio.h>

void print(int a[],int x,int y)     //Print from index x to y
{
    for(int i=x; i<=y; i++)
    {
        printf("%d ",a[i]);
    }
}

int sum(int a[],int x,int y)       //Sum from index x to y
{
    int s=0;
    for(int i=x; i<=y; i++)
    {
        s+=a[i];
    }
    return s;
}

int main()
{
    int n,j,i,m,k,p,q;
    printf("Enter n: ");
    scanf("%d",&n);
    int a[n],x[n],y[n];
    printf("Enter elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        x[i]=y[i]=0;
    }
    m=a[0];                 //Initial value of max element
    k=0;
    for(i=0; i<n; i++)      //Traversing across the array and changing start and end indices
    {
        for(j=i; j<n; j++)
        {

            if(m==sum(a,i,j))
            {
                x[k]=i;            //Storing start indices of multiple plausible subarrays
                y[k]=j;            //Storing end indices of multiple plausible subarrays
                k++;
            }
            else if(m<sum(a,i,j))
            {
                m=sum(a,i,j);
                k=0;
                p=i;            //Storing indices for k==0 case
                q=j;
            }
        }
    }
    printf("Largest sum = %d\n",m);
    printf("Sub-arrays = ");
    if(k!=0)
    {
        for(i=0; i<k-1; i++)
        {
            print(a,x[i],y[i]);
            printf("OR ");
        }
        print(a,x[k-1],y[k-1]);
    }
    else
    {
        print(a,p,q);
    }
    return 0;
}
