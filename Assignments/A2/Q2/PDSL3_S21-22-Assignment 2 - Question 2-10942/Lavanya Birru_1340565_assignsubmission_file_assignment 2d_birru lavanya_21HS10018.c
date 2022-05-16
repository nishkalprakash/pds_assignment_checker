#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>
int main()
{srand(time(NULL));
int k, i,p;
float d=0, D=0;
for (k = 1; k <= 100000; k++)
{
for ( i = 1; i <= 25; i++)
{

p=rand() & 1 ? -1 : 1;
d=d+p;

}
D=D+(d*d);
}
printf("%d /n",D);
printf("%f",sqrt(D/100000));
return(0);

}
