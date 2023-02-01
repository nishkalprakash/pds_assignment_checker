/* NAME:VADITHYA DUSVANTH
   SECTION:14
   ROLL NO:22PH10051
   LAB:12  */
#include <stdio.h>

float harmonic_sum(int n)
{
if (n == 1)
return 1.0;
else
return (1.0/n) + harmonic_sum(n-1);
}

int main()
{
int n;
printf("Enter the value of n: ");
scanf("%d", &n);

printf("Sum of the harmonic series %d: %lf", n, harmonic_sum(n));
return 0;

}
