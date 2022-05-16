#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main ()
{int n,d1,d2,d3;
printf("Enter a 3 digit number\n");
scanf("%d",&n);
d1=n%10;
n=n/10;
d2=n%10;
n=n/10;
d3=n%10;
printf("The reversed number is %d%d%d",d1,d2,d3);
 return 0 ;   
}