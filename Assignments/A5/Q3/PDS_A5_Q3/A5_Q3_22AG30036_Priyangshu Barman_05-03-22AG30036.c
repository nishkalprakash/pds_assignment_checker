#include<stdio.h>
int main()
{
int n, A[100], i;
printf ("Enter the size of the array : ");
scanf ("%d",&n);
for (i=0; i < n; ++i)
scanf ("%d",&A[i]);
for (i=n-1; i >= 0; --i)
printf ("%d ", A[i]);
printf("\n");
return 0;
}
