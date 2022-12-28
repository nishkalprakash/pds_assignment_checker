#include <stdio.h>
int print_term(int n)
{
if(n<=2)
return n;
else
return (3*print_term(n-1)*print_term(n-2))-(2*print_term(n-2)*print_term(n-3))+1;
}
int main()
{
int k;
printf("Enter the number of terms : \n");
scanf("%d",&k);
int i;
if(k>0)
{
for(i=1;i<=k;i++)
{
printf("%d,",print_term(i));
}
}
else
printf("invalid input");
return 0;
}
