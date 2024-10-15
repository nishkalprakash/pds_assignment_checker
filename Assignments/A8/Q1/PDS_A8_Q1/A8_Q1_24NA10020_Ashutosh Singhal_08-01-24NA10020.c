#include <stdio.h>
#include <math.h>
int digits(int n)
{
int d;

if (n/10==0)
{
return 0;
}


return 1+digits(n);

}

printf("digits are %d",digits (8679));
return 0;

