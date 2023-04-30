#include<stdio.h>
#define N 100

int main()
{
int i, n, j, swap = 0;
int arr[N] = {0};
printf("Input the number of elements to be arranged\n");
scanf("%d", &n);
if(n > 100)
{
    printf("Error : n > 100");
}
printf("Input the elements to be saved in the array\n");

for (i=0; i<n; i++)
    {
    scanf("%d", &arr[i]);
    }
printf("Original Arrays :\n");
for (i=0; i<n; i++)
    printf("%d ", arr[i]);
printf("\n");

for (i=0; i<n; i++)
{
   if(arr[i] < 0)
    {
    j = arr[i];
    arr[i] = arr[swap];
    arr[swap] = j;
    swap++;
    }
}

printf("Rearranged Arrays :\n");
for (j=0; j<n; j++)
    printf("%d ", arr[j]);
printf("\n");

return 0;
}
