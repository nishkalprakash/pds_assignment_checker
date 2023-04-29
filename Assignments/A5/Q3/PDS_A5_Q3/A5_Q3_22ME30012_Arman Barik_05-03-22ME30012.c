# include <stdio.h>
void swap(int* n,int* m);
void reverse(int* a,int i,int n);
void cyclicShift(int *a, int direction, int i,int n);
void main()
{
    int arr[100],n,d;
    printf("Enter the size of the array and the direction :\n"); // if we want left shift then give d=1 else any other value for right shift.
    scanf("%d" "%d",&n,&d);


    for(int i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    printf("Original array:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",*(arr+i));
    }
    printf("\n");

    int i=0;
    reverse(arr,i,n-1);
    printf("array after reverse:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",*(arr+i));
    }
    printf("\n");

    cyclicShift(arr,  d,  i, n);
    printf("array after cyclicshift:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",*(arr+i));
    }
    printf("\n");

    cyclicShift(arr,  d,  i, n);



}
void swap(int *n,int* m)
{
    int temp;
    temp=*n;
    *n=*m;
    *m=temp;
}
void reverse(int *a,int i,int n)
{
    if(i>=n) return;
    swap(&a[i],&a[n]);
    i++; n--;
    if(i>=n) return;
    reverse(a,i,n);

}
void cyclicShift(int *a, int direction, int i,int n)
{

    if (direction=1)
    {
        swap((&a[i]),(&a[i+1]));
        i++;
        if(i>n-2) return;
        cyclicShift(a,direction,i,n);
    }
    else
    {
        swap((&a[n-1]),(&a[n-2]));
        n--;
        if(n<2) return;

        cyclicShift(a,direction,i,n);

    }
}
