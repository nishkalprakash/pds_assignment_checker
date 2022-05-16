#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int main()
{srand(time(NULL));
int n,k,d,p,i,count;
float D=0,ED;
printf("Enter the number of steps in each iteration\n");
scanf("%d",&n);
printf("Enter the number of iterations\n");
scanf("%d",&k);
for(i=1;i<=k;i++)
{d=0;
for(count=1;count<=n;count++)
{p=rand() & 1 ? -1 : 1;
d=d+p;}
D=D+d*d;
}
ED=sqrt(D/k);
printf("Expected distance = %f",ED);
return 0 ;
}