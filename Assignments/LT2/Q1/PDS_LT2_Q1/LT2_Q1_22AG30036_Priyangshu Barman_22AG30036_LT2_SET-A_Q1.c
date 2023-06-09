/*
NAME = Priyangshu Barman
ROLL NO. = 22AG30036
SECTION = 2
*/
#include<stdio.h>
#include<math.h>
float mean(int *a, int n)
{
    if(n == 1)
        return (float)a[n-1];
    else
        return ((float)(mean(a,n-1)*(n-1)+a[n-1])/n);
}
int main()
{
    int v;
    scanf("%d", &v);
    printf("List = [%d,]\n", a[]);
    scanf("%d", &a[v]);
    int n = sizeof(A)/sizeof(A[0]);
    printf("Mean = %.2f\n", mean(a,n));
}

