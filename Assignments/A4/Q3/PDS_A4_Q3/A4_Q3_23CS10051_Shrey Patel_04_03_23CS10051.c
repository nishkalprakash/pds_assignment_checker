//Shrey G Patel
//23CS10051
#include <stdio.h>
#include <math.h>
int main()
{
int n,i=0,k;
printf("ENTER A NUMBER:");
scanf("%d",&n);
k=n;
while(n>0)
{
i=i*10+n%10;
n=n/10;
}
if(i==k)
printf("Yes\n");
else 
printf("not a palindrome\n");
return 0;
}



