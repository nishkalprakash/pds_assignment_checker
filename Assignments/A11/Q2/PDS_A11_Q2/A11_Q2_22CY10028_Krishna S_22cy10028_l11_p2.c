#include <stdio.h>
#include <stdlib.h>
 int main()
{
	int n,k;
	printf("Enter the number:\n");			
	scanf("%d",&n);
int fib(int j){
	int n = 0;
	if (j==0) return n=0;
	if (j==1) return n=1;
	else return(fib(j-1) + fib(j-2));
}

for (int i = 0; i <= fib(n); i++)
{
if (fib(i)==n)
{
	k=1; break;
} else k=0; 
}

if (k==1)
{
	printf("Yes\n");
}else printf("No\n");
	return 0;

}