#include<stdio.h>
/*NAME:Guguloth Bhuvan Raj
  rollno:22me30023 
  section:14 */

double harmonic_sum(int n)
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

printf("Sum of the harmonic series up to %d: %lf", n, harmonic_sum(n));

return 0;

}
