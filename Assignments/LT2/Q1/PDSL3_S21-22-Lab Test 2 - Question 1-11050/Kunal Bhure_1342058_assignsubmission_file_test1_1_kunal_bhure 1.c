#include<stdio.h>
int main()
{
    int n,i,a[20];
    //scanning number of elements
    printf("enter n- ");
    scanf("%d",&n);
    //scanning the elements
    printf("enter elements- ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    //calling function max
    max(a,n);
}

//function to find max sum possible
int max(int a[],int n)
{
    int i,j,sum=0,max=0;
    for(i=0; i<n; i++)
    {
        for(j=i; j<n; j++)
        {
            sum=sum+a[j];
            //comparing new sum with old declared max
            if(sum>max)
            {
                max=sum;
            }
        }
        sum=0;
    }
    //printing the final max value
    printf("%d",max);
}
