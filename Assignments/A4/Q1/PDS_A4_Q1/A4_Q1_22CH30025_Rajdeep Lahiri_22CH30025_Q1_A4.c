#include <stdio.h>
int main()
{
printf("Enter an integer: ");
int n;
scanf("%d",&n);
int i;
printf("The factors of the number are :");
for(i=1;i<=n;i++)
{
if(n%i==0){
printf("%d",i);
printf(" ");
}
}

return 0;
}	
