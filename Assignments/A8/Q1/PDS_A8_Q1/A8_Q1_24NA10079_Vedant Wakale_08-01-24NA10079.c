#include <stdio.h>
#include <math.h>


int digits(int n)
{
int i;
if ((n/10)==0) {
	i++;
	digits(n/10);
}
	return i;
	
}
	
int IsPalindrome (int n)
{
int m;
	m = digits(n);
	if(m==1)
{
	printf("palindrome");

	return;
}
	else { 
	int x,first_dig,last_dig,k,d;
	
	first_dig = n/(int)pow(10,(m-1));
	last_dig=n%10;
	if (first_dig==last_dig)
{
	k=n%x;
	d = k/10;
	IsPalindrome(d);
}
	
	else 
	{
	printf("not palindrome");
	}

}
}


int main()
{
int n;

scanf("%d",n);
IsPalindrome(n);
return 0;

}





