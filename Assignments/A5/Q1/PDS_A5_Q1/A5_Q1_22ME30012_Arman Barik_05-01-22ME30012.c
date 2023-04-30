# include <stdio.h>
void main()
{
    int arr[100],n;
    printf("Number of elements you want to enter: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Original array:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    for(int i=0;i<n;i++)
    {
        int k=1,n;
        if(arr[i]<0)
        {
             n=arr[i];
             for(int j=i-1;j<n-1;j++)
             {
                    arr[j]=arr[j+1];
             }
            /* for(int m=n;m>k-1;m--)
             {
                 arr[m]=arr[m-1];
             }
             arr[k-1]=n;
             k++;*/
        }
    }

    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");

}
