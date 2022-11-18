//Sarthak Gupta
//21IM10030
//Section 3
// Test2a
#include<stdio.h>
void sum2(int a[],int n,int num)
{
    static int max=0;
    int i,j,sum=0,temp=0;
    for(i=0;i<n-n%num;i++)
    {
        sum=0;
        for(j=0;j<num;j++)
        {
            if((i+j)>n)
            {
                break;
            }
            else
            {
                sum=sum+a[i+j];
            }   
        }
        if(temp<sum)
        {
            temp=sum;
        }
    }
    if(max<=temp)
    {
        max=temp;
    }
    if(num==n)
    {
        printf("%d",max);
        return;
    }
    else
    {
        return sum2(a,n,num+1);
    }
}
int main()
{
    int a[20];
    int n,i;//n is the number of integers in array
    printf("Enter the number of elements in array\n");
    scanf("%d",&n);
    printf("Enter the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Largest sum=");
    sum2(a,n,1);
    return 0;
}