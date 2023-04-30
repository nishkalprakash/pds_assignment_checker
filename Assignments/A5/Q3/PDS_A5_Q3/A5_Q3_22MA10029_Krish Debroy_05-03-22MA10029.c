# include <stdio.h>

/*
    Section 2
    Name : Krish Debroy
    Roll No. : 22MA10029
    Assignment No :- 5
    Description : Reversing an array and shifting the numbers in a cyclic manner  .
*/
int n;

void swap(int *p, int *q)
{
    int temp;

    temp=*p;
    *p=*q;
    *q=temp;
}

void reverse( int *a,int i)
{

    if(i<n/2)
    {
        swap(&a[i],&a[n-1-i]);/*We swap elements with the same index when counted from opposite ends of an array, with the limit being the n/2th element. */
        reverse(a,i+1);
    }

    return;
}

void cyclicShift(int *a, int direction, int i)
{
    if (direction==1)
    {
        if (i<n-1)
        {
            swap(&a[i],&a[i+1]);/*We keep swapping the first element with the element to its right till it reaches the last element of the array. */
            cyclicShift(a,direction,i+1);
        }
    }
    else
    {
        if (i<n-1)
        {
            swap(&a[n-1-i],&a[n-i-2]);/*We keep swapping the last element with the element to its left till it reaches the first element of the array. */
            cyclicShift(a,direction,i+1);
        }
    }
    return;
}


int main()
{
    int dir;
    printf("Enter the size of array and direction : \n");
    scanf("%d%d",&n,&dir);
    int arr[n];
    printf("\nEnter the %d elements of the array : \n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nOriginal Array : ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nArray after reverse : ");
    reverse(arr,0);
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    if (dir==1)
        printf("\nArray after left cyclic shift : ");

    else
        printf("\nArray after right cyclic shift : ");

    cyclicShift(arr,dir,0);
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}
