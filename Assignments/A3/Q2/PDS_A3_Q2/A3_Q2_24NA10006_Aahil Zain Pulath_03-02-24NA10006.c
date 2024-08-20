#include <stdio.h>
int main()
{
int dep,with,bal=0,temp1;
printf("DEPOSIT:");
scanf("%d",&dep);
printf("Withdraw:");
scanf("%d",&with);
if (dep>=with){
bal=dep-with;
printf("Balance:%d",bal);}
else {
printf("withdraw failed:Balance is insufficient");}
}
