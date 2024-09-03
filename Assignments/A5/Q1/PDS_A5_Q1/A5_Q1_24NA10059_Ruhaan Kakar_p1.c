#include<stdio.h>
#define N 100
int main()
{
int i, a, b;
int number[N];
scanf("%d", &a);
for (i = 0; i < a; i++)
{
scanf("%d", &number[i]);
}

b = 0;
printf("Original Array: ");

while (b < a)
{
printf("%d ",number[b]);
b++;
}

printf("Rearranged array: ");
for (i = 0 ; i < a; i++)
{
if (number[i] < 0)
printf("%d ", number[i]);
}
for (i = 0 ;i < a; i++)
{
if (number[i] > 0)
printf("%d ", number[i]);
}
return 0;
}
