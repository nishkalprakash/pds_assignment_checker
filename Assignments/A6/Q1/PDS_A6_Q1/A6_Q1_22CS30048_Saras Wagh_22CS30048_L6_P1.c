#include<stdio.h>
#include<stdlib.h>
int print_term(int n)
{
if(n==0||n==1||n==2)
return n;
return 3*print_term(n-1)*print_term(n-2)-2*print_term(n-2)*print_term(n-3)+1;
}
int main()
{
int n;
printf("Enter the number:\n");
scanf("%d",&n);
if(n<=0)
{
printf("Invalid Input");
exit(0);
}
for(int i=0;i<n;i++)
{
printf("%d ",print_term(i));
}
return 0;
}
