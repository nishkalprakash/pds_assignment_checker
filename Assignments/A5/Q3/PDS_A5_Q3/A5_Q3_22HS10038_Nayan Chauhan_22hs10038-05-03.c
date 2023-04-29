/*
* Section 2
* Roll No : 22HS10038
* Name : Nayan Chauhan
* Assignment No : 5
* Description : Program to check Goldbach's conjecture
*/
#include <stdio.h>
void swap(int *p, int *q)
{
    int t = *p;
    *p = *q;
    *q = t;
}
void reverse(int a[], int s, int e)
{
    swap(a+s*1, (a+(e-s)*1));
    ++s;
    --e;
    if(s>=e)
    {
        return;
    }
    else{
        reverse(a, s, e);
    }
}
void cyclicshift(int a[], int direction)
{

}














int main()
{
    int n;
    int d;
    printf("Enter the size of the array and direction: ");
    scanf("%d%d", &n, &d);
    int a[n];
    printf("Enter %d integers", n);
    for(int i = 0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    reverse(a, 0, n-1);
    for(int i = 0;i<n;i++)
    {
        printf("%d", a[i]);
    }
}
