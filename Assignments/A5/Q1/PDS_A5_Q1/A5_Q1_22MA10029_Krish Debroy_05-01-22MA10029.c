# include <stdio.h>
#define N 100

int main()
{
    /*
    Section 2
    Name : Krish Debroy
    Roll No. : 22MA10029
    Assignment No :- 5
    Description : Rearrangement of the negative elements.
    */
    int n, arr[N],temp;
    printf("Enter the number of elements : \n");
    scanf("%d",&n);
    if(n>100)
    {
        printf("Error : n>100");
        return 0;
    }
    printf("\nEnter the elements to be rearranged : \n");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }
    printf("\n\nOriginal Array: \n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);

    }
    for (int j=n-1;j>0;j--) /*beginning from the last element we iterate through the array applying the condition that if the element before a negative element is positive , we swap the two elements.*/
    {
        for (int i=n-1;i>0;i--)
            if((arr[i]<0)&&(arr[i-1]>=0))
            {
                temp=arr[i-1];
                arr[i-1]=arr[i];
                arr[i]=temp;
            }
    }
    printf("\nRearranged Array :\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}
