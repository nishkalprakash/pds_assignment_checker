#include<stdio.h>
#define N 100
int main ()
{
int i, n, f=0;

scanf("%d", &n);
int number[n], count[100];
for (i=0;i<100;i++)count[i] =0;
for (i = 0; i < n; i++)
{
scanf("%d", &number[i]);
}
printf("Original Array: ");
while (f < n)
{
printf("%d ",number[f]);
f++;
}

/*okay till here */

printf("\n Duplicates: \n");

for (i = 0; i < n; i++)

{
count[number[i]]++;
}

for (i = 0; i < 100; i++)
{
if (count[i] > 0)
printf("%d ",i);
}
return 0;
}
