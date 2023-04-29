
#include<stdio.h>
void swap(int *p,int *q)
{
    int a;
    a=*p;
    *p=*q;
    *q=a;

}
void reverse(int *arr,int s,int e)
{
    if(s>=e)
        return ;
    swap(&arr[s],&arr[e]);
    s++;
    e--;
    reverse(arr,s,e);


}
void cycleshift(int *arr,int direction,int s)
{

    if(direction==1)
    {

             reverse(arr,1,s-1);
             reverse(arr,0,s-1);
             printf("the left cyclic array is : ");
             return;




    }
}
int main()
{
    int n,x;
    printf("the number n is");
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++)
    {
        printf("enter the %d element of an array",i);
        scanf("%d",&x);
        arr[i]=x;
    }
    reverse(arr,0,n-1);
    printf("the reverse array : ");
    for(int j=0;j<n;j++)
    {
        int y;
        y=arr[j];
        printf("%d ",y);
    }
    int d;
    printf("the direction is");
    scanf("%d",&d);
    cycleshift(arr,d,n);

     for(int j=0;j<n;j++)
    {
        int y;
        y=arr[j];
        printf("%d ",y);
    }

}
