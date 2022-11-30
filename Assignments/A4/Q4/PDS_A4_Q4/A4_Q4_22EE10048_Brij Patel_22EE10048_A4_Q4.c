/*

SECTION 14

Roll No:22EE10048

Name: Brij

Assignment NO: 4

Description-

*/
#include <stdio.h>
int main()
{
int n;
printf("Enter a number\n");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
for(int j=1;j<=i;j++)
{
if(j%2==0)
printf("0 ");
else
printf("1 ");
}
printf("\n");
}
return 0;
}
