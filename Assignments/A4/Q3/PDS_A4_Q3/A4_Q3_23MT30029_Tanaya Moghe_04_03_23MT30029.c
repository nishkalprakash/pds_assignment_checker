//Roll no:<23MT30029>
//Name:<Tanaya Moghe>

#include <stdio.h>
int main()
{ 
	int n,i,j=0;
	printf("Enter a positive integer\n");
	scanf("%d", &n);
	i=n;
	while(n>0){
		j=j*10 + n%10;
		n/=10;
 		}
	if(i==j)
		printf("The digits form a palindrome\n");
	else 
		printf("The digits do not form a palindrome\n");
	return 0;
}
 
