#include<stdio.h>
void swap(int p,int q)
{
    int t;
    t = p;
    p = q;
    q = t;
}
int main()
{
    int n;
    printf("Enter the size of the array \n");
    scanf("%d ",&n);
    int ar[n];
    printf("original array : ");
    for(int i = 0;i<n;i++)
    {
        printf("%d ",ar[i]);
    }
    printf("\n");
}
void reverse(int *a)
{

}
void cyclicShift(int *a,int direction)
{

}
